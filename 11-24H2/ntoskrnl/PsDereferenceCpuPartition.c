/*
 * XREFs of PsDereferenceCpuPartition @ 0x14077688C
 * Callers:
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x1402B9A64 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BCA40 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsDereferenceCpuPartition(void *a1, ULONG a2)
{
  return ObfDereferenceObjectWithTag(a1, a2);
}
