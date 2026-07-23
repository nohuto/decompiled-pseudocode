/*
 * XREFs of RtlAllocateHeap @ 0x1403686E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpAllocateNTHeapInternal @ 0x14036876C (RtlpAllocateNTHeapInternal.c)
 *     RtlpHeapFatalExceptionFilter @ 0x1405E62DC (RtlpHeapFatalExceptionFilter.c)
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
