/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x1402FA2C0
 * Callers:
 *     RtlpHpVaMgrRangeFind @ 0x1403CBEC8 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrCtxFree @ 0x1403CC28C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeCommitProcess @ 0x140497EB4 (RtlpHpVaMgrRangeCommitProcess.c)
 *     RtlpHpVaMgrCtxCommit @ 0x1405F9734 (RtlpHpVaMgrCtxCommit.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x1405F97B0 (RtlpHpVaMgrCtxDecommit.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1402FA408 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
