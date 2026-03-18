/*
 * XREFs of MmAllocatePagesForMdl @ 0x140411EB0
 * Callers:
 *     DifMmAllocatePagesForMdlWrapper @ 0x140632A30 (DifMmAllocatePagesForMdlWrapper.c)
 *     HalpDmaAllocateScatterMemory @ 0x140A8AB00 (HalpDmaAllocateScatterMemory.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x14041225C (MiAllocatePagesForMdl.c)
 */

PMDL __stdcall MmAllocatePagesForMdl(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes)
{
  return (PMDL)MiAllocatePagesForMdl(
                 (unsigned int)&MiSystemPartition,
                 LowAddress.LowPart,
                 HighAddress.LowPart,
                 SkipBytes.LowPart,
                 TotalBytes,
                 3,
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL),
                 0,
                 (__int64)KeGetCurrentThread()->ApcState.Process,
                 0LL);
}
