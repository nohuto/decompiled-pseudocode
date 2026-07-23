/*
 * XREFs of KiReleaseThreadLockLowerIrql @ 0x14032DD90
 * Callers:
 *     KiDetachProcess @ 0x1402C9FD0 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402CB2C0 (KeUnstackDetachProcess.c)
 *     KiSchedulerApc @ 0x1402E00D0 (KiSchedulerApc.c)
 *     MiUnlockStealVm @ 0x1402FE250 (MiUnlockStealVm.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x14032C988 (PspSynchronizeThreadIsolationDomains.c)
 *     KeRemoveQueueApc @ 0x14032CCE0 (KeRemoveQueueApc.c)
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x14032CDF8 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KiWaitForAllObjects @ 0x14032D1E0 (KiWaitForAllObjects.c)
 *     KiFlushQueueApc @ 0x14032DD00 (KiFlushQueueApc.c)
 *     KeWaitForAlertByThreadId @ 0x14032EC3C (KeWaitForAlertByThreadId.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     MiDetachFromWorkingSet @ 0x1403E1C30 (MiDetachFromWorkingSet.c)
 *     KeSetThreadPpmPolicy @ 0x140486864 (KeSetThreadPpmPolicy.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404A7360 (KeQueryPrimaryGroupAffinityThread.c)
 *     KeQueryCpuSetsThread @ 0x1404C9264 (KeQueryCpuSetsThread.c)
 *     KeQueryEffectivePriorityThread @ 0x1404DD960 (KeQueryEffectivePriorityThread.c)
 *     KeEnumerateQueueApc @ 0x1405BA510 (KeEnumerateQueueApc.c)
 *     KeQueryCurrentWaitInformationThread @ 0x1405BF780 (KeQueryCurrentWaitInformationThread.c)
 *     KeAbCrossThreadDelete @ 0x1405C11AC (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiReleaseThreadLockLowerIrql(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  *(_QWORD *)(a1 + 64) = 0LL;
  v2 = a2;
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
  __writecr8(v2);
  return result;
}
