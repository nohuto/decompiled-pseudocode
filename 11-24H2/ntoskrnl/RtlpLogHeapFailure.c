/*
 * XREFs of RtlpLogHeapFailure @ 0x14035B9C4
 * Callers:
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x14035B220 (RtlpHpFreeHeap.c)
 *     RtlpHpVsContextFree @ 0x14035BAE0 (RtlpHpVsContextFree.c)
 *     RtlpHpLfhContextFree @ 0x14035BCF0 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x14035BF90 (RtlpHpSegFreeInternal.c)
 *     RtlpHpVsSlotFreeList @ 0x14035C0D0 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x14035C460 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpSegLfhVsFree @ 0x14035CC90 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14035D9AC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x14035E43C (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpVsSlotAllocate @ 0x140367A10 (RtlpHpVsSlotAllocate.c)
 *     RtlAllocateHeap @ 0x1403686E0 (RtlAllocateHeap.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1403D8A60 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1404467BC (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpLargeFree @ 0x140458F38 (RtlpHpLargeFree.c)
 *     RtlpHpMetadataFree @ 0x140459100 (RtlpHpMetadataFree.c)
 *     RtlFreeHeap @ 0x140479100 (RtlFreeHeap.c)
 *     RtlpFreeNTHeapInternal @ 0x14047917C (RtlpFreeNTHeapInternal.c)
 *     RtlpHpLfhReportError @ 0x140496164 (RtlpHpLfhReportError.c)
 *     RtlpHpFixedVsFree @ 0x140498450 (RtlpHpFixedVsFree.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 *     RtlpProbeUserBufferSafe @ 0x1404F39C4 (RtlpProbeUserBufferSafe.c)
 *     RtlSizeHeap @ 0x1405E6290 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x1405E7EFC (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405E890C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405E8CD0 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405E93F0 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405E953C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405E9D48 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1405E9FB0 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1405EA5CC (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1405EA8C0 (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1405EABE8 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1405EACB0 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1405EAED0 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405F025C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x1405F0DD4 (RtlpHeapListCompare.c)
 *     RtlZeroHeap @ 0x1407831B0 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x140783668 (RtlpDestroyHeapSegment.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x1405F05B4 (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( BugCheckParameter2 != a2 )
  {
    qword_140E0C658 = a5;
    qword_140E0C660 = a6;
    dword_140E0C638 = a1;
    BugCheckParameter2 = a2;
    qword_140E0C648 = a3;
    qword_140E0C650 = a4;
    RtlpHpHeapHandleError();
  }
}
