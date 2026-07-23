/*
 * XREFs of RtlpLogHeapFailure @ 0x180056D80
 * Callers:
 *     RtlpHeapAddListEntry @ 0x18000C420 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18000C880 (RtlpFindEntry.c)
 *     RtlpFindAndCommitPages @ 0x18000D030 (RtlpFindAndCommitPages.c)
 *     RtlpGrowBlockInPlace @ 0x18000D610 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x18000DD00 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18000EB10 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x18000F610 (RtlpHeapRemoveListEntry.c)
 *     RtlpInsertFreeBlock @ 0x18000FC70 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x180010480 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlSetUserValueHeap @ 0x18001FB40 (RtlSetUserValueHeap.c)
 *     RtlSizeHeap @ 0x180021000 (RtlSizeHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800222F8 (RtlpValidateHeapSegment.c)
 *     RtlpInitializeHeapSegment @ 0x180025C40 (RtlpInitializeHeapSegment.c)
 *     RtlpDestroyHeapSegment @ 0x1800284AC (RtlpDestroyHeapSegment.c)
 *     RtlpGetHeapProtection @ 0x1800288C0 (RtlpGetHeapProtection.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x180053EC0 (RtlpHpTagFreeHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800554A0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180056DE0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpFreeHeap @ 0x180057A20 (RtlpHpFreeHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x1800580C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpFreeUserBlock @ 0x180058350 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x180058780 (RtlpFreeNTHeapInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180059380 (RtlpProbeUserBufferSafe.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18005AF10 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x180062820 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180062D40 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180063450 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x180063C20 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpHpMetadataFree @ 0x180064B08 (RtlpHpMetadataFree.c)
 *     RtlpHpSegLfhVsFree @ 0x180065050 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpLfhContextFree @ 0x180065110 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x1800653A0 (RtlpHpSegFreeInternal.c)
 *     RtlpHpVsSubsegmentCreate @ 0x180065860 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1800669B0 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlReAllocateHeap @ 0x18007A7D0 (RtlReAllocateHeap.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x18009A690 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpHeapValidateProtection @ 0x18009C520 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpSegMgrCommit @ 0x18009C5B0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x18009E33C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpLargeFree @ 0x18009E878 (RtlpHpLargeFree.c)
 *     RtlpHpReallocMove @ 0x18009EFF0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1800A0AC0 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x1800A1250 (RtlpFreeUserBlockToHeap.c)
 *     RtlpHpVsContextGrowInPlace @ 0x1800DAA64 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpInsertUCRBlock @ 0x1800DB980 (RtlpInsertUCRBlock.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1800DCC00 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpRemoveUCRBlock @ 0x1800E311C (RtlpRemoveUCRBlock.c)
 *     RtlGetUserInfoHeap @ 0x1800E63B0 (RtlGetUserInfoHeap.c)
 *     RtlpCoalesceHeap @ 0x180106F80 (RtlpCoalesceHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180109150 (RtlSetUserFlagsHeap.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 *     RtlpCreateUCREntry @ 0x1801173C0 (RtlpCreateUCREntry.c)
 *     RtlpHpVsSlotAllocate @ 0x180119350 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsSlotFreeInternal @ 0x180119740 (RtlpHpVsSlotFreeInternal.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1801198FC (RtlpHpVsSlotCompactChunks.c)
 *     RtlZeroHeap @ 0x180142320 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x18011BAF0 (RtlpHpHeapHandleError.c)
 */

__int64 __fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_1801CC0F0 != a2 )
  {
    qword_1801CC108 = a5;
    qword_1801CC110 = a6;
    dword_1801CC0E8 = a1;
    qword_1801CC0F0 = a2;
    qword_1801CC0F8 = a3;
    qword_1801CC100 = a4;
    return RtlpHpHeapHandleError();
  }
  return result;
}
