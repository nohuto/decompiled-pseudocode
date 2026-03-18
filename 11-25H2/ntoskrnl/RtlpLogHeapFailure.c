/*
 * XREFs of RtlpLogHeapFailure @ 0x1402DA9BC
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     RtlpHpFreeHeap @ 0x1402DE7F0 (RtlpHpFreeHeap.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     RtlpHpLfhContextFree @ 0x1402E04D0 (RtlpHpLfhContextFree.c)
 *     RtlpHpVsContextFree @ 0x1402E0830 (RtlpHpVsContextFree.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1402FA244 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402FA31C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1403C7060 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlAllocateHeap @ 0x1403CA980 (RtlAllocateHeap.c)
 *     RtlpHpLargeFree @ 0x1403CB4FC (RtlpHpLargeFree.c)
 *     RtlpHpMetadataFree @ 0x1403CB6C4 (RtlpHpMetadataFree.c)
 *     RtlpHpSegLfhVsFree @ 0x1403CBA30 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpSegFreeInternal @ 0x1403CBADC (RtlpHpSegFreeInternal.c)
 *     RtlFreeHeap @ 0x14047F160 (RtlFreeHeap.c)
 *     RtlpFreeNTHeapInternal @ 0x14047F1DC (RtlpFreeNTHeapInternal.c)
 *     RtlpHpLfhReportError @ 0x14049B388 (RtlpHpLfhReportError.c)
 *     RtlpHpFixedVsFree @ 0x14049E570 (RtlpHpFixedVsFree.c)
 *     RtlpHpVsSlotFreeList @ 0x1404EFFFC (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1404F021C (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpVsSlotAllocate @ 0x1404F074C (RtlpHpVsSlotAllocate.c)
 *     RtlpProbeUserBufferSafe @ 0x1404F3870 (RtlpProbeUserBufferSafe.c)
 *     RtlSizeHeap @ 0x1405DCBF0 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x1405DE67C (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405DF06C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405DF430 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405DFB50 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405DFC90 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405E0484 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1405E06E0 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1405E0CE0 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1405E0FA8 (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1405E12D0 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1405E1398 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1405E15B8 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405E68D4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x1405E744C (RtlpHeapListCompare.c)
 *     RtlZeroHeap @ 0x140773FD0 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x140774488 (RtlpDestroyHeapSegment.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x1405E6C2C (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( BugCheckParameter2 != a2 )
  {
    qword_140E0C378 = a5;
    qword_140E0C380 = a6;
    dword_140E0C358 = a1;
    BugCheckParameter2 = a2;
    qword_140E0C368 = a3;
    qword_140E0C370 = a4;
    RtlpHpHeapHandleError();
  }
}
