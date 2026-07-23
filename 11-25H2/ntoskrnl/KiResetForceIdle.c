/*
 * XREFs of KiResetForceIdle @ 0x140404598
 * Callers:
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 *     KeClearForceIdle @ 0x1403551F8 (KeClearForceIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B5B04 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x1403558C8 (KiSetForceIdleState.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KeIsForceIdleEngaged @ 0x140404640 (KeIsForceIdleEngaged.c)
 *     PoTraceForceIdleReset @ 0x1405CF99C (PoTraceForceIdleReset.c)
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
  int v11; // [rsp+38h] [rbp+10h] BYREF
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
    KiSetForceIdleState(3u);
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
