/*
 * XREFs of KiReleaseThreadLockLowerIrql @ 0x140204FF0
 * Callers:
 *     KeSetThreadPpmPolicy @ 0x1402005B4 (KeSetThreadPpmPolicy.c)
 *     KeRemoveQueueApc @ 0x140203580 (KeRemoveQueueApc.c)
 *     KiFlushQueueApc @ 0x1402047F0 (KiFlushQueueApc.c)
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x140207198 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KeForceDetachProcess @ 0x14023A720 (KeForceDetachProcess.c)
 *     KiWaitForAllObjects @ 0x14027DDF0 (KiWaitForAllObjects.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x14028A0A0 (KiDetachProcess.c)
 *     MiUnlockStealVm @ 0x1402BB590 (MiUnlockStealVm.c)
 *     KiSchedulerApc @ 0x1402F2C80 (KiSchedulerApc.c)
 *     MiDetachFromWorkingSet @ 0x1403C31E0 (MiDetachFromWorkingSet.c)
 *     KeUnstackDetachProcess @ 0x1403C41A0 (KeUnstackDetachProcess.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x140489530 (PspSynchronizeThreadIsolationDomains.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404AB900 (KeQueryPrimaryGroupAffinityThread.c)
 *     KeQueryCpuSetsThread @ 0x1404D0084 (KeQueryCpuSetsThread.c)
 *     KeEnumerateQueueApc @ 0x1405B9040 (KeEnumerateQueueApc.c)
 *     KeAbCrossThreadDelete @ 0x1405BFAFC (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
