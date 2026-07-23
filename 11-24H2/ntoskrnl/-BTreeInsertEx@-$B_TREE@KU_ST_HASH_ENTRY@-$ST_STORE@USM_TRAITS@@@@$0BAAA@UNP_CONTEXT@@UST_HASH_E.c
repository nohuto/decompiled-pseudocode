/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14037B620
 * Callers:
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140379D7C (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14037BE70 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140379D7C (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14037A138 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037A234 (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14045A5C8 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  unsigned int v7; // ecx
  int v8; // ebx
  char **v9; // rdi
  char *v10; // rbx
  unsigned int v11; // ebp
  int v12; // ecx
  char *v13; // rdi
  int v14; // eax
  char *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r10
  int v24; // ecx
  int v25; // edx
  int v26; // edx
  __int64 v27; // rax
  void **v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  void **v31; // rax
  bool v32; // cc
  struct NP_CONTEXT::NP_CTX *v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // r12d
  __int64 v37; // rcx
  void **v38; // rdx
  struct NP_CONTEXT::NP_CTX *v39; // rcx
  int v40; // r12d
  char *v41; // r8

  v3 = *a1;
  v7 = 0;
  if ( v3 )
    v7 = *(unsigned __int8 *)(v3 + 2);
  v8 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= v7 && !(unsigned int)SmArrayGrow(v7, a2, (unsigned int *)(a2 + 28), (const void **)a2) )
    return 3221225626LL;
  if ( v8 )
  {
    v9 = (char **)(*(_QWORD *)a2 + 16LL * (unsigned int)(v8 - 1));
  }
  else
  {
    v16 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            (__int64)a1,
            1u,
            1);
    *a1 = (__int64)v16;
    if ( !v16 )
      return 3221225626LL;
    v9 = *(char ***)a2;
    *v9 = v16;
    v9[1] = (char *)(*a1 + 16);
    ++*(_DWORD *)(a2 + 24);
  }
  v10 = *v9;
  v11 = 255;
  v12 = *(_DWORD *)*v9;
  if ( (*v9)[3] )
    v11 = 1020;
  if ( (unsigned __int16)v12 >= v11 )
  {
    v17 = v9[1] - v10 - 16;
    v18 = v17 >> 2;
    v19 = v17 >> 4;
    if ( !HIBYTE(v12) )
      LODWORD(v18) = v19;
    if ( v10 == (char *)*a1 )
    {
      v23 = 0LL;
      v22 = 0LL;
      v21 = 0LL;
    }
    else
    {
      v20 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
              (__int64)a1,
              a2);
      v21 = (unsigned __int64)*(v9 - 1);
      v22 = v20;
      v23 = v21 + 32LL * ((v20 & 1) == 0) - 16;
    }
    v24 = HIBYTE(*(_DWORD *)v10);
    v25 = (unsigned __int16)*(_DWORD *)v10;
    if ( v25 >= v11 )
    {
      if ( v22 && (_BYTE)v24 )
      {
        v37 = (__int64)*(v9 - 2);
        v38 = (void **)(v23 - 8);
        if ( v23 <= v37 + 16 )
          v38 = (void **)(v37 + 8);
        v39 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
        if ( !a1 )
          v39 = 0LL;
        if ( **(_DWORD **)v39 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v39, v38);
      }
      v34 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSplitChild(
              a1,
              a2);
      if ( !v34 )
        return 3221225626LL;
      v35 = *(_DWORD *)v10;
      v9 = (char **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v21 = (unsigned __int64)*(v9 - 1);
      if ( (int)v18 > (unsigned __int16)*(_DWORD *)v10 )
      {
        v36 = v18 - (unsigned __int16)*(_DWORD *)v10;
        *(v9 - 1) = (char *)(v21 + 16);
        v10 = (char *)v34;
        v26 = v36 - 1;
        if ( HIBYTE(v35) )
          v26 = v36;
        goto LABEL_26;
      }
      v21 += 16LL;
LABEL_25:
      v26 = v18;
      goto LABEL_26;
    }
    if ( (v22 & 1) == 0 )
    {
      if ( (int)v18 > v25 )
      {
        v40 = v18 - v25;
        *(v9 - 1) = (char *)v23;
        v10 = (char *)v22;
        v26 = v40 - 1;
        if ( (_BYTE)v24 )
          v26 = v40;
        goto LABEL_26;
      }
      v21 = v23;
      goto LABEL_25;
    }
    v41 = (char *)(v22 & 0xFFFFFFFFFFFFFFFEuLL);
    v26 = v18 + v25 - v11;
    if ( (_BYTE)v24 )
    {
      if ( v26 <= 0 )
      {
        v10 = v41;
        v26 += (unsigned __int16)*(_DWORD *)v41;
        goto LABEL_62;
      }
    }
    else if ( v26 < 0 )
    {
      v10 = v41;
      v26 += (unsigned __int16)*(_DWORD *)v41 + 1;
      goto LABEL_62;
    }
    if ( v10 != v41 )
    {
      v21 = v23;
      goto LABEL_26;
    }
LABEL_62:
    *(v9 - 1) = (char *)v23;
LABEL_26:
    *v9 = v10;
    v27 = v26;
    if ( v10[3] )
    {
      v28 = (void **)(v21 - 8);
      v9[1] = &v10[4 * v27 + 16];
      v29 = (__int64)*(v9 - 2);
      v30 = v29 + 16;
      v31 = (void **)(v29 + 8);
      v32 = v21 <= v30;
      v33 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
      if ( v32 )
        v28 = v31;
      if ( !a1 )
        v33 = 0LL;
      if ( **(_DWORD **)v33 != -1 )
        NP_CONTEXT::NpLeafDerefInternal(v33, v28);
    }
    else
    {
      v9[1] = &v10[16 * v26 + 16];
    }
  }
  v13 = v9[1];
  v14 = *(_DWORD *)v10;
  if ( v10[3] )
  {
    memmove(v13 + 4, v13, (size_t)&v10[4LL * (unsigned __int16)v14 + 16 - (_QWORD)v13]);
    *(_DWORD *)v13 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v13 + 16, v13, (size_t)&v10[16 * ((unsigned __int16)v14 + 1LL) - (_QWORD)v13]);
    *(_OWORD *)v13 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v10;
  return 0LL;
}
