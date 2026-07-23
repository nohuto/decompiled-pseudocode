/*
 * XREFs of MiClearContainingMapping @ 0x140451394
 * Callers:
 *     MiDeleteTopLevelPage @ 0x14045128C (MiDeleteTopLevelPage.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 */

ULONG_PTR __fastcall MiClearContainingMapping(__int64 a1)
{
  __int64 v2; // rcx
  ULONG_PTR result; // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL;
  result = 0x8000000000000000uLL;
  if ( (*(_QWORD *)(48 * v2 - 0x220000000000LL + 8) | 0x8000000000000000uLL) == ((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL)
                                                                              - 0x98000000000LL )
  {
    v4 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 3) & 0x1FF;
    v5 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000);
    v6 = *(_QWORD *)(v5 + 8LL * v4);
    if ( (v6 & 1) != 0 )
      *(_QWORD *)(v5 + 8LL * v4) = v6 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    v7 = (_QWORD *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    result = CLFS_LSN_NULL_EXT;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *v7 = CLFS_LSN_NULL_EXT;
  }
  return result;
}
