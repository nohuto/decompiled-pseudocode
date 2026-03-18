/*
 * XREFs of MiRebuildPageTableAges @ 0x140385AC4
 * Callers:
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiAddWorkingSetEntries @ 0x1402BA2B0 (MiAddWorkingSetEntries.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1403851C0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiFastTrimWorkingSet @ 0x1403C4B40 (MiFastTrimWorkingSet.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveActivePageTableLinks @ 0x14038573C (MiRemoveActivePageTableLinks.c)
 *     MiSetPfnOldestWsleLeafAge @ 0x140385A24 (MiSetPfnOldestWsleLeafAge.c)
 *     MiCountWslesInPageTable @ 0x140385BC0 (MiCountWslesInPageTable.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall MiRebuildPageTableAges(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  unsigned __int8 v7; // r8
  int v8; // r9d
  _DWORD v9[8]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 48
     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  if ( ((*(_QWORD *)v6 >> 45) & 0x3FF) == 0 || (a3 & 1) != 0 )
  {
    MiCountWslesInPageTable(a1, a2, v9, a3);
    v7 = 8;
    while ( v7 )
    {
      v8 = v9[--v7];
      if ( v8 )
      {
        MiSetPfnOldestWsleLeafAge(a1, v6, v7, v8, 0);
        return;
      }
    }
    if ( (*(_DWORD *)(v6 + 36) & 0x4000000) != 0 )
      MiRemoveActivePageTableLinks(a1, v6, 0);
  }
}
