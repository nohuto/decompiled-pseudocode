/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140378A2C
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403807E0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140378A04 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403807E0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14045A5C8 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140608288 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 *v6; // r9
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  void *v11; // rcx
  size_t v12; // r8
  __int64 v13; // r12
  struct NP_CONTEXT::NP_CTX *v14; // rcx
  struct NP_CONTEXT::NP_CTX *v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx

  v5 = a3;
  v6 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v7 = *(v6 - 1);
  if ( (a3 & 1) != 0 )
    v5 = *v6;
  v8 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  v9 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a3 & 1) == 0 )
  {
    v9 = *v6;
    v8 = a3;
  }
  v10 = (unsigned __int16)*(_DWORD *)v9;
  if ( v9 == v8 )
  {
    v7 -= 16LL;
    *(v6 - 1) = v7;
  }
  if ( *(_BYTE *)(v9 + 3) )
  {
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      *(_QWORD *)(v9 + 8) = *(_QWORD *)(v5 + 8);
    v11 = (void *)(v9 + 16 + 8 * v10);
    v12 = 8LL * (unsigned __int16)*(_DWORD *)v5;
  }
  else
  {
    v17 = 2 * v10;
    LODWORD(v10) = v10 + 1;
    *(_DWORD *)(v9 + 8 * v17 + 16) = *(_DWORD *)v7;
    *(_QWORD *)(v9 + 8 * v17 + 24) = *(_QWORD *)(v5 + 8);
    v12 = 16LL * (unsigned __int16)*(_DWORD *)v5;
    v11 = (void *)(v9 + 16 * ((unsigned int)v10 + 1LL));
  }
  memmove(v11, (const void *)(v5 + 16), v12);
  v13 = a1 + 16;
  *(_WORD *)v9 = *(_WORD *)v5 + v10;
  if ( *(_BYTE *)(v9 + 3) )
  {
    v14 = (struct NP_CONTEXT::NP_CTX *)(v13 & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v14 != -1 )
      NP_CONTEXT::NpLeafDerefInternal(v14, (void **)(v7 + 8));
    v15 = (struct NP_CONTEXT::NP_CTX *)(v13 & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v15 != -1 )
      NP_CONTEXT::NpLeafRemoveInternal(v15, (void **)(v7 + 8));
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
    a1,
    (unsigned __int8 *)v5);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
