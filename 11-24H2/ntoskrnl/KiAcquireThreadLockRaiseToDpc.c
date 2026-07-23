/*
 * XREFs of KiAcquireThreadLockRaiseToDpc @ 0x1402D1150
 * Callers:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1402AE6EC (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1402AE83C (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KiDetachProcess @ 0x1402C9FD0 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402CB2C0 (KeUnstackDetachProcess.c)
 *     PspRevertContainerImpersonation @ 0x1402D21C0 (PspRevertContainerImpersonation.c)
 *     KiSchedulerApc @ 0x1402E00D0 (KiSchedulerApc.c)
 *     MiUnlockStealVm @ 0x1402FE250 (MiUnlockStealVm.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x14032C988 (PspSynchronizeThreadIsolationDomains.c)
 *     KeRemoveQueueApc @ 0x14032CCE0 (KeRemoveQueueApc.c)
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x14032CDF8 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KiFlushQueueApc @ 0x14032DD00 (KiFlushQueueApc.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     KeSetIdealProcessorThreadEx @ 0x140370A64 (KeSetIdealProcessorThreadEx.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E03C0 (KeQueryTotalCycleTimeThread.c)
 *     MiDetachFromWorkingSet @ 0x1403E1C30 (MiDetachFromWorkingSet.c)
 *     KeCleanupThreadState @ 0x14043CF94 (KeCleanupThreadState.c)
 *     KeUpdateThreadTag @ 0x14046E3F0 (KeUpdateThreadTag.c)
 *     KeRequestTerminationThread @ 0x1404750A8 (KeRequestTerminationThread.c)
 *     KeAttachProcess @ 0x140477330 (KeAttachProcess.c)
 *     KeSetThreadSchedulerAssist @ 0x140483038 (KeSetThreadSchedulerAssist.c)
 *     KeSetThreadPpmPolicy @ 0x140486864 (KeSetThreadPpmPolicy.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404A7360 (KeQueryPrimaryGroupAffinityThread.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404AF630 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     KeQueryCpuSetsThread @ 0x1404C9264 (KeQueryCpuSetsThread.c)
 *     KeQueryEffectivePriorityThread @ 0x1404DD960 (KeQueryEffectivePriorityThread.c)
 *     KeEnumerateQueueApc @ 0x1405BA510 (KeEnumerateQueueApc.c)
 *     KeQueryCurrentWaitInformationThread @ 0x1405BF780 (KeQueryCurrentWaitInformationThread.c)
 *     KiRequestSchedulerApcThread @ 0x1405C0614 (KiRequestSchedulerApcThread.c)
 *     KeAbCrossThreadDelete @ 0x1405C11AC (KeAbCrossThreadDelete.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAcquireThreadLockRaiseToDpc(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  unsigned int v6; // edi

  CurrentIrql = KeGetCurrentIrql();
  result = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    result = KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  *a2 = CurrentIrql;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
      result = *(_QWORD *)(a1 + 64);
    }
    while ( result );
  }
  return result;
}
