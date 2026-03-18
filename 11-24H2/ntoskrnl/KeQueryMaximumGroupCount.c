/*
 * XREFs of KeQueryMaximumGroupCount @ 0x140480670
 * Callers:
 *     NtQueryInformationCpuPartition @ 0x140775CD0 (NtQueryInformationCpuPartition.c)
 *     MmStoreRegister @ 0x1407FD3A8 (MmStoreRegister.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
