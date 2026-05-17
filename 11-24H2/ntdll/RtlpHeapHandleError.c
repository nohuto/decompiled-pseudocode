/*
 * XREFs of RtlpHeapHandleError @ 0x180031DD0
 * Callers:
 *     RtlpInsertFreeBlock @ 0x1800315E0 (RtlpInsertFreeBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180042E70 (RtlpDeCommitFreeBlock.c)
 *     RtlDestroyHeap @ 0x18008F580 (RtlDestroyHeap.c)
 *     RtlpCreateUCREntry @ 0x1800A0100 (RtlpCreateUCREntry.c)
 *     RtlpFindAndCommitPages @ 0x1800A03B0 (RtlpFindAndCommitPages.c)
 *     RtlpFindUCREntry @ 0x1800A0970 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1800A9058 (RtlpPopulateListIndex.c)
 *     RtlpHpHeapHandleError @ 0x18011D8C0 (RtlpHpHeapHandleError.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x18011F4EC (RtlpReportHeapFailure.c)
 */

__int64 RtlpHeapHandleError()
{
  __int64 result; // rax

  if ( !byte_1801D2908 )
    return RtlpReportHeapFailure();
  return result;
}
