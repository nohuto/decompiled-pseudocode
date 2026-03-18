/*
 * XREFs of MiResetAccessBitsVpabCallback @ 0x1403FA450
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiResetAccessBitPteWorker @ 0x1403FB050 (MiResetAccessBitPteWorker.c)
 */

__int64 __fastcall MiResetAccessBitsVpabCallback(__int64 a1, _QWORD *a2, unsigned __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rbp
  int v7; // edi
  unsigned __int64 v9; // rax
  char v10; // cl

  v5 = *(_QWORD *)(a1 + 32);
  v7 = a3;
  v9 = MI_READ_PTE_LOCK_FREE(a3);
  v10 = 0;
  if ( (*a2 & 2) != 0 )
  {
LABEL_5:
    MiResetAccessBitPteWorker(v5, v7, a4, 48 * (v9 >> 12), a5, v10);
    return 0LL;
  }
  if ( (*a2 & 1) != 0 )
  {
    if ( *(_DWORD *)(a5 + 4) )
      v10 = 4;
    goto LABEL_5;
  }
  return 0LL;
}
