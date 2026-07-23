/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x18009DE90
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x18009D290 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x18009DB34 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeCommitProcess @ 0x18009E1B0 (RtlpHpVaMgrRangeCommitProcess.c)
 *     RtlpHpVaMgrCtxQuery @ 0x18009E33C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVaMgrCtxCommit @ 0x18011B2FC (RtlpHpVaMgrCtxCommit.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x1801563C8 (RtlpHpVaMgrCtxDecommit.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x18009DEEC (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
