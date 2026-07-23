/*
 * XREFs of ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x1402F5420
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14023016C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall ST_STORE<SM_TRAITS>::StRegionFindCompact(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r8d
  __int64 v6; // r14
  _WORD *v7; // r15
  _WORD *v8; // r12
  bool v9; // zf
  unsigned int v10; // ebp
  unsigned int v11; // edi
  __int64 v12; // r11
  unsigned int v13; // r10d
  unsigned __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rax
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  int v19; // r8d
  unsigned int v20; // r8d
  __int64 v21; // rcx
  unsigned int v22; // r8d
  __int64 v23; // rcx
  unsigned int v24; // r10d
  unsigned int v25; // edx
  unsigned __int16 *v26; // r8
  int v27; // r9d
  __int64 v28; // r10
  _WORD *v29; // r11
  int v30; // eax
  unsigned __int64 v31; // rdi
  unsigned int v32; // r11d
  _WORD *i; // rdx
  _WORD *v34; // rax
  __int64 v35; // r8
  int v36; // ebx
  __int64 v37; // r9
  _WORD *v38; // r10
  unsigned int v39; // r9d
  __int16 v40; // r10
  int v41; // ecx
  _WORD v43[28]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 800) + 7416LL) )
  {
    v5 = 0;
    v4 = 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 1476);
    v5 = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
  }
  v6 = *(unsigned int *)(a1 + 856);
  v7 = v43;
  v8 = *(_WORD **)(a1 + 1416);
  v9 = *(_DWORD *)(a1 + 1472) == 0;
  v43[0] = (*(_WORD *)(a1 + 816) - *(_WORD *)(a1 + 820) + 1) & 0x1FFF;
  if ( !v9 && v5 )
  {
    v10 = *(_DWORD *)(a1 + 1456);
    v11 = 0;
    while ( v10 > v11 )
    {
      v12 = *(_QWORD *)(a1 + 1464);
      v13 = 0;
      v14 = (unsigned __int64)v11 >> 5;
      v15 = *(_DWORD *)(v12 + 4 * v14);
      v16 = v12 + 4 * v14;
      v17 = v12 + 4 * ((unsigned __int64)(v10 - 1) >> 5);
      v18 = v16 + 4;
      v19 = ((1 << (v11 & 0x1F)) - 1) | v15;
      while ( 1 )
      {
        v20 = ~v19;
        if ( v20 )
          break;
        if ( v18 > v17 )
          goto LABEL_30;
        v19 = *(_DWORD *)(v16 + 4);
        v16 += 4LL;
        v18 += 4LL;
      }
      _BitScanForward64((unsigned __int64 *)&v21, v20);
      v11 = v21 + 32 * ((v16 - v12) >> 2);
      if ( v11 > v10 )
      {
LABEL_30:
        v11 = v10;
        goto LABEL_20;
      }
      v22 = ~(((1 << v21) - 1) | v20);
      while ( 1 )
      {
        if ( v22 )
        {
          _BitScanForward64((unsigned __int64 *)&v23, v22);
          goto LABEL_17;
        }
        if ( v16 + 4 > v17 )
          break;
        v22 = *(_DWORD *)(v16 + 4);
        v16 += 4LL;
      }
      LODWORD(v23) = 32;
LABEL_17:
      v24 = v23 + 32 * ((v16 - v12) >> 2);
      if ( v24 > v10 )
        v24 = v10;
      v13 = v24 - v11;
LABEL_20:
      if ( !v13 )
        break;
      v25 = v11 + v13;
      v26 = &v8[v11];
      while ( v11 < v25 )
      {
        v27 = *(_DWORD *)(a1 + 776);
        if ( (v27 & 0x20000) == 0
          || (v28 = *(_QWORD *)(a1 + 800), v29 = (_WORD *)(*(_QWORD *)(v28 + 7024) + 8LL * v11), (*v29 & 0x7FFF) == 0)
          && *(_WORD **)(v28 + 7424) != v29 )
        {
          v30 = (_BYTE)v27 ? 0 : *v26 >> 13;
          if ( v30 == a2 )
          {
            v7 = v26;
            goto LABEL_49;
          }
        }
        ++v11;
        ++v26;
      }
    }
  }
  v31 = (unsigned __int64)&v8[v6];
  v32 = 0;
  for ( i = &v8[v4]; ; ++i )
  {
    v34 = i;
    if ( v32 >= (unsigned int)v6 )
      break;
    if ( (unsigned __int64)i >= v31 )
      i = v8;
    v35 = 0LL;
    if ( (unsigned __int64)v34 < v31 )
      v35 = v4;
    v36 = *(_DWORD *)(a1 + 776);
    if ( (v36 & 0x20000) == 0
      || (v37 = *(_QWORD *)(a1 + 800), v38 = (_WORD *)(*(_QWORD *)(v37 + 7024) + 8 * v35), (*v38 & 0x7FFF) == 0)
      && *(_WORD **)(v37 + 7424) != v38 )
    {
      v39 = (_BYTE)v36 ? 0 : (unsigned __int16)*i >> 13;
      if ( (unsigned __int16)(*i & 0x1FFF) < (unsigned __int16)(*v7 & 0x1FFF) )
      {
        v40 = *i & 0x1FFF;
        if ( v39 == a2 )
        {
          v7 = i;
          if ( !v40 )
            goto LABEL_49;
        }
        else if ( !v40 && i != &v8[*(unsigned int *)(a1 + 16 * (v39 + 102LL))] )
        {
          v7 = i;
          goto LABEL_49;
        }
      }
    }
    v4 = v35 + 1;
    ++v32;
  }
  if ( v7 == v43 )
    return 0LL;
LABEL_49:
  v41 = v7 - v8 + 1;
  *(_DWORD *)(a1 + 1476) = v41;
  if ( v41 == (_DWORD)v6 )
    *(_DWORD *)(a1 + 1476) = 0;
  return v7;
}
