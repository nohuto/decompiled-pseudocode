/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14039B1A0
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140398600 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140399068 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140399140 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14039B6F0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x14039EF40 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14044BA54 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x140471208 (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x1405FF7B4 (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 *     ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x1406000B4 (-StDmRegionGetKeys@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKK.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140396D98 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14039B6F0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
        struct B_TREE_NODE_HDR **a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rbp
  struct B_TREE_NODE_HDR **v5; // r12
  struct B_TREE_NODE_HDR *v6; // rax
  int v7; // edx
  unsigned int v8; // ecx
  _QWORD *v9; // r14
  char *v10; // rbx
  char *v11; // r15
  unsigned int v12; // eax
  unsigned int v13; // r11d
  int v14; // r15d
  int v15; // ebp
  int v16; // edx
  unsigned int v17; // edi
  __int64 v18; // r13
  int v19; // r12d
  unsigned int v20; // r9d
  int v21; // r10d
  unsigned int v22; // r9d
  __int64 v23; // rcx
  _DWORD *v24; // r9
  void **v25; // rcx
  char *v26; // r9
  unsigned int v27; // ebx
  int v28; // r11d
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned int v36; // ecx
  __int64 v37; // rdx
  unsigned int v39; // edi
  unsigned __int64 v40; // r14
  __int64 Pool2; // rax
  void *v42; // r15
  unsigned int v43; // ebx
  int v44; // r14d
  int v45; // ebx
  int v46; // edx
  unsigned int v47; // r13d
  __int64 v48; // rbp
  unsigned int v49; // r9d
  int v50; // r10d
  unsigned int v51; // r9d
  __int64 v52; // rcx
  _DWORD *v53; // r9
  int v54; // [rsp+28h] [rbp-70h]
  _QWORD *v55; // [rsp+30h] [rbp-68h]
  struct B_TREE_NODE_HDR *v56; // [rsp+38h] [rbp-60h]
  int v60; // [rsp+B8h] [rbp+20h]

  v3 = a2;
  v4 = a3;
  v5 = a1;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    a1,
    a3);
  if ( *(_DWORD *)(v4 + 24) == -1 )
  {
    v7 = 0;
    v9 = (_QWORD *)(v4 + 8);
    v60 = 0;
  }
  else
  {
    v6 = *v5;
    v7 = 1;
    v60 = 1;
    if ( *v5 )
      LODWORD(v6) = *((unsigned __int8 *)v6 + 2);
    v8 = *(_DWORD *)(v4 + 28);
    if ( v8 < (unsigned int)v6 )
    {
      v39 = 2 * v8;
      if ( 2 * v8 < 8 )
        v39 = 8;
      if ( (unsigned int)v6 >= v39 )
      {
        v39 = (_DWORD)v6 + 8;
        if ( (int)v6 + 8 < (unsigned int)v6 )
          return 3221225626LL;
      }
      v40 = 16LL * v39;
      if ( v40 > 0xFFFFFFFF )
        return 3221225626LL;
      Pool2 = ExAllocatePool2(0x40uLL);
      v42 = (void *)Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      v43 = 16 * *(_DWORD *)(v4 + 28);
      memset_0((void *)(Pool2 + v43), 0, (unsigned int)v40 - v43);
      if ( v43 )
      {
        memmove(v42, *(const void **)v4, v43);
        ExFreePoolWithTag(*(PVOID *)v4, 0);
      }
      *(_QWORD *)v4 = v42;
      v7 = 1;
      *(_DWORD *)(v4 + 28) = v39;
    }
    v9 = *(_QWORD **)v4;
  }
  v10 = (char *)*v5;
  v55 = v9;
  v56 = *v5;
  if ( !*v5 )
  {
    if ( !v7 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
    }
    return 3221226021LL;
  }
  while ( 1 )
  {
    v11 = v10 + 16;
    v12 = (unsigned __int16)*(_DWORD *)v10;
    v13 = -1;
    if ( HIBYTE(*(_DWORD *)v10) )
    {
      if ( !(unsigned __int16)*(_DWORD *)v10 )
        goto LABEL_15;
      v14 = *((_DWORD *)v5 + 99);
      v15 = *((_DWORD *)v5 + 98);
      v16 = v3 & v14;
      v17 = v3 >> v15;
      v18 = *((unsigned int *)v5 + 102);
      v19 = *((_DWORD *)v5 + 100);
      do
      {
        v20 = *(_DWORD *)&v10[4 * ((v12 + v13) >> 1) + 16];
        v21 = v20 & v14;
        v22 = v20 >> v15;
        _BitScanReverse((unsigned int *)&v23, v22);
        v24 = (_DWORD *)(v18 + *((_QWORD *)a1[v23 + 16] + 2 * (v22 ^ (1 << v23))) + (unsigned int)(v21 * v19));
        _BitScanReverse((unsigned int *)&v23, v17);
        if ( *v24 >= *(_DWORD *)((unsigned int)(v16 * v19) + v18 + *((_QWORD *)a1[v23 + 16] + 2 * (v17 ^ (1 << v23)))) )
          v12 = (v12 + v13) >> 1;
        else
          v13 = (v12 + v13) >> 1;
      }
      while ( v13 + 1 != v12 );
      v5 = a1;
      goto LABEL_14;
    }
    if ( (unsigned __int16)*(_DWORD *)v10 )
    {
      v44 = *((_DWORD *)v5 + 98);
      v45 = *((_DWORD *)v5 + 99);
      v46 = v3 & v45;
      v47 = v3 >> v44;
      v48 = *((unsigned int *)v5 + 102);
      v54 = *((_DWORD *)v5 + 100);
      do
      {
        v49 = *(_DWORD *)&v11[16 * ((v12 + v13) >> 1)];
        v50 = v49 & v45;
        v51 = v49 >> v44;
        _BitScanReverse((unsigned int *)&v52, v51);
        v53 = (_DWORD *)(v48 + *((_QWORD *)v5[v52 + 16] + 2 * (v51 ^ (1 << v52))) + (unsigned int)(v50 * v54));
        _BitScanReverse((unsigned int *)&v52, v47);
        if ( *v53 > *(_DWORD *)((unsigned int)(v46 * v54) + v48 + *((_QWORD *)v5[v52 + 16] + 2 * (v47 ^ (1 << v52)))) )
          v12 = (v12 + v13) >> 1;
        else
          v13 = (v12 + v13) >> 1;
      }
      while ( v13 + 1 != v12 );
LABEL_14:
      v3 = a2;
      v4 = a3;
      v9 = v55;
      v10 = (char *)v56;
    }
LABEL_15:
    if ( v10[3] )
      break;
    if ( v60 )
    {
      *v9 = v10;
      v9[1] = &v10[16 * v12 + 16];
      v9 += 2;
      v55 = v9;
    }
    if ( v12 )
      v25 = (void **)&v10[16 * v12 + 8];
    else
      v25 = (void **)(v10 + 8);
    if ( *(_DWORD *)v5[2] == -1 || v10[2] != 2 )
    {
      v10 = (char *)*v25;
      v56 = (struct B_TREE_NODE_HDR *)*v25;
    }
    else
    {
      v56 = NP_CONTEXT::NpLeafRefInternal(v5 + 2, v25, 2 * (*(_BYTE *)(v4 + 32) & 1u));
      v10 = (char *)v56;
      if ( !v56 )
        return 3221225478LL;
    }
  }
  *v9 = v10;
  v26 = &v10[4 * v12 + 16];
  v9[1] = v26;
  if ( v60 )
    *(_DWORD *)(v4 + 24) = (((__int64)v9 - *(_QWORD *)v4) >> 4) + 1;
  if ( v12 < (unsigned __int16)*(_DWORD *)v10 )
  {
    v27 = *((_DWORD *)v5 + 99);
    v28 = *((_DWORD *)v5 + 100);
    v29 = *((unsigned int *)v5 + 102);
    v30 = (unsigned int)(*(_DWORD *)v26 >> *((_DWORD *)v5 + 98));
    _BitScanReverse((unsigned int *)&v31, v30);
    v32 = v28 * (v27 & *(_DWORD *)v26);
    v33 = *((_QWORD *)v5[v31 + 16] + 2 * (v30 ^ (unsigned int)(1 << v31)));
    v34 = v3 >> *((_DWORD *)v5 + 98);
    _BitScanReverse((unsigned int *)&v31, v34);
    v35 = *((_QWORD *)v5[v31 + 16] + 2 * (v34 ^ (unsigned int)(1 << v31)));
    v36 = *(_DWORD *)(v32 + v33 + v29);
    v37 = v28 * (v3 & v27) + v35;
    if ( v36 >= *(_DWORD *)(v37 + v29) && v36 <= *(_DWORD *)(v37 + v29) )
      return 0LL;
  }
  return 3221226021LL;
}
