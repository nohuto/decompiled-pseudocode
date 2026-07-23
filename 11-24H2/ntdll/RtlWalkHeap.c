/*
 * XREFs of RtlWalkHeap @ 0x18005E150
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnsureSegHeapLockedForWalk @ 0x18005E200 (RtlpEnsureSegHeapLockedForWalk.c)
 */

NTSTATUS __cdecl RtlWalkHeap(PVOID HeapHandle, PRTL_HEAP_WALK_ENTRY Entry)
{
  char v4; // r8
  __int64 v6; // r8

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpEnsureSegHeapLockedForWalk();
    LOBYTE(v6) = 1;
    return RtlpHpHeapWalk((__int64)HeapHandle, (__int64 *)Entry, v6);
  }
  else
  {
    v4 = 1;
    return RtlpWalkHeap(HeapHandle, Entry, v4);
  }
}
