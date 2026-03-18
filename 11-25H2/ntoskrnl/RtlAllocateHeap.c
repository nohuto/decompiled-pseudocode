/*
 * XREFs of RtlAllocateHeap @ 0x1403CA980
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     RtlpAllocateNTHeapInternal @ 0x1403CAA0C (RtlpAllocateNTHeapInternal.c)
 *     RtlpHeapFatalExceptionFilter @ 0x1405DCC3C (RtlpHeapFatalExceptionFilter.c)
 */

PVOID __stdcall RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  void *v4; // rbx

  v4 = 0LL;
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
    return (PVOID)RtlpAllocateNTHeapInternal(HeapHandle);
  return v4;
}
