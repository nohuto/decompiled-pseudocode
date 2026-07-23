/*
 * XREFs of KiReleaseCpuPartitionAssignmentLock @ 0x1402B9B64
 * Callers:
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x1402B9A64 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KiQueryCpuPartitionAffinityProcess @ 0x14032B934 (KiQueryCpuPartitionAffinityProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B5B20 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BCA40 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
