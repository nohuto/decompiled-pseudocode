/*
 * XREFs of RaFindDriverInitData @ 0x140181008
 * Callers:
 *     RaDriverAddDevice @ 0x140045960 (RaDriverAddDevice.c)
 *     RaidInitializeAdapter @ 0x1401BE038 (RaidInitializeAdapter.c)
 *     InitializeNvmeAdapter @ 0x1401BEFA0 (InitializeNvmeAdapter.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RaFindDriverInitData(__int64 a1, int a2)
{
  _QWORD *v2; // r10
  _QWORD *i; // rcx
  _QWORD *v4; // r9

  v2 = (_QWORD *)(a1 + 96);
  for ( i = *(_QWORD **)(a1 + 96); i != v2; i = (_QWORD *)*i )
  {
    v4 = i - 26;
    if ( (*(_DWORD *)(i - 3) & 0x800) != 0 )
      *((_DWORD *)v4 + 1) = a2;
    if ( *((_DWORD *)v4 + 1) == a2 )
      return i - 26;
  }
  return 0LL;
}
