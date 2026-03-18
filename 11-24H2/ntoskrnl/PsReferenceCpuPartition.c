/*
 * XREFs of PsReferenceCpuPartition @ 0x140776684
 * Callers:
 *     KeAssignCpuPartitionsToProcess @ 0x1405BF410 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsReferenceCpuPartition(void *a1, ULONG a2)
{
  return ObfReferenceObjectWithTag(a1, a2);
}
