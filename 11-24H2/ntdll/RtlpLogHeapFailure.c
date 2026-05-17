/*
 * XREFs of RtlpLogHeapFailure @ 0x18002A380
 * Callers:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180028AA0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18002A3E0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpFreeHeap @ 0x18002B020 (RtlpHpFreeHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x18002B6C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpFreeUserBlock @ 0x18002B950 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x18002BD80 (RtlpFreeNTHeapInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x18002C980 (RtlpProbeUserBufferSafe.c)
 *     RtlpFreeHeap @ 0x18002D620 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18002EF80 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAnalyzeHeapFailure @ 0x18002F740 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x18002FA80 (RtlpHeapRemoveListEntry.c)
 *     RtlpCreateSplitBlock @ 0x18002FC50 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180030A60 (RtlpGrowBlockInPlace.c)
 *     RtlpInsertFreeBlock @ 0x1800315E0 (RtlpInsertFreeBlock.c)
 *     RtlSizeHeap @ 0x1800406D0 (RtlSizeHeap.c)
 *     RtlpValidateHeapSegment @ 0x180041A64 (RtlpValidateHeapSegment.c)
 *     RtlGetUserInfoHeap @ 0x1800423E0 (RtlGetUserInfoHeap.c)
 *     RtlpCommitBlock @ 0x180042A00 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180042E70 (RtlpDeCommitFreeBlock.c)
 *     RtlpCoalesceHeap @ 0x180044000 (RtlpCoalesceHeap.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x18004CC40 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x18004D160 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x18004D870 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x18004E040 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpHpMetadataFree @ 0x18004EF28 (RtlpHpMetadataFree.c)
 *     RtlpHpSegLfhVsFree @ 0x18004F470 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpLfhContextFree @ 0x18004F530 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x18004F7C0 (RtlpHpSegFreeInternal.c)
 *     RtlpHpVsSubsegmentCreate @ 0x18004FC80 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180050DD0 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpDestroyHeapSegment @ 0x18008F96C (RtlpDestroyHeapSegment.c)
 *     RtlpHpHeapValidateProtection @ 0x180091990 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpSegMgrCommit @ 0x180091A20 (RtlpHpSegMgrCommit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1800937AC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpLargeFree @ 0x1800938E4 (RtlpHpLargeFree.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x180094430 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpReallocMove @ 0x180094540 (RtlpHpReallocMove.c)
 *     RtlpLowFragHeapFlushCaches @ 0x180095D9C (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x180096530 (RtlpFreeUserBlockToHeap.c)
 *     RtlSetUserValueHeap @ 0x18009BF90 (RtlSetUserValueHeap.c)
 *     RtlpGetHeapProtection @ 0x18009C570 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x18009D2E0 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpAllocateHeap @ 0x18009D360 (RtlpAllocateHeap.c)
 *     RtlpInsertUCRBlock @ 0x18009FB50 (RtlpInsertUCRBlock.c)
 *     RtlpCreateUCREntry @ 0x1800A0100 (RtlpCreateUCREntry.c)
 *     RtlpFindAndCommitPages @ 0x1800A03B0 (RtlpFindAndCommitPages.c)
 *     RtlpRemoveUCRBlock @ 0x1800A0C98 (RtlpRemoveUCRBlock.c)
 *     RtlReAllocateHeap @ 0x1800A0E30 (RtlReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800A1040 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800A18B0 (RtlpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x1800A3160 (RtlpHpSegReAlloc.c)
 *     RtlpInitializeHeapSegment @ 0x1800A88DC (RtlpInitializeHeapSegment.c)
 *     RtlpHeapAddListEntry @ 0x1800A9240 (RtlpHeapAddListEntry.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 *     RtlpFindEntry @ 0x1800B7440 (RtlpFindEntry.c)
 *     RtlpHpVsContextGrowInPlace @ 0x1800DF8F4 (RtlpHpVsContextGrowInPlace.c)
 *     RtlSetUserFlagsHeap @ 0x18010E270 (RtlSetUserFlagsHeap.c)
 *     RtlpHpVsSlotAllocate @ 0x18011B120 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsSlotFreeInternal @ 0x18011B510 (RtlpHpVsSlotFreeInternal.c)
 *     RtlpHpVsSlotCompactChunks @ 0x18011B6CC (RtlpHpVsSlotCompactChunks.c)
 *     RtlZeroHeap @ 0x180143F70 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x18011D8C0 (RtlpHpHeapHandleError.c)
 */

__int64 __fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_1801CD0F0 != a2 )
  {
    qword_1801CD108 = a5;
    qword_1801CD110 = a6;
    dword_1801CD0E8 = a1;
    qword_1801CD0F0 = a2;
    qword_1801CD0F8 = a3;
    qword_1801CD100 = a4;
    return RtlpHpHeapHandleError();
  }
  return result;
}
