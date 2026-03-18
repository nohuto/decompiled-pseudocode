/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x1402C276C
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x140421038 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x14042160C (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeCommitProcess @ 0x14048EEC4 (RtlpHpVaMgrRangeCommitProcess.c)
 *     RtlpHpVaMgrCtxCommit @ 0x140605A74 (RtlpHpVaMgrCtxCommit.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x140605AF0 (RtlpHpVaMgrCtxDecommit.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1402C28B4 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
