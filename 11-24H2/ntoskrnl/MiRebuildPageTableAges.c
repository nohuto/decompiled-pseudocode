/*
 * XREFs of MiRebuildPageTableAges @ 0x140392C6C
 * Callers:
 *     MiAddWorkingSetEntries @ 0x140242260 (MiAddWorkingSetEntries.c)
 *     MiRemoveWsleList @ 0x140303100 (MiRemoveWsleList.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 *     MiFastTrimWorkingSet @ 0x140390500 (MiFastTrimWorkingSet.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1403923F0 (MiUpdateWorkingSetAgeDistribution.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetPfnOldestWsleLeafAge @ 0x14039234C (MiSetPfnOldestWsleLeafAge.c)
 *     MiRemoveActivePageTableLinks @ 0x1403929A8 (MiRemoveActivePageTableLinks.c)
 *     MiCountWslesInPageTable @ 0x140392D68 (MiCountWslesInPageTable.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiRebuildPageTableAges(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // r8
  int v9; // r9d
  _DWORD v10[8]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 48
     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  result = *(_QWORD *)v6 >> 45;
  if ( (result & 0x3FF) == 0 || (a3 & 1) != 0 )
  {
    MiCountWslesInPageTable(a1, a2, v10, a3);
    LOBYTE(v8) = 8;
    while ( (_BYTE)v8 )
    {
      LOBYTE(v8) = v8 - 1;
      v9 = v10[(unsigned __int8)v8];
      if ( v9 )
        return MiSetPfnOldestWsleLeafAge(a1, (unsigned __int64 *)v6, v8, v9, 0);
    }
    result = *(unsigned int *)(v6 + 36);
    if ( (result & 0x4000000) != 0 )
      return MiRemoveActivePageTableLinks(a1, v6, 0);
  }
  return result;
}
