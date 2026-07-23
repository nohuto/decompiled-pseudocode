/*
 * XREFs of KeQueryMaximumGroupCount @ 0x14047B1D0
 * Callers:
 *     NtQueryInformationCpuPartition @ 0x140775EF0 (NtQueryInformationCpuPartition.c)
 *     MmStoreRegister @ 0x1407FDB18 (MmStoreRegister.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
