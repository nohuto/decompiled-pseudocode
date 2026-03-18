/*
 * XREFs of RtlpHeapHandleError @ 0x1405F2F2C
 * Callers:
 *     RtlpCreateHeap @ 0x1404D7334 (RtlpCreateHeap.c)
 *     RtlpCreateUCREntry @ 0x1405EBE80 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405EBFC0 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405EC7B4 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405ED2D8 (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x1405F2F74 (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1405F34A8 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405F3904 (RtlpPopulateListIndex.c)
 *     RtlDestroyHeap @ 0x140A91140 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140E0C578 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, BugCheckParameter2, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140E0C578, BugCheckParameter2, qword_140E0C588, 0LL);
}
