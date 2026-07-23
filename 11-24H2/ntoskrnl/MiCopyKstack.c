/*
 * XREFs of MiCopyKstack @ 0x140676328
 * Callers:
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiStackCopyHighLevel @ 0x1406764D4 (MiStackCopyHighLevel.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     KeCopyPage @ 0x1406B43B0 (KeCopyPage.c)
 */

__int64 __fastcall MiCopyKstack(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rbp
  ULONG_PTR v7; // rsi
  __int64 v8; // rbx
  ULONG_PTR v9; // rbx
  int v11; // [rsp+68h] [rbp+20h]

  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v7 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  KeCopyPage(a3 << 25 >> 16, (__int64)(v7 << 25) >> 16, 1LL);
  v8 = *(_QWORD *)v7;
  if ( a4 )
  {
    *(_QWORD *)v7 = CLFS_LSN_NULL_EXT;
    MiFlushSingleTbEntry((__int64)(v7 << 25) >> 16, 2, 1);
    v9 = (v6 << 12) & 0xFFFFFFFFFF000LL ^ (v8 & 0xFFF0000000000FDFuLL | 0x20);
    if ( _bittest64(&MiFlags, 0x24u) && (v9 & 0x20) == 0 && v7 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v7, v9, 128LL);
    *(_QWORD *)v7 = v9;
  }
  v11 = *(_DWORD *)(a2 + 32);
  BYTE2(v11) = BYTE2(v11) & 0xF8 | 5;
  *(_DWORD *)(a2 + 32) = v11;
  MiSetPfnIdentity(a2, 0);
  return (__int64)(v7 << 25) >> 16;
}
