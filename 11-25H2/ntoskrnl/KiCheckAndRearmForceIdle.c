/*
 * XREFs of KiCheckAndRearmForceIdle @ 0x140372628
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     KiTimer2Expiration @ 0x140372250 (KiTimer2Expiration.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSetForceIdleState @ 0x1403558C8 (KiSetForceIdleState.c)
 *     KeRemoveQueueDpcEx @ 0x140464AC0 (KeRemoveQueueDpcEx.c)
 */

void KiCheckAndRearmForceIdle()
{
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int v2; // ebx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  if ( KiForceIdleDisabled )
    return;
  _disable();
  v2 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
    {
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleState == 1 )
  {
    KeRemoveQueueDpcEx(&KiForceIdleStartDpc, 0LL);
    KiSetForceIdleState(2u);
    goto LABEL_21;
  }
  if ( KiForceIdleState == 2 )
LABEL_21:
    KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
                         + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v3 = *SchedulerAssist;
    do
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange(SchedulerAssist, v3 & 0xFFDFFFFF, v3);
    }
    while ( v4 != v3 );
    if ( (v3 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
}
