/*
 * XREFs of KiCheckAndRearmForceIdle @ 0x1403C17F8
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     KiTimer2Expiration @ 0x1403C1420 (KiTimer2Expiration.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiSetForceIdleState @ 0x1403CBA34 (KiSetForceIdleState.c)
 *     KeRemoveQueueDpcEx @ 0x140464090 (KeRemoveQueueDpcEx.c)
 */

void KiCheckAndRearmForceIdle()
{
  unsigned int v0; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
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
  KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec + RtlGetInterruptTimePrecise(&v5);
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
