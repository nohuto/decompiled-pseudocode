/*
 * XREFs of MiConfirmPageIsZero @ 0x14021D260
 * Callers:
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 */

_BOOL8 __fastcall MiConfirmPageIsZero(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rcx

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned __int16)*(_DWORD *)(a1 + 32) != 1 )
    return 0LL;
  v4 = MiMapPageInHyperSpaceWorker(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), 0LL, 0x80000000LL, a4);
  v5 = (_QWORD *)v4;
  v6 = (_QWORD *)(v4 + 4088);
  do
  {
    if ( *v5 | *v6 )
      break;
    ++v5;
    --v6;
  }
  while ( v5 <= v6 );
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  return v5 > v6;
}
