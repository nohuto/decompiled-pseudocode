/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x1404B9590
 * Callers:
 *     MiAddViewsForSection @ 0x140213970 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x14022EE90 (MiUnmapViewSubsections.c)
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiAppendSubsectionChain @ 0x1402A6358 (MiAppendSubsectionChain.c)
 *     MiCreatePrototypePtes @ 0x1402A6EE0 (MiCreatePrototypePtes.c)
 *     MiRemoveMappedPtes @ 0x1402A9320 (MiRemoveMappedPtes.c)
 *     MmPurgeSection @ 0x1402C5AB8 (MmPurgeSection.c)
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiDecrementSubsection @ 0x14033F61C (MiDecrementSubsection.c)
 *     MiDeleteTransitionPte @ 0x140340900 (MiDeleteTransitionPte.c)
 *     MiFlushRelease @ 0x14035A870 (MiFlushRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14035AC94 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiCleanSection @ 0x1404190A4 (MiCleanSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x140419984 (MiDereferenceControlAreaPfnList.c)
 *     MiDeleteControlArea @ 0x14043A3F8 (MiDeleteControlArea.c)
 *     MiDeleteSubsectionPages @ 0x14044A8C4 (MiDeleteSubsectionPages.c)
 *     MiReleaseFaultCharges @ 0x14046FC10 (MiReleaseFaultCharges.c)
 *     MiUpdateLastSubsectionSize @ 0x140487254 (MiUpdateLastSubsectionSize.c)
 *     MiUpControlAreaRefs @ 0x1404B95EC (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x1404C56A0 (MiRemoveSystemCacheReferences.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404CBB78 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x1404D3D60 (MiSetDeleteOnClose.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1406667B8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiUpdateActiveSubsection @ 0x14066D684 (MiUpdateActiveSubsection.c)
 *     MiExtendSection @ 0x14093B140 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x1409FC7C8 (MiChargeSegmentCommit.c)
 *     MiSegmentDelete @ 0x140A095FC (MiSegmentDelete.c)
 * Callees:
 *     MiReturnCrossPartitionCharges @ 0x14022F804 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 */

LONG __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, int a2, unsigned __int64 a3)
{
  char v4; // si

  v4 = a2;
  if ( a2 )
    MiReturnCommit(a1, a3, 0);
  MiReturnResident(a1, a3);
  return MiReturnCrossPartitionCharges(a1, 0, v4);
}
