/*
 * XREFs of MiRestrictRangeToNode @ 0x1403FA42C
 * Callers:
 *     MiInitializeDynamicPfns @ 0x140661D7C (MiInitializeDynamicPfns.c)
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 *     MiUpdatePartitionChildPageCounts @ 0x140680074 (MiUpdatePartitionChildPageCounts.c)
 *     MiAddPhysicalMemoryChunks @ 0x1407D8A84 (MiAddPhysicalMemoryChunks.c)
 *     MiDescribePageRun @ 0x1407D953C (MiDescribePageRun.c)
 *     MiZeroHotAddMemory @ 0x1407DA4D4 (MiZeroHotAddMemory.c)
 *     MiCreateDescriptorPfns @ 0x140C3FDC4 (MiCreateDescriptorPfns.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C4088C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140C40FC8 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140C419DC (MxInitializeFreeNodeDescriptors.c)
 *     MxInsertFreePages @ 0x140C41B20 (MxInsertFreePages.c)
 *     MxMapPfnRange @ 0x140C41D18 (MxMapPfnRange.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402167C8 (MiSearchChannelTable.c)
 *     MiSearchNumaNodeTable @ 0x1403FA4B0 (MiSearchNumaNodeTable.c)
 */

ULONG_PTR __fastcall MiRestrictRangeToNode(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rsi
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rax

  v4 = *(_QWORD *)(MiSearchNumaNodeTable(BugCheckParameter2) + 16);
  if ( BugCheckParameter2 + a2 > v4 )
    a2 = v4 - BugCheckParameter2;
  v5 = a2;
  if ( qword_140E2D8E8 )
  {
    v7 = MiSearchChannelTable(BugCheckParameter2)[2];
    v8 = BugCheckParameter2 + a2;
    a2 = v7 - BugCheckParameter2;
    if ( v8 <= v7 )
      return v5;
  }
  return a2;
}
