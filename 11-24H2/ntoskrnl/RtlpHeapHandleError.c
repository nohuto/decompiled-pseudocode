/*
 * XREFs of RtlpHeapHandleError @ 0x1405F056C
 * Callers:
 *     RtlpCreateHeap @ 0x1404D0784 (RtlpCreateHeap.c)
 *     RtlpCreateUCREntry @ 0x1405E93F0 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405E953C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405E9D48 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405EA8C0 (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x1405F05B4 (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1405F0AE8 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405F0F44 (RtlpPopulateListIndex.c)
 *     RtlDestroyHeap @ 0x140A8D840 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140E0C638 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, BugCheckParameter2, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140E0C638, BugCheckParameter2, qword_140E0C648, 0LL);
}
