/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x1800BC680
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x1800BBA80 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x1800BC324 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeCommitProcess @ 0x1800BC9A0 (RtlpHpVaMgrRangeCommitProcess.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1800BCB2C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVaMgrCtxCommit @ 0x18011E9A0 (RtlpHpVaMgrCtxCommit.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x1801595B8 (RtlpHpVaMgrCtxDecommit.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1800BC6DC (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
