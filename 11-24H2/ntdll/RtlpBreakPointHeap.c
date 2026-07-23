/*
 * XREFs of RtlpBreakPointHeap @ 0x18000D5E4
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x18000D610 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x18000DD00 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18000EB10 (RtlpCoalesceFreeBlocks.c)
 *     RtlDebugAllocateHeap @ 0x18001F7A4 (RtlDebugAllocateHeap.c)
 *     RtlpCheckHeapSignature @ 0x180020320 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x1800203D0 (RtlpValidateHeapEntry.c)
 *     RtlpCheckBusyBlockTail @ 0x18002059C (RtlpCheckBusyBlockTail.c)
 *     RtlUnlockHeap @ 0x180020820 (RtlUnlockHeap.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x180022020 (RtlDebugFreeHeap.c)
 *     RtlDebugCreateHeap @ 0x1800232B0 (RtlDebugCreateHeap.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18005C7E8 (RtlDebugReAllocateHeap.c)
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
