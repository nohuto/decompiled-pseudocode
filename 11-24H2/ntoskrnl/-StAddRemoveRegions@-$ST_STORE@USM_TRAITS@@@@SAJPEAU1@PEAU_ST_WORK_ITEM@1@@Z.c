/*
 * XREFs of ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404A5B08
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14060A93C (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StAddRemoveRegions(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbp
  unsigned int *v5; // r13
  unsigned int v6; // ebp
  unsigned int v7; // r15d
  int v8; // edx
  int v9; // r11d
  unsigned int v10; // r8d
  __int64 v11; // rbx
  unsigned int v12; // r14d
  unsigned int v13; // r9d
  _QWORD *v14; // r9
  __int64 i; // rdx
  unsigned __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // r10d
  unsigned int v19; // edi
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 24);
  v3 = a1 + 80;
  v21 = 0;
  if ( (*(_DWORD *)(a2 + 8) & 7) != 4 )
  {
    v19 = 0;
    v18 = -1;
    while ( 1 )
    {
      if ( v19 >= v2 )
        goto LABEL_27;
      v18 = ST_STORE<SM_TRAITS>::StDmRegionRemove(v3, &v21);
      if ( v18 < 0 )
        break;
      *(_BYTE *)(((unsigned __int64)v21 >> 3) + *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) |= 1 << (v21 & 7);
      ++v19;
    }
    if ( v18 != -1073741818 )
      v18 = 0;
LABEL_27:
    *(_DWORD *)(a2 + 24) = v19;
    return (unsigned int)v18;
  }
  v5 = *(unsigned int **)(a2 + 16);
LABEL_3:
  if ( v2 )
  {
    v6 = *v5;
    v7 = v21;
    v8 = *v5 - 1;
    v9 = (v5[2] & 4) != 0LL ? 0x20 : 0;
    v10 = v21 < *v5 ? v21 : 0;
    v11 = *((_QWORD *)v5 + 1) - ((*((_QWORD *)v5 + 1) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v21 = 0;
      v12 = v9 + v8;
      if ( v8 - v10 == -1 )
        goto LABEL_6;
      v14 = (_QWORD *)(v11 + 8 * ((unsigned __int64)(v9 + v10) >> 6));
      for ( i = ~*v14 | ((1LL << ((v9 + v10) & 0x3F)) - 1); i == -1; i = ~*v14 )
      {
        if ( (unsigned __int64)++v14 > v11 + 8 * ((unsigned __int64)v12 >> 6) )
          goto LABEL_6;
      }
      _BitScanForward64(&v16, ~i);
      v13 = v16 + ((unsigned int)(((__int64)v14 - v11) >> 3) << 6);
      if ( v13 > v12 )
      {
LABEL_6:
        v13 = -1;
      }
      else if ( v13 != -1 )
      {
        v13 -= v9;
LABEL_19:
        *(_BYTE *)(((unsigned __int64)v13 >> 3) + *(_QWORD *)(a1 + 928)) |= 1 << (v13 & 7);
        ++*(_DWORD *)(a1 + 936);
        --v2;
        v21 = v13 + 1;
        goto LABEL_3;
      }
      if ( !v10 )
        goto LABEL_19;
      v17 = v7 + 1;
      v10 = 0;
      if ( v7 + 1 > v6 )
        v17 = v6;
      v8 = v17 - 1;
    }
  }
  return 0;
}
