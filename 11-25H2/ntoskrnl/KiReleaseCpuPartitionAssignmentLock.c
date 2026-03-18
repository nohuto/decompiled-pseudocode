/*
 * XREFs of KiReleaseCpuPartitionAssignmentLock @ 0x14036D290
 * Callers:
 *     KiQueryCpuPartitionAffinityProcess @ 0x140267A84 (KiQueryCpuPartitionAffinityProcess.c)
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14036D190 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B4650 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BB5D0 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiReleaseCpuPartitionAssignmentLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = a1;
  result = KxReleaseSpinLock((volatile signed __int64 *)&KiCpuPartitionAssignmentLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = v1;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  __writecr8(v1);
  return result;
}
