/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x140411F30
 * Callers:
 *     HalpAllocateCommonBufferVectorInternal @ 0x14041011C (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140410764 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140410E18 (HalpAllocateCommonBufferDmaThin.c)
 *     BgpFwAllocateMemory @ 0x140467320 (BgpFwAllocateMemory.c)
 *     PopGenerateMdl @ 0x1404D4170 (PopGenerateMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140550340 (HalpAllocateDomainCommonBufferInternal.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14060A880 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     DifMmAllocatePagesForMdlExWrapper @ 0x140632880 (DifMmAllocatePagesForMdlExWrapper.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14071B440 (IoReserveKsrPersistentMemoryEx.c)
 *     EtwpAllocatePhysicalPages @ 0x1407A6EFC (EtwpAllocatePhysicalPages.c)
 *     ResFwGetContext @ 0x140BB19D8 (ResFwGetContext.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C33C18 (PpmHeteroInitializeIntelWpsSupport.c)
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x140411F90 (MmAllocateNodePagesForMdlEx.c)
 */

PMDL __stdcall MmAllocatePagesForMdlEx(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes,
        MEMORY_CACHING_TYPE CacheType,
        ULONG Flags)
{
  return (PMDL)MmAllocateNodePagesForMdlEx(
                 LowAddress.LowPart,
                 HighAddress.LowPart,
                 SkipBytes.LowPart,
                 TotalBytes,
                 CacheType,
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL),
                 Flags);
}
