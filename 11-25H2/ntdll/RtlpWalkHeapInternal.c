/*
 * XREFs of RtlpWalkHeapInternal @ 0x18009B880
 * Callers:
 *     RtlpHpStackTraceHeapSerialize @ 0x18014D580 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlpEnsureSegHeapLockedForWalk @ 0x18009BA24 (RtlpEnsureSegHeapLockedForWalk.c)
 */

__int64 __fastcall RtlpWalkHeapInternal(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return RtlpWalkHeap(a1);
  RtlpEnsureSegHeapLockedForWalk();
  return RtlpHpHeapWalk(a1, a2, a3);
}
