/*
 * XREFs of KiResetForceIdle @ 0x1404048A4
 * Callers:
 *     KeClearForceIdle @ 0x1402BA2B0 (KeClearForceIdle.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B6F84 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KeIsForceIdleEngaged @ 0x1404049E0 (KeIsForceIdleEngaged.c)
 *     KiSetForceIdleState @ 0x140484E74 (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x1405D1B18 (PoTraceForceIdleReset.c)
 */

__int64 __fastcall KiResetForceIdle(unsigned int a1, char a2)
{
  bool v2; // bl
  __int64 result; // rax
  bool v6; // al
  __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v10; // ett
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  v2 = 0;
  if ( !a2 )
  {
    v6 = KeDisableInterrupts();
    v11 = 0;
    v2 = v6;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v11);
      while ( KiForceIdleLock );
    }
  }
  result = KeIsForceIdleEngaged();
  if ( (_BYTE)result )
  {
    KiSetForceIdleState(3LL);
    if ( a1 == 3 )
      v7 = 0LL;
    else
      v7 = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
         + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiForceIdleStartTime = v7;
    if ( !KiForceIdleStopDpc.DpcData )
      KiForceIdleStopDpc.Number = KiClockTimerOwner + 2048;
    KeInsertQueueDpc(&KiForceIdleStopDpc, 0LL, 0LL);
    result = PoTraceForceIdleReset(a1);
  }
  if ( !a2 )
  {
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
    if ( v2 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        LODWORD(result) = *SchedulerAssist;
        do
        {
          v10 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v10 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return result;
}
