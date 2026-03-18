/*
 * XREFs of ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x14008FAD8
 * Callers:
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x14008FA50 (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE.c)
 * Callees:
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400D4D64 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FreeMemoryBlocks(VIDMM_LINEAR_POOL *a1, char a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( a2 != 7 )
    return 3221225485LL;
  v5 = (_QWORD *)((char *)a1 + 144);
  v6 = (_QWORD *)*((_QWORD *)a1 + 18);
  do
  {
    if ( v6 == v5 )
    {
      WdLogSingleEntry5(0LL, 275LL, 23LL, 7LL, *a4, a4[1]);
      WdLogGlobalForLineNumber = 1500;
      return 3221225485LL;
    }
    v7 = v6 - 3;
    v6 = (_QWORD *)*v6;
  }
  while ( *((_BYTE *)v7 + 56) != 7 || *v7 != *a4 );
  v8 = v7[1];
  v9 = a4[1];
  if ( v8 != v9 )
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, v8, v9, 0LL);
    WdLogGlobalForLineNumber = 1488;
  }
  VIDMM_LINEAR_POOL::Free(a1, (struct _VIDMM_POOL_BLOCK *)v7);
  return 0LL;
}
