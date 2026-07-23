/*
 * XREFs of ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x1402F52D0
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140378D1C (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402F613C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // rax
  unsigned int v6; // r10d
  _WORD *v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int16 v9; // di
  __int64 result; // rax
  _DWORD *v12; // rdx
  unsigned int v13; // ecx

  v4 = *(_QWORD *)(a1 + 1416);
  v6 = *(unsigned __int16 *)(v4 + 2LL * a2);
  v7 = (_WORD *)(v4 + 2LL * a2);
  v8 = a2;
  v9 = v6 & 0x1FFF;
  if ( *(_BYTE *)(a1 + 776) )
    result = 0LL;
  else
    result = v6 >> 13;
  *v7 = a3 + v6;
  v12 = (_DWORD *)(a1 + 16 * (result + 102));
  *(_DWORD *)(a1 + 8 * result + 2212) += a3;
  if ( *v12 != a2 )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
    v13 = *v7 & 0x1FFF;
    if ( v9 < (unsigned int)result && v9 )
    {
      if ( v13 >= (unsigned int)result || (*v7 & 0x1FFF) == 0 )
      {
        --*(_DWORD *)(a1 + 1472);
        result = a2 & 7;
        *(_BYTE *)(*(_QWORD *)(a1 + 1464) + (v8 >> 3)) |= 1 << result;
      }
    }
    else if ( v13 < (unsigned int)result && (*v7 & 0x1FFF) != 0 )
    {
      result = a2 & 7;
      *(_BYTE *)(*(_QWORD *)(a1 + 1464) + (v8 >> 3)) &= ~(1 << result);
      ++*(_DWORD *)(a1 + 1472);
    }
  }
  if ( a3 > 0 )
  {
    if ( a2 == *v12 )
      v12[1] += a3;
  }
  else if ( (*v7 & 0x1FFF) == 0 && a2 != *v12 && !a4 )
  {
    return ST_STORE<SM_TRAITS>::StReleaseRegion(a1, a2);
  }
  return result;
}
