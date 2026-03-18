/*
 * XREFs of RtlpHeapHandleError @ 0x1405E6BE4
 * Callers:
 *     RtlpCreateHeap @ 0x1404D8494 (RtlpCreateHeap.c)
 *     RtlpCreateUCREntry @ 0x1405DFB50 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405DFC90 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405E0484 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405E0FA8 (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x1405E6C2C (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1405E7160 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405E75BC (RtlpPopulateListIndex.c)
 *     RtlDestroyHeap @ 0x140A8C040 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140E0C358 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, BugCheckParameter2, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140E0C358, BugCheckParameter2, qword_140E0C368, 0LL);
}
