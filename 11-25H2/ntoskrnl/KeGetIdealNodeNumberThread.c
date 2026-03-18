/*
 * XREFs of KeGetIdealNodeNumberThread @ 0x14048722C
 * Callers:
 *     MmAllocateNonCachedMemory @ 0x1407DAD30 (MmAllocateNonCachedMemory.c)
 *     MiCreateHardwareEnclave @ 0x1407E730C (MiCreateHardwareEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     MmManagePartitionMoveMemory @ 0x1407ED034 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetIdealNodeNumberThread(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 138LL);
}
