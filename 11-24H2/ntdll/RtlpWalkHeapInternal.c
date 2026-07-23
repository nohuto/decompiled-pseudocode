/*
 * XREFs of RtlpWalkHeapInternal @ 0x18005E1A0
 * Callers:
 *     RtlpHpStackTraceHeapSerialize @ 0x18014A380 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlpEnsureSegHeapLockedForWalk @ 0x18005E200 (RtlpEnsureSegHeapLockedForWalk.c)
 */

__int64 __fastcall RtlpWalkHeapInternal(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 v3; // di

  v3 = a3;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return RtlpWalkHeap(a1, a2, a3);
  RtlpEnsureSegHeapLockedForWalk();
  return RtlpHpHeapWalk(a1, a2, v3);
}
