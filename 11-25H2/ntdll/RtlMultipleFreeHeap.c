/*
 * XREFs of RtlMultipleFreeHeap @ 0x180143160
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

ULONG __cdecl RtlMultipleFreeHeap(PVOID HeapHandle, ULONG Flags, ULONG Count, PVOID *Array)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < Count; i = (unsigned int)(i + 1) )
  {
    if ( !RtlFreeHeap(HeapHandle, Flags, Array[i]) )
      return i;
  }
  return Count;
}
