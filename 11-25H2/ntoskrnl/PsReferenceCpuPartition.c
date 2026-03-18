/*
 * XREFs of PsReferenceCpuPartition @ 0x140766CB4
 * Callers:
 *     KeAssignCpuPartitionsToProcess @ 0x1405BB5D0 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsReferenceCpuPartition(void *a1, ULONG a2)
{
  return ObfReferenceObjectWithTag(a1, a2);
}
