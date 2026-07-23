/*
 * XREFs of MiConfirmPageIsZero @ 0x140249FB0
 * Callers:
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 */

_BOOL8 __fastcall MiConfirmPageIsZero(__int64 a1)
{
  unsigned __int64 v1; // rax
  _QWORD *v2; // r9
  _QWORD *v3; // rcx

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned __int16)*(_DWORD *)(a1 + 32) != 1 )
    return 0LL;
  v1 = MiMapPageInHyperSpaceWorker(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), 0LL, 0x80000000LL);
  v2 = (_QWORD *)v1;
  v3 = (_QWORD *)(v1 + 4088);
  do
  {
    if ( *v2 | *v3 )
      break;
    ++v2;
    --v3;
  }
  while ( v2 <= v3 );
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  return v2 > v3;
}
