/*
 * XREFs of PsDereferenceCpuPartition @ 0x140766C9C
 * Callers:
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14036D190 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BB5D0 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsDereferenceCpuPartition(void *a1, ULONG a2)
{
  return ObfDereferenceObjectWithTag(a1, a2);
}
