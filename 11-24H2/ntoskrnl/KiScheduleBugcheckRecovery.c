/*
 * XREFs of KiScheduleBugcheckRecovery @ 0x1405C3CB0
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C2EB4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiRecordRecoveryFailure @ 0x1405C3C48 (KiRecordRecoveryFailure.c)
 *     KiStallBugcheckThread @ 0x1405C3E08 (KiStallBugcheckThread.c)
 */

char KiScheduleBugcheckRecovery()
{
  bool v0; // al
  struct _KPRCB *CurrentPrcb; // rcx
  bool v2; // bl
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  char result; // al

  v0 = KeAreInterruptsEnabled();
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = v0;
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
  KiDeferredBugcheckRecoveryDpc.TargetInfoAsUlong = 531;
  KiDeferredBugcheckRecoveryDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)KiScheduleBugcheckRecoveryWorkItem;
  KiDeferredBugcheckRecoveryDpc.DeferredContext = 0LL;
  KiDeferredBugcheckRecoveryDpc.DpcData = 0LL;
  KiDeferredBugcheckRecoveryDpc.ProcessorHistory = 0LL;
  if ( KeInsertQueueDpc(&KiDeferredBugcheckRecoveryDpc, 0LL, 0LL) )
    result = KiStallBugcheckThread();
  else
    result = KiRecordRecoveryFailure(4u);
  if ( !v2 )
    _disable();
  return result;
}
