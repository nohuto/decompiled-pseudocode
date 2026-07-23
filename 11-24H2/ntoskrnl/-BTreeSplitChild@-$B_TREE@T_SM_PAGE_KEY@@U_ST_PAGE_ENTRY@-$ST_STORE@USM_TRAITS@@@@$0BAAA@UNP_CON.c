/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140378420
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14037C920 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140378A04 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14037A138 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14037C920 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x140608254 (-NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  int *v10; // r9
  int v11; // eax
  int *v12; // r15
  unsigned int v13; // edx
  unsigned __int64 v14; // r15
  int v15; // eax
  int v16; // ecx
  struct NP_CONTEXT::NP_CTX *v17; // rcx
  union _NP_LEAF_PTR *v18; // rdx
  __int64 v20; // rax
  struct NP_CONTEXT::NP_CTX *v21; // rcx
  __int64 v22; // r15
  union _NP_LEAF_PTR *v23; // rdx
  int v24; // r8d
  __int64 v25; // rcx
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF
  __int16 v27; // [rsp+78h] [rbp+10h]
  __int64 *Src; // [rsp+80h] [rbp+18h]

  v3 = 0LL;
  v5 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  Src = v5;
  v6 = *v5;
  v7 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
         a1,
         *(unsigned __int8 *)(*v5 + 3),
         *(unsigned __int8 *)(*v5 + 2));
  v8 = v7;
  if ( !v7 )
    return v3;
  DWORD1(v26) = 0;
  *((_QWORD *)&v26 + 1) = v7;
  v9 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v10 = (int *)(v6 + 16 + 8 * v9);
    if ( (*(_DWORD *)v6 & 1) != 0 && (unsigned __int64)(v10 + 2) < v5[1] )
    {
      v10 += 2;
      LODWORD(v9) = v9 + 1;
    }
    v11 = *v10;
    v12 = 0LL;
  }
  else
  {
    v10 = 0LL;
    v12 = (int *)(v6 + 16 * (v9 + 1));
    v11 = *v12;
  }
  LODWORD(v26) = v11;
  v13 = (unsigned __int16)*(_DWORD *)v6 - (_DWORD)v9;
  v27 = *(_DWORD *)v6 - v9;
  if ( *(_BYTE *)(v6 + 3) )
  {
    if ( **(_DWORD **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL)) == -1 )
      *(_QWORD *)(v8 + 8) = *(_QWORD *)(v6 + 8);
    memmove((void *)(v8 + 16), v10, 8LL * v13);
  }
  else
  {
    v27 = v13 - 1;
    memmove((void *)(v8 + 16), v12 + 4, 16LL * (v13 - 1));
    *(_QWORD *)(v8 + 8) = *((_QWORD *)v12 + 1);
  }
  v14 = (unsigned __int64)(a1 + 2);
  *(_WORD *)v8 = v27;
  if ( *a1 == v6 )
  {
    v20 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            0LL,
            (unsigned int)*(unsigned __int8 *)(v6 + 2) + 1);
    v22 = v20;
    if ( v20 )
    {
      v23 = (union _NP_LEAF_PTR *)(v20 + 8);
      v24 = 1;
      *(_QWORD *)(v20 + 8) = v6;
      *(_OWORD *)(v20 + 16) = v26;
      *(_WORD *)v20 = 1;
      *a1 = v20;
      if ( *(_BYTE *)(v6 + 3) && **(_DWORD **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL)) != -1 )
      {
        *(_DWORD *)v23 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v21, v23);
      }
      memmove(Src + 2, Src, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - v24));
      v25 = v22 + 16;
      *Src = v22;
      v14 = (unsigned __int64)(a1 + 2);
      Src[1] = v25;
      v16 = ++*(_DWORD *)(a2 + 24);
      goto LABEL_11;
    }
LABEL_20:
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
      a1,
      v8);
    return v3;
  }
  --*(_DWORD *)(a2 + 24);
  v15 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
          a1,
          a2,
          &v26);
  v16 = ++*(_DWORD *)(a2 + 24);
  if ( v15 < 0 )
    goto LABEL_20;
LABEL_11:
  if ( *(_BYTE *)(v6 + 3) )
  {
    v17 = (struct NP_CONTEXT::NP_CTX *)(2LL * (unsigned int)(v16 - 2));
    v18 = (union _NP_LEAF_PTR *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v17 + 8) + 8LL);
    if ( **(_DWORD **)(v14 & -(__int64)(a1 != 0LL)) != -1 )
    {
      *(_DWORD *)v18 |= 1u;
      NP_CONTEXT::NpGetResidentLeaf(v17, v18);
    }
  }
  *(_WORD *)v6 = v9;
  if ( *(_BYTE *)(v6 + 3) && **(_DWORD **)(v14 & -(__int64)(a1 != 0LL)) == -1 )
    *(_QWORD *)(v6 + 8) = v8;
  return v8;
}
