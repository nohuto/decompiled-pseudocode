/*
 * XREFs of MiGetLargestPageIndex @ 0x1404953CC
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x1407D8A84 (MiAddPhysicalMemoryChunks.c)
 *     MmManagePartitionCreateLargePages @ 0x1407ECE40 (MmManagePartitionCreateLargePages.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1409D1E28 (MiQueryMemoryPhysicalContiguity.c)
 *     NtSetInformationVirtualMemory @ 0x1409FCFF0 (NtSetInformationVirtualMemory.c)
 *     MmBuildLargePages @ 0x1409FE260 (MmBuildLargePages.c)
 *     MiFindLargePageMemory @ 0x140A8E124 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
