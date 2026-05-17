/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x180093300
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x180092700 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x180092FA4 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeCommitProcess @ 0x180093620 (RtlpHpVaMgrRangeCommitProcess.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1800937AC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVaMgrCtxCommit @ 0x18011D0CC (RtlpHpVaMgrCtxCommit.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x180158008 (RtlpHpVaMgrCtxDecommit.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x18009335C (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
