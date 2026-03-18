/*
 * XREFs of MiTrimWorkingSetVpabCallback @ 0x1403CD940
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTrimPteWorker @ 0x140242AA4 (MiTrimPteWorker.c)
 *     MiTrimmedEnough @ 0x1403CDA10 (MiTrimmedEnough.c)
 */

__int64 __fastcall MiTrimWorkingSetVpabCallback(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v9; // rax
  __int64 v10; // rcx

  if ( (unsigned int)MiTrimmedEnough(*(_QWORD *)(a1 + 32), a5) )
    return 1LL;
  v9 = MI_READ_PTE_LOCK_FREE(a3);
  v10 = *a2;
  if ( (*a2 & 2) != 0 )
    v10 = (v9 >> 5) & 1;
  else
    LOBYTE(v10) = (v10 & 1) != 0;
  return MiTrimPteWorker(a1, a3, a4, 48 * (unsigned int)(v9 >> 12), a5, v10, 0LL);
}
