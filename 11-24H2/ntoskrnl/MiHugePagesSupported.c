/*
 * XREFs of MiHugePagesSupported @ 0x140495838
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 *     MmManagePartitionMoveMemory @ 0x1407FCEC4 (MmManagePartitionMoveMemory.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1408DEC10 (MiAllocateVirtualMemoryPrepare.c)
 *     MiInitializeCreateSectionPacket @ 0x1409413D0 (MiInitializeCreateSectionPacket.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiHugePagesSupported()
{
  return ((unsigned __int64)KeFeatureBits >> 37) & 1;
}
