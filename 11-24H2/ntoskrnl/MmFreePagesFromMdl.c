/*
 * XREFs of MmFreePagesFromMdl @ 0x1403A37F0
 * Callers:
 *     sub_1405190F0 @ 0x1405190F0 (sub_1405190F0.c)
 *     PopFreeHiberContext @ 0x1406FB788 (PopFreeHiberContext.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FF764 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406FFA54 (HalpDmaAllocateLocalScatterPool.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14071B440 (IoReserveKsrPersistentMemoryEx.c)
 *     EtwpFreePfnArray @ 0x1407A7DC8 (EtwpFreePfnArray.c)
 *     MmAllocateNonCachedMemory @ 0x1407EABD0 (MmAllocateNonCachedMemory.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140A8AA80 (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaAllocateScatterMemory @ 0x140A8AB00 (HalpDmaAllocateScatterMemory.c)
 *     MmFreeNonCachedMemory @ 0x140A9DA90 (MmFreeNonCachedMemory.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140ABD4C4 (HalpDmaGrowContiguousMapBuffers.c)
 *     ResFwFreeContext @ 0x140BB34C4 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList, 0, 0, 0);
}
