/*
 * XREFs of KeClearForceIdle @ 0x1403551F8
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x140354D44 (PopDeepSleepSetDisengageReason.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSetForceIdleState @ 0x1403558C8 (KiSetForceIdleState.c)
 *     KiResetForceIdle @ 0x140404598 (KiResetForceIdle.c)
 *     KeRemoveQueueDpcEx @ 0x140464AC0 (KeRemoveQueueDpcEx.c)
 */

void __fastcall KeClearForceIdle(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v5; // eax
  signed __int32 v6; // ett

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
  if ( KiForceIdleDisabled )
    goto LABEL_8;
  switch ( KiForceIdleState )
  {
    case 1:
      KiSetForceIdleState(0LL);
      KeRemoveQueueDpcEx(&KiForceIdleStartDpc, 0LL);
      goto LABEL_20;
    case 2:
      KiSetForceIdleState(0LL);
LABEL_20:
      KiForceIdleStartTime = 0LL;
      break;
    case 3:
      if ( !KiForceIdleStartTime )
        break;
      goto LABEL_20;
    case 4:
      LOBYTE(a2) = 1;
      KiResetForceIdle(3LL, a2);
      break;
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
