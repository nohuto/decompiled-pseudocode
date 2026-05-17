/*
 * XREFs of RtlpBreakPointHeap @ 0x180031DF0
 * Callers:
 *     RtlpFreeHeap @ 0x18002D620 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18002EF80 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x18002FC50 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180030A60 (RtlpGrowBlockInPlace.c)
 *     RtlpCheckHeapSignature @ 0x18003F9F0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x18003FAA0 (RtlpValidateHeapEntry.c)
 *     RtlpCheckBusyBlockTail @ 0x18003FC6C (RtlpCheckBusyBlockTail.c)
 *     RtlUnlockHeap @ 0x18003FEF0 (RtlUnlockHeap.c)
 *     RtlpValidateHeap @ 0x180040D80 (RtlpValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x18004178C (RtlDebugFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180042E70 (RtlpDeCommitFreeBlock.c)
 *     RtlDebugAllocateHeap @ 0x18009CC30 (RtlDebugAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x18009D360 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x1800A18B0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800A2A3C (RtlDebugReAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x180115F3C (RtlDebugCreateHeap.c)
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
