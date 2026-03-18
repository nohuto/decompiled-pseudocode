/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x1404B8B54
 * Callers:
 *     MiAddViewsForSection @ 0x14020DA70 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MiRemoveMappedPtes @ 0x140260FC0 (MiRemoveMappedPtes.c)
 *     MiCreatePrototypePtes @ 0x140261F58 (MiCreatePrototypePtes.c)
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiUpdateLastSubsectionSize @ 0x14036F080 (MiUpdateLastSubsectionSize.c)
 *     MiDeleteControlArea @ 0x14036F6E8 (MiDeleteControlArea.c)
 *     MiDereferenceControlAreaPfnList @ 0x14036FF5C (MiDereferenceControlAreaPfnList.c)
 *     MiReleaseFaultCharges @ 0x14037040C (MiReleaseFaultCharges.c)
 *     MmPurgeSection @ 0x1403704CC (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x140370928 (MiDeleteSubsectionPages.c)
 *     MiFlushRelease @ 0x1403710F0 (MiFlushRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140371504 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDecrementSubsection @ 0x140371D7C (MiDecrementSubsection.c)
 *     MiCleanSection @ 0x140417040 (MiCleanSection.c)
 *     MiUpControlAreaRefs @ 0x1404172CC (MiUpControlAreaRefs.c)
 *     MiAppendSubsectionChain @ 0x140474DD4 (MiAppendSubsectionChain.c)
 *     MiRemoveSystemCacheReferences @ 0x1404C3D80 (MiRemoveSystemCacheReferences.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404CBAD0 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x1404D3B38 (MiSetDeleteOnClose.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140672268 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiUpdateActiveSubsection @ 0x140678F84 (MiUpdateActiveSubsection.c)
 *     MiChargeSegmentCommit @ 0x1408F7C78 (MiChargeSegmentCommit.c)
 *     MiExtendSection @ 0x1409463BC (MiExtendSection.c)
 *     MiSegmentDelete @ 0x140A131E4 (MiSegmentDelete.c)
 * Callees:
 *     MiReturnCrossPartitionCharges @ 0x14020F5E4 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 */

LONG __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, int a2, unsigned __int64 a3)
{
  char v4; // si

  v4 = a2;
  if ( a2 )
    MiReturnCommit(a1, a3, 0);
  MiReturnResident(a1, a3);
  return MiReturnCrossPartitionCharges(a1, 0, v4, a3);
}
