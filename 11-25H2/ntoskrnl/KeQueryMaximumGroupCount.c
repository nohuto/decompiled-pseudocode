/*
 * XREFs of KeQueryMaximumGroupCount @ 0x14047F9E0
 * Callers:
 *     NtQueryInformationCpuPartition @ 0x140766300 (NtQueryInformationCpuPartition.c)
 *     MmStoreRegister @ 0x1407ED518 (MmStoreRegister.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
