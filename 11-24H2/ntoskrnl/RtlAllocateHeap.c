/*
 * XREFs of RtlAllocateHeap @ 0x14047A1B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 *     RtlpAllocateNTHeapInternal @ 0x14047A23C (RtlpAllocateNTHeapInternal.c)
 *     RtlpHeapFatalExceptionFilter @ 0x1405E8D8C (RtlpHeapFatalExceptionFilter.c)
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
