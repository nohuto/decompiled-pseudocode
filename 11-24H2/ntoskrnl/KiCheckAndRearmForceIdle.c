/*
 * XREFs of KiCheckAndRearmForceIdle @ 0x1403B03B8
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14031A580 (KiCallInterruptServiceRoutine.c)
 *     KiTimer2Expiration @ 0x1403AFFE0 (KiTimer2Expiration.c)
 *     KiForceIdleInterruptNotify @ 0x140404948 (KiForceIdleInterruptNotify.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KeRemoveQueueDpcEx @ 0x14045A7C0 (KeRemoveQueueDpcEx.c)
 *     KiSetForceIdleState @ 0x140484E74 (KiSetForceIdleState.c)
 */

void KiCheckAndRearmForceIdle()
{
  unsigned int v0; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  if ( KiForceIdleDisabled )
    return;
  _disable();
  v0 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
    {
      if ( (++v0 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v0);
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
    KiSetForceIdleState(2LL);
  }
  else if ( KiForceIdleState != 2 )
  {
    goto LABEL_10;
  }
  KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
                       + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
LABEL_10:
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
