/*
 * XREFs of RtlpLogHeapFailure @ 0x180052E50
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x18000129C (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x180001A30 (RtlpFreeUserBlockToHeap.c)
 *     RtlpHpLargeFree @ 0x180009DDC (RtlpHpLargeFree.c)
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 *     RtlpHpSegLfhVsFree @ 0x18000B0B0 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpLfhContextFree @ 0x18000B170 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x18000B400 (RtlpHpSegFreeInternal.c)
 *     RtlpHpVsSubsegmentCreate @ 0x18000B8C0 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x18000CA10 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpGetHeapProtection @ 0x180025250 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180026290 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlpInsertUCRBlock @ 0x180028B00 (RtlpInsertUCRBlock.c)
 *     RtlpCreateUCREntry @ 0x1800290B0 (RtlpCreateUCREntry.c)
 *     RtlpFindAndCommitPages @ 0x180029360 (RtlpFindAndCommitPages.c)
 *     RtlpRemoveUCRBlock @ 0x180029C48 (RtlpRemoveUCRBlock.c)
 *     RtlReAllocateHeap @ 0x180029DE0 (RtlReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpVsContextGrowInPlace @ 0x18002D3B8 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x1800316D0 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180031BF0 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180032300 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x180032AD0 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpInitializeHeapSegment @ 0x18003771C (RtlpInitializeHeapSegment.c)
 *     RtlpHeapAddListEntry @ 0x180038080 (RtlpHeapAddListEntry.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180051570 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180052EB0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpFreeHeap @ 0x180053AF0 (RtlpHpFreeHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x180054194 (RtlpHpFreeHeapSlow.c)
 *     RtlpFreeUserBlock @ 0x180054420 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x180054850 (RtlpFreeNTHeapInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180055450 (RtlpProbeUserBufferSafe.c)
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180057A50 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180058550 (RtlpHeapRemoveListEntry.c)
 *     RtlpCreateSplitBlock @ 0x180058720 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180059530 (RtlpGrowBlockInPlace.c)
 *     RtlpInsertFreeBlock @ 0x18005A0B0 (RtlpInsertFreeBlock.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 *     RtlSizeHeap @ 0x1800940C0 (RtlSizeHeap.c)
 *     RtlpValidateHeapSegment @ 0x180095454 (RtlpValidateHeapSegment.c)
 *     RtlGetUserInfoHeap @ 0x180095DD0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x1800962A0 (RtlSetUserValueHeap.c)
 *     RtlpCommitBlock @ 0x1800966E0 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlpCoalesceHeap @ 0x180097CE0 (RtlpCoalesceHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1800B8CEC (RtlpDestroyHeapSegment.c)
 *     RtlpHpHeapValidateProtection @ 0x1800BAD10 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpSegMgrCommit @ 0x1800BADA0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1800BCB2C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1800BD610 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpFindEntry @ 0x1800BD830 (RtlpFindEntry.c)
 *     RtlSetUserFlagsHeap @ 0x180110D40 (RtlSetUserFlagsHeap.c)
 *     RtlpHpVsSlotAllocate @ 0x18011C9B8 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsSlotFreeInternal @ 0x18011CDA8 (RtlpHpVsSlotFreeInternal.c)
 *     RtlpHpVsSlotCompactChunks @ 0x18011CF64 (RtlpHpVsSlotCompactChunks.c)
 *     RtlZeroHeap @ 0x1801454E0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x18011F190 (RtlpHpHeapHandleError.c)
 */

__int64 __fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_1801CF0F0 != a2 )
  {
    qword_1801CF108 = a5;
    qword_1801CF110 = a6;
    dword_1801CF0E8 = a1;
    qword_1801CF0F0 = a2;
    qword_1801CF0F8 = a3;
    qword_1801CF100 = a4;
    return RtlpHpHeapHandleError();
  }
  return result;
}
