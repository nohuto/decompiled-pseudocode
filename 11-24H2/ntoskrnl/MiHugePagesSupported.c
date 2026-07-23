/*
 * XREFs of MiHugePagesSupported @ 0x1404900F8
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 *     MmManagePartitionMoveMemory @ 0x1407FD634 (MmManagePartitionMoveMemory.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1409157C0 (MiAllocateVirtualMemoryPrepare.c)
 *     MiInitializeCreateSectionPacket @ 0x14098B630 (MiInitializeCreateSectionPacket.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiHugePagesSupported()
{
  return ((unsigned __int64)KeFeatureBits >> 37) & 1;
}
