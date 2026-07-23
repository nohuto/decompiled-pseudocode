/*
 * XREFs of KeSetForceIdle @ 0x140354B90
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x140354F38 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSetForceIdleState @ 0x1403558C8 (KiSetForceIdleState.c)
 */

void KeSetForceIdle()
{
  int v0; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  int v5; // edi
  LARGE_INTEGER v6; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  PerformanceCounter.QuadPart = 0LL;
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
        HvlNotifyLongSpinWait();
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
    v5 = KiForceIdleState;
    v6.QuadPart = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter)
                + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    if ( v5 )
    {
      if ( v5 != 3 )
        goto LABEL_8;
    }
    else
    {
      KiSetForceIdleState(2LL);
    }
    KiForceIdleStartTime = v6.QuadPart;
  }
LABEL_8:
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
