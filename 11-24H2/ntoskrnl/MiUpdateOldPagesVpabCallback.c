/*
 * XREFs of MiUpdateOldPagesVpabCallback @ 0x1404382C0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateOldPteWorker @ 0x1404385C0 (MiUpdateOldPteWorker.c)
 */

__int64 __fastcall MiUpdateOldPagesVpabCallback(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  unsigned __int64 v8; // rax
  bool v9; // zf

  v5 = *(_QWORD *)(a1 + 32);
  v8 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (*a2 & 2) != 0 )
    v9 = (v8 & 0x20) == 0;
  else
    v9 = (*a2 & 1) == 0;
  if ( v9 )
    MiUpdateOldPteWorker(v5, a3, 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, a5);
  return 0LL;
}
