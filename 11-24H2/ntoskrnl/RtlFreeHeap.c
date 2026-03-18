/*
 * XREFs of RtlFreeHeap @ 0x14047DE70
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x14047A23C (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 *     RtlpFreeNTHeapInternal @ 0x14047DEEC (RtlpFreeNTHeapInternal.c)
 *     RtlpHeapFatalExceptionFilter @ 0x1405E8D8C (RtlpHeapFatalExceptionFilter.c)
 */

BOOLEAN __stdcall RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  BOOLEAN v6; // bl

  v6 = 0;
  if ( ((unsigned __int64)HeapHandle & (unsigned __int64)BaseAddress) == 0 )
  {
    if ( !BaseAddress )
      return 1;
    if ( !HeapHandle )
      RtlpLogHeapFailure(19, 0LL, (ULONG_PTR)BaseAddress, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
    return RtlpFreeNTHeapInternal(HeapHandle, BaseAddress, Flags);
  return v6;
}
