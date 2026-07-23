/*
 * XREFs of RtlMultipleAllocateHeap @ 0x18013FBE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 */

ULONG __cdecl RtlMultipleAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size, ULONG Count, PVOID *Array)
{
  __int64 i; // rbx
  PVOID Heap; // rax

  for ( i = 0LL; (unsigned int)i < Count; i = (unsigned int)(i + 1) )
  {
    Heap = RtlAllocateHeap(HeapHandle, Flags, Size);
    Array[i] = Heap;
    if ( !Heap )
      return i;
  }
  return Count;
}
