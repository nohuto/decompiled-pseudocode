/*
 * XREFs of PsReferenceCpuPartition @ 0x1407768A4
 * Callers:
 *     KeAssignCpuPartitionsToProcess @ 0x1405BCA40 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsReferenceCpuPartition(void *a1, ULONG a2)
{
  return ObfReferenceObjectWithTag(a1, a2);
}
