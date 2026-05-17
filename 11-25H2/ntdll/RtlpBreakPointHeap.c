/*
 * XREFs of RtlpBreakPointHeap @ 0x18005A8C0
 * Callers:
 *     RtlDebugAllocateHeap @ 0x180025BE0 (RtlDebugAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18002B9EC (RtlDebugReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180057A50 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x180058720 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180059530 (RtlpGrowBlockInPlace.c)
 *     RtlpCheckHeapSignature @ 0x1800933E0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x180093490 (RtlpValidateHeapEntry.c)
 *     RtlpCheckBusyBlockTail @ 0x18009365C (RtlpCheckBusyBlockTail.c)
 *     RtlUnlockHeap @ 0x1800938E0 (RtlUnlockHeap.c)
 *     RtlpValidateHeap @ 0x180094770 (RtlpValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x18009517C (RtlDebugFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlDebugCreateHeap @ 0x18011912C (RtlDebugCreateHeap.c)
 * Callees:
 *     <none>
 */

struct _PEB *RtlpBreakPointHeap()
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( result->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return result;
}
