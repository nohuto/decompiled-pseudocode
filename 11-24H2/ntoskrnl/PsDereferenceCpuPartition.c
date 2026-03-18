/*
 * XREFs of PsDereferenceCpuPartition @ 0x14077666C
 * Callers:
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14043A220 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BF410 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsDereferenceCpuPartition(void *a1, ULONG a2)
{
  return ObfDereferenceObjectWithTag(a1, a2);
}
