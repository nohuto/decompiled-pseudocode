/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1403991D0
 * Callers:
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140394C64 (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140399A20 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140393EA8 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140394C64 (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1403978A8 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     SmArrayGrow @ 0x1403980C8 (SmArrayGrow.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140466688 (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     memmove @ 0x1406B4940 (memmove.c)
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
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // r8
  unsigned __int64 v22; // r10
  int v23; // ecx
  int v24; // edx
  int v25; // edx
  __int64 v26; // rax
  void **v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  void **v30; // rax
  bool v31; // cc
  struct NP_CONTEXT::NP_CTX *v32; // rcx
  char *v33; // rax
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
    v33 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            (__int64)a1,
            1u,
            1);
    *a1 = (__int64)v33;
    if ( !v33 )
      return 3221225626LL;
    v9 = *(char ***)a2;
    *v9 = v33;
    v9[1] = (char *)(*a1 + 16);
    ++*(_DWORD *)(a2 + 24);
  }
  v10 = *v9;
  v11 = 1020;
  v12 = *(_DWORD *)*v9;
  if ( !(*v9)[3] )
    v11 = 255;
  if ( (unsigned __int16)v12 >= v11 )
  {
    v16 = v9[1] - v10 - 16;
    v17 = v16 >> 2;
    v18 = v16 >> 4;
    if ( !HIBYTE(v12) )
      LODWORD(v17) = v18;
    if ( v10 == (char *)*a1 )
    {
      v22 = 0LL;
      v21 = 0LL;
      v20 = 0LL;
    }
    else
    {
      v19 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2);
      v20 = (unsigned __int64)*(v9 - 1);
      v21 = v19;
      v22 = v20 + 32LL * ((v19 & 1) == 0) - 16;
    }
    v23 = HIBYTE(*(_DWORD *)v10);
    v24 = (unsigned __int16)*(_DWORD *)v10;
    if ( v24 >= v11 )
    {
      if ( v21 && (_BYTE)v23 )
      {
        v37 = (__int64)*(v9 - 2);
        v38 = (void **)(v22 - 8);
        if ( v22 <= v37 + 16 )
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
      v20 = (unsigned __int64)*(v9 - 1);
      if ( (int)v17 > (unsigned __int16)*(_DWORD *)v10 )
      {
        v36 = v17 - (unsigned __int16)*(_DWORD *)v10;
        *(v9 - 1) = (char *)(v20 + 16);
        v10 = (char *)v34;
        v25 = v36 - 1;
        if ( HIBYTE(v35) )
          v25 = v36;
        goto LABEL_24;
      }
      v20 += 16LL;
LABEL_23:
      v25 = v17;
      goto LABEL_24;
    }
    if ( (v21 & 1) == 0 )
    {
      if ( (int)v17 > v24 )
      {
        v40 = v17 - v24;
        *(v9 - 1) = (char *)v22;
        v10 = (char *)v21;
        v25 = v40 - 1;
        if ( (_BYTE)v23 )
          v25 = v40;
        goto LABEL_24;
      }
      v20 = v22;
      goto LABEL_23;
    }
    v41 = (char *)(v21 & 0xFFFFFFFFFFFFFFFEuLL);
    v25 = v17 + v24 - v11;
    if ( (_BYTE)v23 )
    {
      if ( v25 <= 0 )
      {
        v10 = v41;
        v25 += (unsigned __int16)*(_DWORD *)v41;
        goto LABEL_62;
      }
    }
    else if ( v25 < 0 )
    {
      v10 = v41;
      v25 += (unsigned __int16)*(_DWORD *)v41 + 1;
      goto LABEL_62;
    }
    if ( v10 != v41 )
    {
      v20 = v22;
      goto LABEL_24;
    }
LABEL_62:
    *(v9 - 1) = (char *)v22;
LABEL_24:
    *v9 = v10;
    v26 = v25;
    if ( v10[3] )
    {
      v27 = (void **)(v20 - 8);
      v9[1] = &v10[4 * v26 + 16];
      v28 = (__int64)*(v9 - 2);
      v29 = v28 + 16;
      v30 = (void **)(v28 + 8);
      v31 = v20 <= v29;
      v32 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
      if ( v31 )
        v27 = v30;
      if ( !a1 )
        v32 = 0LL;
      if ( **(_DWORD **)v32 != -1 )
        NP_CONTEXT::NpLeafDerefInternal(v32, v27);
    }
    else
    {
      v9[1] = &v10[16 * v25 + 16];
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
