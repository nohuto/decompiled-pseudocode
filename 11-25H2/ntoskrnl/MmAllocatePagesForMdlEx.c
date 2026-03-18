/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x1404154A0
 * Callers:
 *     HalpAllocateCommonBufferVectorInternal @ 0x140412974 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140412D64 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140414548 (HalpAllocateCommonBufferDmaThin.c)
 *     BgpFwAllocateMemory @ 0x140468D2C (BgpFwAllocateMemory.c)
 *     PopGenerateMdl @ 0x1404D4298 (PopGenerateMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054D9E0 (HalpAllocateDomainCommonBufferInternal.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1405FE390 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     DifMmAllocatePagesForMdlExWrapper @ 0x1406268C0 (DifMmAllocatePagesForMdlExWrapper.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14070F340 (IoReserveKsrPersistentMemoryEx.c)
 *     EtwpAllocatePhysicalPages @ 0x140797B2C (EtwpAllocatePhysicalPages.c)
 *     ResFwGetContext @ 0x140BA19D8 (ResFwGetContext.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C229DC (PpmHeteroInitializeIntelWpsSupport.c)
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x140415500 (MmAllocateNodePagesForMdlEx.c)
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
