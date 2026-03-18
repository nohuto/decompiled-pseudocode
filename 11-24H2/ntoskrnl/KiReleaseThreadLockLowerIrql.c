/*
 * XREFs of KiReleaseThreadLockLowerIrql @ 0x1402067B0
 * Callers:
 *     PspSynchronizeThreadIsolationDomains @ 0x1402053A8 (PspSynchronizeThreadIsolationDomains.c)
 *     KeRemoveQueueApc @ 0x140205700 (KeRemoveQueueApc.c)
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x140205818 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KiWaitForAllObjects @ 0x140205C00 (KiWaitForAllObjects.c)
 *     KiFlushQueueApc @ 0x140206720 (KiFlushQueueApc.c)
 *     KeWaitForAlertByThreadId @ 0x14020765C (KeWaitForAlertByThreadId.c)
 *     KiSchedulerApc @ 0x140295D20 (KiSchedulerApc.c)
 *     MiUnlockStealVm @ 0x1402E1FC0 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     KiDetachProcess @ 0x140321440 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140322730 (KeUnstackDetachProcess.c)
 *     MiDetachFromWorkingSet @ 0x140379390 (MiDetachFromWorkingSet.c)
 *     KeSetThreadPpmPolicy @ 0x14048BA94 (KeSetThreadPpmPolicy.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404ACDC0 (KeQueryPrimaryGroupAffinityThread.c)
 *     KeQueryCpuSetsThread @ 0x1404D00FC (KeQueryCpuSetsThread.c)
 *     KeEnumerateQueueApc @ 0x1405BCEE0 (KeEnumerateQueueApc.c)
 *     KeQueryCurrentWaitInformationThread @ 0x1405C21B0 (KeQueryCurrentWaitInformationThread.c)
 *     KeAbCrossThreadDelete @ 0x1405C3BDC (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
