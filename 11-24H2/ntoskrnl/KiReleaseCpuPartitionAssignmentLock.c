/*
 * XREFs of KiReleaseCpuPartitionAssignmentLock @ 0x14043A320
 * Callers:
 *     KiQueryCpuPartitionAffinityProcess @ 0x140204354 (KiQueryCpuPartitionAffinityProcess.c)
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14043A220 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B8540 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BF410 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
