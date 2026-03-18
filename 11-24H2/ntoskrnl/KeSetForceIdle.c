/*
 * XREFs of KeSetForceIdle @ 0x1403CAD20
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x1403CB4D8 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiSetForceIdleState @ 0x1403CBA34 (KiSetForceIdleState.c)
 */

void KeSetForceIdle()
{
  unsigned int v0; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int v3; // edi
  __int64 v4; // rbx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
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
  if ( !KiForceIdleDisabled )
  {
    v3 = KiForceIdleState;
    v4 = RtlGetInterruptTimePrecise(&v7) + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    if ( v3 )
    {
      if ( v3 != 3 )
        goto LABEL_8;
    }
    else
    {
      KiSetForceIdleState(2LL);
    }
    KiForceIdleStartTime = v4;
  }
LABEL_8:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v5 = *SchedulerAssist;
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange(SchedulerAssist, v5 & 0xFFDFFFFF, v5);
    }
    while ( v6 != v5 );
    if ( (v5 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
}
