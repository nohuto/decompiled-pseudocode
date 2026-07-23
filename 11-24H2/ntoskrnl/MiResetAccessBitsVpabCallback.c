/*
 * XREFs of MiResetAccessBitsVpabCallback @ 0x140497620
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiResetAccessBitPteWorker @ 0x1402941D8 (MiResetAccessBitPteWorker.c)
 */

__int64 __fastcall MiResetAccessBitsVpabCallback(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  unsigned __int64 v9; // rax
  char v10; // cl

  v5 = *(_QWORD *)(a1 + 32);
  v9 = MI_READ_PTE_LOCK_FREE(a3);
  v10 = 0;
  if ( (*a2 & 2) != 0 )
  {
LABEL_5:
    MiResetAccessBitPteWorker(v5, a3, a4, 48 * ((v9 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, a5, v10);
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
