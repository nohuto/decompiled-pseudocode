/*
 * XREFs of MiHugePagesSupported @ 0x140496578
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     MmManagePartitionMoveMemory @ 0x1407ED034 (MmManagePartitionMoveMemory.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1408FD950 (MiAllocateVirtualMemoryPrepare.c)
 *     MiInitializeCreateSectionPacket @ 0x14093CB10 (MiInitializeCreateSectionPacket.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiHugePagesSupported()
{
  return ((unsigned __int64)KeFeatureBits >> 37) & 1;
}
