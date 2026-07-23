/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14037D5F0
 * Callers:
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14037A520 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14037B540 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037DB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140381398 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140441C88 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x140469EF0 (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140609E6C (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 *     ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x14060A76C (-StDmRegionGetKeys@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKK.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037DB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
        struct B_TREE_NODE_HDR **a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rdi
  struct B_TREE_NODE_HDR **v5; // r12
  struct B_TREE_NODE_HDR *v6; // rax
  int v7; // edx
  unsigned int v8; // ecx
  _QWORD *v9; // r14
  char *v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // r11d
  int v13; // r15d
  int v14; // ebp
  int v15; // edx
  unsigned int v16; // edi
  __int64 v17; // r13
  int v18; // r12d
  unsigned int v19; // r9d
  int v20; // r10d
  unsigned int v21; // r9d
  __int64 v22; // rcx
  _DWORD *v23; // r9
  void **v24; // rcx
  char *v25; // r9
  unsigned int v26; // ebx
  int v27; // r11d
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned int v35; // ecx
  __int64 v36; // rdx
  unsigned int v38; // ebp
  unsigned __int64 v39; // r14
  __int64 Pool2; // rax
  void *v41; // r15
  unsigned int v42; // ebx
  int v43; // r14d
  unsigned int v44; // ebp
  unsigned int v45; // r9d
  int v46; // r10d
  unsigned int v47; // r9d
  __int64 v48; // rcx
  _DWORD *v49; // r9
  int v50; // [rsp+20h] [rbp-78h]
  _QWORD *v51; // [rsp+30h] [rbp-68h]
  struct B_TREE_NODE_HDR *v52; // [rsp+38h] [rbp-60h]
  __int64 v53; // [rsp+40h] [rbp-58h]
  int v57; // [rsp+B8h] [rbp+20h]

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
    v57 = 0;
  }
  else
  {
    v6 = *v5;
    v7 = 1;
    v57 = 1;
    if ( *v5 )
      LODWORD(v6) = *((unsigned __int8 *)v6 + 2);
    v8 = *(_DWORD *)(v4 + 28);
    if ( v8 < (unsigned int)v6 )
    {
      v38 = 2 * v8;
      if ( 2 * v8 < 8 )
        v38 = 8;
      if ( (unsigned int)v6 >= v38 )
      {
        v38 = (_DWORD)v6 + 8;
        if ( (int)v6 + 8 < (unsigned int)v6 )
          return 3221225626LL;
      }
      v39 = 16LL * v38;
      if ( v39 > 0xFFFFFFFF )
        return 3221225626LL;
      Pool2 = ExAllocatePool2(0x40uLL, (unsigned int)v39, 0x72416D73u);
      v41 = (void *)Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      v42 = 16 * *(_DWORD *)(v4 + 28);
      memset_0((void *)(Pool2 + v42), 0, (unsigned int)v39 - v42);
      if ( v42 )
      {
        memmove(v41, *(const void **)v4, v42);
        ExFreePoolWithTag(*(PVOID *)v4, 0);
      }
      *(_QWORD *)v4 = v41;
      v7 = 1;
      *(_DWORD *)(v4 + 28) = v38;
    }
    v9 = *(_QWORD **)v4;
  }
  v10 = (char *)*v5;
  v51 = v9;
  v52 = *v5;
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
    v11 = (unsigned __int16)*(_DWORD *)v10;
    v12 = -1;
    if ( HIBYTE(*(_DWORD *)v10) )
    {
      if ( !(unsigned __int16)*(_DWORD *)v10 )
        goto LABEL_15;
      v13 = *((_DWORD *)v5 + 99);
      v14 = *((_DWORD *)v5 + 98);
      v15 = v3 & v13;
      v16 = v3 >> v14;
      v17 = *((unsigned int *)v5 + 102);
      v18 = *((_DWORD *)v5 + 100);
      do
      {
        v19 = *(_DWORD *)&v10[4 * ((v11 + v12) >> 1) + 16];
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
    if ( (unsigned __int16)*(_DWORD *)v10 )
    {
      v43 = *((_DWORD *)v5 + 98);
      v44 = v3 >> v43;
      v53 = *((unsigned int *)v5 + 102);
      v50 = *((_DWORD *)v5 + 100);
      do
      {
        v45 = *(_DWORD *)&v10[16 * ((v11 + v12) >> 1) + 16];
        v46 = v45 & *((_DWORD *)v5 + 99);
        v47 = v45 >> v43;
        _BitScanReverse((unsigned int *)&v48, v47);
        v49 = (_DWORD *)(v53 + *((_QWORD *)v5[v48 + 16] + 2 * (v47 ^ (1 << v48))) + (unsigned int)(v46 * v50));
        _BitScanReverse((unsigned int *)&v48, v44);
        if ( *v49 > *(_DWORD *)((v3 & *((_DWORD *)v5 + 99)) * v50
                              + v53
                              + *((_QWORD *)v5[v48 + 16] + 2 * (v44 ^ (1 << v48)))) )
          v11 = (v11 + v12) >> 1;
        else
          v12 = (v11 + v12) >> 1;
      }
      while ( v12 + 1 != v11 );
LABEL_14:
      v3 = a2;
      v4 = a3;
      v9 = v51;
      v10 = (char *)v52;
    }
LABEL_15:
    if ( v10[3] )
      break;
    if ( v57 )
    {
      *v9 = v10;
      v9[1] = &v10[16 * v11 + 16];
      v9 += 2;
      v51 = v9;
    }
    if ( v11 )
      v24 = (void **)&v10[16 * v11 + 8];
    else
      v24 = (void **)(v10 + 8);
    if ( *(_DWORD *)v5[2] == -1 || v10[2] != 2 )
    {
      v10 = (char *)*v24;
      v52 = (struct B_TREE_NODE_HDR *)*v24;
    }
    else
    {
      v52 = NP_CONTEXT::NpLeafRefInternal(v5 + 2, v24, 2 * (*(_BYTE *)(v4 + 32) & 1u));
      v10 = (char *)v52;
      if ( !v52 )
        return 3221225478LL;
    }
  }
  *v9 = v10;
  v25 = &v10[4 * v11 + 16];
  v9[1] = v25;
  if ( v57 )
    *(_DWORD *)(v4 + 24) = (((__int64)v9 - *(_QWORD *)v4) >> 4) + 1;
  if ( v11 < (unsigned __int16)*(_DWORD *)v10 )
  {
    v26 = *((_DWORD *)v5 + 99);
    v27 = *((_DWORD *)v5 + 100);
    v28 = *((unsigned int *)v5 + 102);
    v29 = (unsigned int)(*(_DWORD *)v25 >> *((_DWORD *)v5 + 98));
    _BitScanReverse((unsigned int *)&v30, v29);
    v31 = v27 * (v26 & *(_DWORD *)v25);
    v32 = *((_QWORD *)v5[v30 + 16] + 2 * (v29 ^ (unsigned int)(1 << v30)));
    v33 = v3 >> *((_DWORD *)v5 + 98);
    _BitScanReverse((unsigned int *)&v30, v33);
    v34 = *((_QWORD *)v5[v30 + 16] + 2 * (v33 ^ (unsigned int)(1 << v30)));
    v35 = *(_DWORD *)(v31 + v32 + v28);
    v36 = v27 * (v3 & v26) + v34;
    if ( v35 >= *(_DWORD *)(v36 + v28) && v35 <= *(_DWORD *)(v36 + v28) )
      return 0LL;
  }
  return 3221226021LL;
}
