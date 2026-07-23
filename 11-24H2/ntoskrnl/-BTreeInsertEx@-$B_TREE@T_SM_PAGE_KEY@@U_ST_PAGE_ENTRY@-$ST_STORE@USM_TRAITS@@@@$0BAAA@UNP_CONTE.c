/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14037C920
 * Callers:
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140378420 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14037BE70 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140378420 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14037A138 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14044DBE4 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14045A5C8 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
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
  char *v25; // r8
  int v26; // edx
  __int64 v27; // rax
  void **v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  void **v31; // rax
  bool v32; // cc
  struct NP_CONTEXT::NP_CTX *v33; // rcx
  char *v34; // rax
  __int64 v35; // rcx
  int v36; // r8d
  __int64 v37; // rcx
  void **v38; // rdx
  struct NP_CONTEXT::NP_CTX *v39; // rcx
  int v40; // r12d
  int v41; // r12d

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
    v34 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            (__int64)a1,
            1u,
            1);
    *a1 = (__int64)v34;
    if ( !v34 )
      return 3221225626LL;
    v9 = *(char ***)a2;
    *v9 = v34;
    v9[1] = (char *)(*a1 + 16);
    ++*(_DWORD *)(a2 + 24);
  }
  v10 = *v9;
  v11 = 255;
  v12 = *(_DWORD *)*v9;
  if ( (*v9)[3] )
    v11 = 510;
  if ( (unsigned __int16)v12 >= v11 )
  {
    v16 = v9[1] - v10 - 16;
    v17 = v16 >> 3;
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
      v19 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
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
      v35 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
              a1,
              a2);
      if ( !v35 )
        return 3221225626LL;
      v36 = *(_DWORD *)v10;
      v9 = (char **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v20 = (unsigned __int64)*(v9 - 1);
      if ( (int)v17 > (unsigned __int16)*(_DWORD *)v10 )
      {
        v40 = v17 - (unsigned __int16)*(_DWORD *)v10;
        *(v9 - 1) = (char *)(v20 + 16);
        v10 = (char *)v35;
        v26 = v40 - 1;
        if ( HIBYTE(v36) )
          v26 = v40;
      }
      else
      {
        v20 += 16LL;
        v26 = v17;
      }
      goto LABEL_25;
    }
    if ( (v21 & 1) == 0 )
    {
      if ( (int)v17 > v24 )
      {
        v41 = v17 - v24;
        *(v9 - 1) = (char *)v22;
        v10 = (char *)v21;
        v26 = v41 - 1;
        if ( (_BYTE)v23 )
          v26 = v41;
      }
      else
      {
        v20 = v22;
        v26 = v17;
      }
      goto LABEL_25;
    }
    v25 = (char *)(v21 & 0xFFFFFFFFFFFFFFFEuLL);
    v26 = v17 + v24 - v11;
    if ( (_BYTE)v23 )
    {
      if ( v26 <= 0 )
      {
        v10 = v25;
        v26 += (unsigned __int16)*(_DWORD *)v25;
        goto LABEL_58;
      }
    }
    else if ( v26 < 0 )
    {
      v10 = v25;
      v26 += (unsigned __int16)*(_DWORD *)v25 + 1;
      goto LABEL_58;
    }
    if ( v10 != v25 )
    {
      v20 = v22;
      goto LABEL_25;
    }
LABEL_58:
    *(v9 - 1) = (char *)v22;
LABEL_25:
    *v9 = v10;
    v27 = v26;
    if ( v10[3] )
    {
      v28 = (void **)(v20 - 8);
      v9[1] = &v10[8 * v27 + 16];
      v29 = (__int64)*(v9 - 2);
      v30 = v29 + 16;
      v31 = (void **)(v29 + 8);
      v32 = v20 <= v30;
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
    memmove(v13 + 8, v13, (size_t)&v10[8LL * (unsigned __int16)v14 + 16 - (_QWORD)v13]);
    *(_QWORD *)v13 = *a3;
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
