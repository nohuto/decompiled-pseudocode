/*
 * XREFs of RtlpHeapHandleError @ 0x18005A8A0
 * Callers:
 *     RtlpCreateUCREntry @ 0x1800290B0 (RtlpCreateUCREntry.c)
 *     RtlpFindAndCommitPages @ 0x180029360 (RtlpFindAndCommitPages.c)
 *     RtlpFindUCREntry @ 0x180029920 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x180037E98 (RtlpPopulateListIndex.c)
 *     RtlpInsertFreeBlock @ 0x18005A0B0 (RtlpInsertFreeBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlDestroyHeap @ 0x1800B8900 (RtlDestroyHeap.c)
 *     RtlpHpHeapHandleError @ 0x18011F190 (RtlpHpHeapHandleError.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x180120DBC (RtlpReportHeapFailure.c)
 */

__int64 __fastcall RtlpHeapHandleError(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_1801D4988 )
    return RtlpReportHeapFailure(a1);
  return result;
}
