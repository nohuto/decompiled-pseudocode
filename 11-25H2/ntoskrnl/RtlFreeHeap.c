/*
 * XREFs of RtlFreeHeap @ 0x14047F160
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x1403CAA0C (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     RtlpFreeNTHeapInternal @ 0x14047F1DC (RtlpFreeNTHeapInternal.c)
 *     RtlpHeapFatalExceptionFilter @ 0x1405DCC3C (RtlpHeapFatalExceptionFilter.c)
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
