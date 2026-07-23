/*
 * XREFs of ?StRegionFindRepurpose@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x14060AE98
 * Callers:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14060A93C (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall ST_STORE<SM_TRAITS>::StRegionFindRepurpose(__int64 a1, int a2)
{
  unsigned int v2; // ebp
  _WORD *v3; // r8
  char *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned int i; // ecx
  unsigned __int16 v10; // r10
  unsigned __int16 v11; // r10
  unsigned __int8 v12; // al
  char v14; // [rsp+0h] [rbp-28h] BYREF
  _WORD v15[18]; // [rsp+4h] [rbp-24h] BYREF

  v2 = *(_DWORD *)(a1 + 856);
  v3 = v15;
  v4 = &v14;
  v5 = *(_QWORD *)(a1 + 1416);
  v6 = *(_QWORD *)(a1 + 1432);
  LODWORD(v7) = a2 - 1;
  v15[0] = *(_WORD *)(a1 + 816) & 0x1FFF;
  v14 = -1;
  for ( i = 0; i < v2; ++i )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (_DWORD)v7 == *(_DWORD *)(a1 + 788) )
    {
      LODWORD(v7) = -1;
      --i;
    }
    else
    {
      v10 = *(_WORD *)(v5 + 2 * v7);
      if ( v10 < 0x4000u )
      {
        v11 = v10 & 0x1FFF;
        if ( !v11 )
        {
          v3 = (_WORD *)(v5 + 2 * v7);
          break;
        }
        v12 = *(_BYTE *)(v7 + v6);
        if ( v12 <= (unsigned __int8)*v4 && (v12 < (unsigned __int8)*v4 || v11 <= (unsigned __int16)(*v3 & 0x1FFF)) )
        {
          v4 = (char *)(v7 + v6);
          v3 = (_WORD *)(v5 + 2 * v7);
        }
      }
    }
  }
  if ( v3 == v15 )
    return 0LL;
  return v3;
}
