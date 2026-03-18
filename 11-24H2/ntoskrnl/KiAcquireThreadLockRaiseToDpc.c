/*
 * XREFs of KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20
 * Callers:
 *     PspSynchronizeThreadIsolationDomains @ 0x1402053A8 (PspSynchronizeThreadIsolationDomains.c)
 *     KeRemoveQueueApc @ 0x140205700 (KeRemoveQueueApc.c)
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x140205818 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KiFlushQueueApc @ 0x140206720 (KiFlushQueueApc.c)
 *     KiSchedulerApc @ 0x140295D20 (KiSchedulerApc.c)
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PspRevertContainerImpersonation @ 0x1402A2A90 (PspRevertContainerImpersonation.c)
 *     MiUnlockStealVm @ 0x1402E1FC0 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     KiDetachProcess @ 0x140321440 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140322730 (KeUnstackDetachProcess.c)
 *     MiDetachFromWorkingSet @ 0x140379390 (MiDetachFromWorkingSet.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403B422C (KeSetIdealProcessorThreadEx.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1403B6408 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403B6558 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403EBDD0 (KeQueryTotalCycleTimeThread.c)
 *     KeCleanupThreadState @ 0x140444DEC (KeCleanupThreadState.c)
 *     KeUpdateThreadTag @ 0x140472120 (KeUpdateThreadTag.c)
 *     KeRequestTerminationThread @ 0x140479818 (KeRequestTerminationThread.c)
 *     KeAttachProcess @ 0x14047B6B0 (KeAttachProcess.c)
 *     KeSetThreadSchedulerAssist @ 0x140487FC8 (KeSetThreadSchedulerAssist.c)
 *     KeSetThreadPpmPolicy @ 0x14048BA94 (KeSetThreadPpmPolicy.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404ACDC0 (KeQueryPrimaryGroupAffinityThread.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404B4E30 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     KeQueryCpuSetsThread @ 0x1404D00FC (KeQueryCpuSetsThread.c)
 *     KeEnumerateQueueApc @ 0x1405BCEE0 (KeEnumerateQueueApc.c)
 *     KeQueryCurrentWaitInformationThread @ 0x1405C21B0 (KeQueryCurrentWaitInformationThread.c)
 *     KiRequestSchedulerApcThread @ 0x1405C3044 (KiRequestSchedulerApcThread.c)
 *     KeAbCrossThreadDelete @ 0x1405C3BDC (KeAbCrossThreadDelete.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
