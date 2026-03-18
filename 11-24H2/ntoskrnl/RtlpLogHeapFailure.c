/*
 * XREFs of RtlpLogHeapFailure @ 0x1402B2E04
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x1402B2660 (RtlpHpFreeHeap.c)
 *     RtlpHpVsContextFree @ 0x1402B2F20 (RtlpHpVsContextFree.c)
 *     RtlpHpLfhContextFree @ 0x1402B3130 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x1402B33D0 (RtlpHpSegFreeInternal.c)
 *     RtlpHpVsSlotFreeList @ 0x1402B3510 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1402B3AF0 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpSegLfhVsFree @ 0x1402B41B0 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1402B5E60 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpVsSlotAllocate @ 0x1402C00DC (RtlpHpVsSlotAllocate.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1402C257C (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402C27C8 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpLargeFree @ 0x140420C64 (RtlpHpLargeFree.c)
 *     RtlpHpMetadataFree @ 0x140420E2C (RtlpHpMetadataFree.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x14045135C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlAllocateHeap @ 0x14047A1B0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x14047DE70 (RtlFreeHeap.c)
 *     RtlpFreeNTHeapInternal @ 0x14047DEEC (RtlpFreeNTHeapInternal.c)
 *     RtlpHpLfhReportError @ 0x14049B638 (RtlpHpLfhReportError.c)
 *     RtlpHpFixedVsFree @ 0x14049D650 (RtlpHpFixedVsFree.c)
 *     RtlpProbeUserBufferSafe @ 0x1404F60C4 (RtlpProbeUserBufferSafe.c)
 *     RtlSizeHeap @ 0x1405E8D40 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x1405EA9AC (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405EB39C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405EB760 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405EBE80 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405EBFC0 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405EC7B4 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1405ECA10 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1405ED010 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1405ED2D8 (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1405ED600 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1405ED6C8 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1405ED8E8 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405F2C1C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x1405F3794 (RtlpHeapListCompare.c)
 *     RtlZeroHeap @ 0x140783280 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x140783738 (RtlpDestroyHeapSegment.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x1405F2F74 (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( BugCheckParameter2 != a2 )
  {
    qword_140E0C598 = a5;
    qword_140E0C5A0 = a6;
    dword_140E0C578 = a1;
    BugCheckParameter2 = a2;
    qword_140E0C588 = a3;
    qword_140E0C590 = a4;
    RtlpHpHeapHandleError();
  }
}
