/*
 * XREFs of MiRestrictRangeToNode @ 0x140401E10
 * Callers:
 *     MiInitializeDynamicPfns @ 0x14066D8BC (MiInitializeDynamicPfns.c)
 *     MiHotRemoveHugeRange @ 0x140670540 (MiHotRemoveHugeRange.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14068B904 (MiUpdatePartitionChildPageCounts.c)
 *     MiAddPhysicalMemoryChunks @ 0x1407E8944 (MiAddPhysicalMemoryChunks.c)
 *     MiDescribePageRun @ 0x1407E93FC (MiDescribePageRun.c)
 *     MiZeroHotAddMemory @ 0x1407EA394 (MiZeroHotAddMemory.c)
 *     MiCreateDescriptorPfns @ 0x140C50FF4 (MiCreateDescriptorPfns.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C51ABC (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140C521F8 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140C52C0C (MxInitializeFreeNodeDescriptors.c)
 *     MxInsertFreePages @ 0x140C52D50 (MxInsertFreePages.c)
 *     MxMapPfnRange @ 0x140C52F48 (MxMapPfnRange.c)
 * Callees:
 *     MiSearchChannelTable @ 0x14026F0D4 (MiSearchChannelTable.c)
 *     MiSearchNumaNodeTable @ 0x140401E90 (MiSearchNumaNodeTable.c)
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
  if ( qword_140E2DB28 )
  {
    v7 = MiSearchChannelTable(BugCheckParameter2)[2];
    v8 = BugCheckParameter2 + a2;
    a2 = v7 - BugCheckParameter2;
    if ( v8 <= v7 )
      return v5;
  }
  return a2;
}
