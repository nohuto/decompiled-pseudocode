/*
 * XREFs of ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14037B970
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037DB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14037DCD0 (-BTreeInsertEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
        struct B_TREE_NODE_HDR **a1,
        unsigned int *a2,
        __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rbp
  struct B_TREE_NODE_HDR **v5; // r12
  int v6; // edx
  unsigned int v7; // ecx
  _QWORD *v8; // r14
  char *v9; // rbx
  char *v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // r11d
  int v13; // r15d
  int v14; // ebp
  int v15; // edx
  unsigned int v16; // esi
  __int64 v17; // r13
  int v18; // r12d
  unsigned int v19; // r9d
  int v20; // r10d
  unsigned int v21; // r9d
  __int64 v22; // rcx
  _DWORD *v23; // r9
  void **v24; // rcx
  char *v25; // r9
  int v26; // r11d
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned int v34; // eax
  int v36; // r14d
  int v37; // ebx
  int v38; // edx
  unsigned int v39; // r13d
  __int64 v40; // rbp
  unsigned int v41; // r9d
  int v42; // r10d
  unsigned int v43; // r9d
  __int64 v44; // rcx
  _DWORD *v45; // r9
  unsigned int v46; // [rsp+20h] [rbp-88h]
  int v47; // [rsp+30h] [rbp-78h]
  _QWORD *v48; // [rsp+38h] [rbp-70h]
  struct B_TREE_NODE_HDR *v49; // [rsp+40h] [rbp-68h]
  int v53; // [rsp+C8h] [rbp+20h]

  v3 = *a2;
  v4 = a3;
  v46 = *a2;
  v5 = a1;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    a1,
    a3);
  if ( *(_DWORD *)(v4 + 24) == -1 )
  {
    v6 = 0;
    v8 = (_QWORD *)(v4 + 8);
    v53 = 0;
  }
  else
  {
    v6 = 1;
    v53 = 1;
    if ( *v5 )
      v7 = *((unsigned __int8 *)*v5 + 2);
    else
      v7 = 0;
    if ( *(_DWORD *)(v4 + 28) < v7 )
    {
      if ( !(unsigned int)SmArrayGrow(v7, 1LL, (unsigned int *)(v4 + 28), (const void **)v4) )
        return 3221225626LL;
      v6 = 1;
    }
    v8 = *(_QWORD **)v4;
  }
  v9 = (char *)*v5;
  v48 = v8;
  v49 = *v5;
  if ( !*v5 )
  {
    if ( !v6 )
    {
      *v8 = 0LL;
      v8[1] = 0LL;
    }
    return B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
             v5,
             v4,
             a2);
  }
  while ( 1 )
  {
    v10 = v9 + 16;
    v11 = (unsigned __int16)*(_DWORD *)v9;
    v12 = -1;
    if ( HIBYTE(*(_DWORD *)v9) )
    {
      if ( !(unsigned __int16)*(_DWORD *)v9 )
        goto LABEL_15;
      v13 = *((_DWORD *)v5 + 99);
      v14 = *((_DWORD *)v5 + 98);
      v15 = v3 & v13;
      v16 = v3 >> v14;
      v17 = *((unsigned int *)v5 + 102);
      v18 = *((_DWORD *)v5 + 100);
      do
      {
        v19 = *(_DWORD *)&v9[4 * ((v11 + v12) >> 1) + 16];
        v20 = v19 & v13;
        v21 = v19 >> v14;
        _BitScanReverse((unsigned int *)&v22, v21);
        v23 = (_DWORD *)(v17 + *((_QWORD *)a1[v22 + 16] + 2 * (v21 ^ (1 << v22))) + (unsigned int)(v20 * v18));
        _BitScanReverse((unsigned int *)&v22, v16);
        if ( *v23 >= *(_DWORD *)((unsigned int)(v15 * v18) + v17 + *((_QWORD *)a1[v22 + 16] + 2 * (v16 ^ (1 << v22)))) )
          v11 = (v11 + v12) >> 1;
        else
          v12 = (v11 + v12) >> 1;
      }
      while ( v12 + 1 != v11 );
      v5 = a1;
      goto LABEL_14;
    }
    if ( (unsigned __int16)*(_DWORD *)v9 )
    {
      v36 = *((_DWORD *)v5 + 98);
      v37 = *((_DWORD *)v5 + 99);
      v38 = v3 & v37;
      v39 = v3 >> v36;
      v40 = *((unsigned int *)v5 + 102);
      v47 = *((_DWORD *)v5 + 100);
      do
      {
        v41 = *(_DWORD *)&v10[16 * ((v11 + v12) >> 1)];
        v42 = v41 & v37;
        v43 = v41 >> v36;
        _BitScanReverse((unsigned int *)&v44, v43);
        v45 = (_DWORD *)(v40 + *((_QWORD *)v5[v44 + 16] + 2 * (v43 ^ (1 << v44))) + (unsigned int)(v42 * v47));
        _BitScanReverse((unsigned int *)&v44, v39);
        if ( *v45 > *(_DWORD *)((unsigned int)(v38 * v47) + v40 + *((_QWORD *)v5[v44 + 16] + 2 * (v39 ^ (1 << v44)))) )
          v11 = (v11 + v12) >> 1;
        else
          v12 = (v11 + v12) >> 1;
      }
      while ( v12 + 1 != v11 );
LABEL_14:
      v3 = v46;
      v4 = a3;
      v8 = v48;
      v9 = (char *)v49;
    }
LABEL_15:
    if ( v9[3] )
      break;
    if ( v53 )
    {
      *v8 = v9;
      v8[1] = &v9[16 * v11 + 16];
      v8 += 2;
      v48 = v8;
    }
    if ( v11 )
      v24 = (void **)&v9[16 * v11 + 8];
    else
      v24 = (void **)(v9 + 8);
    if ( *(_DWORD *)v5[2] == -1 || v9[2] != 2 )
    {
      v9 = (char *)*v24;
      v49 = (struct B_TREE_NODE_HDR *)*v24;
    }
    else
    {
      v49 = NP_CONTEXT::NpLeafRefInternal(v5 + 2, v24, 2 * (*(_BYTE *)(v4 + 32) & 1u));
      v9 = (char *)v49;
      if ( !v49 )
        return 3221225478LL;
    }
  }
  *v8 = v9;
  v25 = &v9[4 * v11 + 16];
  v8[1] = v25;
  if ( v53 )
    *(_DWORD *)(v4 + 24) = (((__int64)v8 - *(_QWORD *)v4) >> 4) + 1;
  if ( v11 < (unsigned __int16)*(_DWORD *)v9 )
  {
    v26 = *((_DWORD *)v5 + 100);
    v27 = *((unsigned int *)v5 + 102);
    v28 = (unsigned int)(*(_DWORD *)v25 >> *((_DWORD *)v5 + 98));
    _BitScanReverse((unsigned int *)&v29, v28);
    v30 = (unsigned int)(v26 * (*(_DWORD *)v25 & *((_DWORD *)v5 + 99)));
    v31 = *((_QWORD *)v5[v29 + 16] + 2 * (v28 ^ (unsigned int)(1 << v29)));
    v32 = v3 >> *((_DWORD *)v5 + 98);
    _BitScanReverse((unsigned int *)&v29, v32);
    v33 = v26 * (v3 & *((_DWORD *)v5 + 99)) + *((_QWORD *)v5[v29 + 16] + 2 * (v32 ^ (unsigned int)(1 << v29)));
    v34 = *(_DWORD *)(v30 + v31 + v27);
    if ( v34 >= *(_DWORD *)(v33 + v27) && v34 <= *(_DWORD *)(v33 + v27) )
      return 3221225812LL;
  }
  return B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
           v5,
           v4,
           a2);
}
