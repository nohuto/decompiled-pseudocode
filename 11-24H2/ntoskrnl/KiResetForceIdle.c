/*
 * XREFs of KiResetForceIdle @ 0x14040C2A4
 * Callers:
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 *     KeClearForceIdle @ 0x1403CB798 (KeClearForceIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B9944 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiSetForceIdleState @ 0x1403CBA34 (KiSetForceIdleState.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KeIsForceIdleEngaged @ 0x14040C350 (KeIsForceIdleEngaged.c)
 *     PoTraceForceIdleReset @ 0x1405D4358 (PoTraceForceIdleReset.c)
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
  unsigned __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
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
      v7 = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec + RtlGetInterruptTimePrecise(&v12);
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
