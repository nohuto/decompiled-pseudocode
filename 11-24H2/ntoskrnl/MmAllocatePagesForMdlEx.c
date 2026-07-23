/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x140395340
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x1403962A4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140397478 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1403976A0 (HalpAllocateCommonBufferVectorInternal.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     PopGenerateMdl @ 0x1404CD380 (PopGenerateMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054DC80 (HalpAllocateDomainCommonBufferInternal.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140608E40 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     DifMmAllocatePagesForMdlExWrapper @ 0x140630E40 (DifMmAllocatePagesForMdlExWrapper.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140718FD0 (IoReserveKsrPersistentMemoryEx.c)
 *     EtwpAllocatePhysicalPages @ 0x1407A703C (EtwpAllocatePhysicalPages.c)
 *     ResFwGetContext @ 0x140BB39D8 (ResFwGetContext.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C35D58 (PpmHeteroInitializeIntelWpsSupport.c)
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x1403953A0 (MmAllocateNodePagesForMdlEx.c)
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
