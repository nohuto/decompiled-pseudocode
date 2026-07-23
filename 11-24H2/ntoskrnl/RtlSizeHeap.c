/*
 * XREFs of RtlSizeHeap @ 0x1405E6290
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpSizeHeapInternal @ 0x1405EAED0 (RtlpSizeHeapInternal.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0LL, (ULONG_PTR)BaseAddress, 0LL, 0LL, 0LL);
  return RtlpSizeHeapInternal(HeapHandle, *(_QWORD *)&Flags, BaseAddress);
}
