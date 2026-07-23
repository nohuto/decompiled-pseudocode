/*
 * XREFs of KiForceIdleInterruptNotify @ 0x140404948
 * Callers:
 *     KiDispatchPassiveInterrupts @ 0x1404DE3D0 (KiDispatchPassiveInterrupts.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiCheckAndRearmForceIdle @ 0x1403B03B8 (KiCheckAndRearmForceIdle.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KeIsForceIdleEngaged @ 0x1404049E0 (KeIsForceIdleEngaged.c)
 *     KiSetForceIdleState @ 0x140484E74 (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x1405D1B18 (PoTraceForceIdleReset.c)
 */

void KiForceIdleInterruptNotify()
{
  bool v0; // al
  bool v1; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  if ( !KiForceIdleDisabled )
  {
    if ( KiForceIdleState == 4 )
    {
      PerformanceCounter.QuadPart = 0LL;
      v0 = KeDisableInterrupts();
      v6 = 0;
      v1 = v0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v6);
        while ( KiForceIdleLock );
      }
      if ( (unsigned __int8)KeIsForceIdleEngaged() )
      {
        KiSetForceIdleState(3LL);
        KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
                             + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
        if ( !KiForceIdleStopDpc.DpcData )
          KiForceIdleStopDpc.Number = KiClockTimerOwner + 2048;
        KeInsertQueueDpc(&KiForceIdleStopDpc, 0LL, 0LL);
        PoTraceForceIdleReset(1LL);
      }
      _InterlockedAnd64(&KiForceIdleLock, 0LL);
      if ( v1 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v4 = *SchedulerAssist;
          do
          {
            v5 = v4;
            v4 = _InterlockedCompareExchange(SchedulerAssist, v4 & 0xFFDFFFFF, v4);
          }
          while ( v5 != v4 );
          if ( (v4 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
    }
    else if ( (unsigned int)(KiForceIdleState - 1) <= 1 )
    {
      KiCheckAndRearmForceIdle();
    }
  }
}
