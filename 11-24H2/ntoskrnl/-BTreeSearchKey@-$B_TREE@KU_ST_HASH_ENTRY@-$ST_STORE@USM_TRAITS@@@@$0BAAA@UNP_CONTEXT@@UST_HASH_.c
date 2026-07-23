/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14037CF90
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14037BE70 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037D4F0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14037ECC0 (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14042CAAC (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037D4F0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
        struct B_TREE_NODE_HDR **a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // r12
  struct B_TREE_NODE_HDR **v5; // r13
  struct B_TREE_NODE_HDR *v6; // rax
  int v7; // edx
  unsigned int v8; // ecx
  _QWORD *v9; // r14
  char *v10; // rbx
  char *v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // r10d
  int v14; // r15d
  unsigned int v15; // r12d
  unsigned int v16; // edi
  __int64 v17; // rcx
  int v18; // r13d
  __int64 v19; // rbx
  __int64 v20; // r14
  unsigned int v21; // r11d
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rdx
  void **v27; // rcx
  char *v28; // r8
  unsigned int v29; // ebp
  int v30; // r11d
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r10
  __int64 v35; // rdx
  __int64 v36; // rdx
  unsigned int v37; // ecx
  __int64 v38; // rdx
  unsigned int v40; // ebp
  unsigned __int64 v41; // rdi
  __int64 Pool2; // rax
  void *v43; // r14
  size_t v44; // rbx
  int v45; // r15d
  __int64 v46; // r14
  unsigned int v47; // ebp
  unsigned int v48; // r11d
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // rdx
  unsigned int v52; // ecx
  __int64 v53; // rdx
  struct B_TREE_NODE_HDR *v54; // [rsp+20h] [rbp-68h]
  int v55; // [rsp+28h] [rbp-60h]
  _QWORD *v56; // [rsp+30h] [rbp-58h]
  char *v57; // [rsp+40h] [rbp-48h]
  __int64 v58; // [rsp+40h] [rbp-48h]
  int v61; // [rsp+A8h] [rbp+20h]

  v4 = a3;
  v5 = a1;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    a1,
    a3);
  if ( *(_DWORD *)(v4 + 24) == -1 )
  {
    v7 = 0;
    v9 = (_QWORD *)(v4 + 8);
    v61 = 0;
  }
  else
  {
    v6 = *v5;
    v7 = 1;
    v61 = 1;
    if ( *v5 )
      LODWORD(v6) = *((unsigned __int8 *)v6 + 2);
    v8 = *(_DWORD *)(v4 + 28);
    if ( v8 < (unsigned int)v6 )
    {
      v40 = 2 * v8;
      if ( 2 * v8 < 8 )
        v40 = 8;
      if ( (unsigned int)v6 >= v40 )
      {
        v40 = (_DWORD)v6 + 8;
        if ( (int)v6 + 8 < (unsigned int)v6 )
          return 3221225626LL;
      }
      v41 = 16LL * v40;
      if ( v41 > 0xFFFFFFFF )
        return 3221225626LL;
      Pool2 = ExAllocatePool2(0x40uLL, (unsigned int)v41, 0x72416D73u);
      v43 = (void *)Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      v44 = (unsigned int)(16 * *(_DWORD *)(v4 + 28));
      memset_0((void *)(v44 + Pool2), 0, (unsigned int)(v41 - v44));
      if ( (_DWORD)v44 )
      {
        memmove(v43, *(const void **)v4, v44);
        ExFreePoolWithTag(*(PVOID *)v4, 0);
      }
      *(_QWORD *)v4 = v43;
      v7 = 1;
      *(_DWORD *)(v4 + 28) = v40;
    }
    v9 = *(_QWORD **)v4;
  }
  v10 = (char *)*v5;
  v56 = v9;
  v54 = *v5;
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
    v57 = v10 + 16;
    if ( HIBYTE(*(_DWORD *)v10) )
    {
      if ( !(unsigned __int16)*(_DWORD *)v10 )
        goto LABEL_18;
      v14 = *((_DWORD *)v5 + 82);
      v15 = *((_DWORD *)v5 + 83);
      v16 = a2 >> v14;
      v17 = *((unsigned int *)v5 + 86);
      v18 = *((_DWORD *)v5 + 84);
      v19 = v17;
      v20 = (a2 & v15) * v18;
      do
      {
        v21 = *(_DWORD *)&v11[4 * ((v12 + v13) >> 1)];
        _BitScanReverse((unsigned int *)&v22, v21 >> v14);
        v23 = v19 + *((_QWORD *)a1[v22 + 8] + 2 * ((v21 >> v14) ^ (1 << v22))) + v18 * (v21 & v15);
        _BitScanReverse((unsigned int *)&v22, v16);
        v24 = *((_QWORD *)a1[v22 + 8] + 2 * (v16 ^ (1 << v22)));
        v25 = *(_DWORD *)(v23 + 8);
        v26 = v19 + v24;
        if ( v25 < *(_DWORD *)(v20 + v26 + 8) || v25 <= *(_DWORD *)(v20 + v26 + 8) && v21 < a2 )
          v13 = (v12 + v13) >> 1;
        else
          v12 = (v12 + v13) >> 1;
        v11 = v57;
      }
      while ( v13 + 1 != v12 );
      v10 = (char *)v54;
      v5 = a1;
      goto LABEL_17;
    }
    if ( (unsigned __int16)*(_DWORD *)v10 )
    {
      v45 = *((_DWORD *)v5 + 82);
      v46 = *((unsigned int *)v5 + 86);
      v47 = a2 >> v45;
      v55 = *((_DWORD *)v5 + 84);
      v58 = (a2 & *((_DWORD *)v5 + 83)) * v55;
      do
      {
        v48 = *(_DWORD *)&v11[16 * ((v12 + v13) >> 1)];
        _BitScanReverse((unsigned int *)&v49, v48 >> v45);
        v50 = v46 + *((_QWORD *)v5[v49 + 8] + 2 * ((v48 >> v45) ^ (1 << v49))) + v55 * (v48 & *((_DWORD *)v5 + 83));
        _BitScanReverse((unsigned int *)&v49, v47);
        v51 = *((_QWORD *)v5[v49 + 8] + 2 * (v47 ^ (1 << v49)));
        v52 = *(_DWORD *)(v50 + 8);
        v53 = v46 + v51;
        if ( v52 >= *(_DWORD *)(v58 + v53 + 8) && (v52 > *(_DWORD *)(v58 + v53 + 8) || v48 > a2) )
          v12 = (v12 + v13) >> 1;
        else
          v13 = (v12 + v13) >> 1;
        v11 = v10 + 16;
      }
      while ( v13 + 1 != v12 );
LABEL_17:
      v4 = a3;
      v9 = v56;
    }
LABEL_18:
    if ( v10[3] )
      break;
    if ( v61 )
    {
      *v9 = v10;
      v9[1] = &v10[16 * v12 + 16];
      v9 += 2;
      v56 = v9;
    }
    if ( v12 )
      v27 = (void **)&v10[16 * v12 + 8];
    else
      v27 = (void **)(v10 + 8);
    if ( *(_DWORD *)v5[2] == -1 || v10[2] != 2 )
    {
      v10 = (char *)*v27;
      v54 = (struct B_TREE_NODE_HDR *)*v27;
    }
    else
    {
      v54 = NP_CONTEXT::NpLeafRefInternal(v5 + 2, v27, 2 * (*(_BYTE *)(v4 + 32) & 1u));
      v10 = (char *)v54;
      if ( !v54 )
        return 3221225478LL;
    }
  }
  *v9 = v10;
  v28 = &v10[4 * v12 + 16];
  v9[1] = v28;
  if ( v61 )
    *(_DWORD *)(v4 + 24) = (((__int64)v9 - *(_QWORD *)v4) >> 4) + 1;
  if ( v12 < (unsigned __int16)*(_DWORD *)v10 )
  {
    v29 = *(_DWORD *)v28;
    v30 = *((_DWORD *)v5 + 84);
    v31 = *((unsigned int *)v5 + 86);
    v32 = (unsigned int)(*(_DWORD *)v28 >> *((_DWORD *)v5 + 82));
    _BitScanReverse((unsigned int *)&v33, v32);
    v34 = *((_QWORD *)v5[v33 + 8] + 2 * (v32 ^ (unsigned int)(1 << v33)));
    v35 = a2 >> *((_DWORD *)v5 + 82);
    _BitScanReverse((unsigned int *)&v33, v35);
    v36 = *((_QWORD *)v5[v33 + 8] + 2 * (v35 ^ (unsigned int)(1 << v33)));
    v37 = *(_DWORD *)((unsigned int)(v30 * (*(_DWORD *)v28 & *((_DWORD *)v5 + 83))) + v34 + v31 + 8);
    v38 = v30 * (a2 & *((_DWORD *)v5 + 83)) + v36;
    if ( v37 >= *(_DWORD *)(v38 + v31 + 8) && v37 <= *(_DWORD *)(v38 + v31 + 8) && v29 >= a2 && v29 <= a2 )
      return 0LL;
  }
  return 3221226021LL;
}
