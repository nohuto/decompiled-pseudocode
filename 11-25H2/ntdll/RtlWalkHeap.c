/*
 * XREFs of RtlWalkHeap @ 0x18009B450
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnsureSegHeapLockedForWalk @ 0x18009BA24 (RtlpEnsureSegHeapLockedForWalk.c)
 */

NTSTATUS __cdecl RtlWalkHeap(PVOID HeapHandle, PRTL_HEAP_WALK_ENTRY Entry)
{
  __int64 v5; // r8

  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
    return RtlpWalkHeap((int)HeapHandle);
  RtlpEnsureSegHeapLockedForWalk();
  LOBYTE(v5) = 1;
  return RtlpHpHeapWalk(HeapHandle, Entry, v5);
}
