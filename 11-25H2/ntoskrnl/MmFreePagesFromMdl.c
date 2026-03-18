/*
 * XREFs of MmFreePagesFromMdl @ 0x14038C030
 * Callers:
 *     sub_140516970 @ 0x140516970 (sub_140516970.c)
 *     PopFreeHiberContext @ 0x1406EF918 (PopFreeHiberContext.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406F3974 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406F3C64 (HalpDmaAllocateLocalScatterPool.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14070F340 (IoReserveKsrPersistentMemoryEx.c)
 *     EtwpFreePfnArray @ 0x1407989F8 (EtwpFreePfnArray.c)
 *     MmAllocateNonCachedMemory @ 0x1407DAD30 (MmAllocateNonCachedMemory.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140A85FCC (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaAllocateScatterMemory @ 0x140A8604C (HalpDmaAllocateScatterMemory.c)
 *     MmFreeNonCachedMemory @ 0x140A97F60 (MmFreeNonCachedMemory.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140AB93CC (HalpDmaGrowContiguousMapBuffers.c)
 *     ResFwFreeContext @ 0x140BA34C4 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
