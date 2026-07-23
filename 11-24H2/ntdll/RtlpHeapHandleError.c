/*
 * XREFs of RtlpHeapHandleError @ 0x180010460
 * Callers:
 *     RtlpPopulateListIndex @ 0x18000C23C (RtlpPopulateListIndex.c)
 *     RtlpInsertFreeBlock @ 0x18000FC70 (RtlpInsertFreeBlock.c)
 *     RtlDestroyHeap @ 0x1800280C0 (RtlDestroyHeap.c)
 *     RtlpFindUCREntry @ 0x1800DBA60 (RtlpFindUCREntry.c)
 *     RtlpHpHeapHandleError @ 0x18011BAF0 (RtlpHpHeapHandleError.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x18011D71C (RtlpReportHeapFailure.c)
 */

__int64 __fastcall RtlpHeapHandleError(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_1801D1908 )
    return RtlpReportHeapFailure(a1);
  return result;
}
