/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037CC80
 * Callers:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037CE90 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140380680 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140380750 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140381820 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140427A94 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14060A0A8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x14060ACE0 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037CE90 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        struct NP_CONTEXT **a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v6; // rdx
  int v7; // ebp
  unsigned int v8; // ecx
  _QWORD *v9; // rdi
  struct B_TREE_NODE_HDR *v10; // r10
  unsigned int v11; // edx
  unsigned int v12; // eax
  void **v13; // rcx
  _DWORD *v14; // r8

  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
    a1,
    a3);
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v7 = 0;
    v9 = (_QWORD *)(a3 + 8);
  }
  else
  {
    v7 = 1;
    if ( *a1 )
      v8 = *((unsigned __int8 *)*a1 + 2);
    else
      v8 = 0;
    if ( *(_DWORD *)(a3 + 28) < v8 && !(unsigned int)SmArrayGrow(v8, v6, (unsigned int *)(a3 + 28), (const void **)a3) )
      return 3221225626LL;
    v9 = *(_QWORD **)a3;
  }
  v10 = *a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v11 = -1;
      v12 = (unsigned __int16)*(_DWORD *)v10;
      if ( HIBYTE(*(_DWORD *)v10) )
      {
        if ( (unsigned __int16)*(_DWORD *)v10 )
        {
          do
          {
            if ( *((_DWORD *)v10 + 2 * ((v12 + v11) >> 1) + 4) < a2 )
              v11 = (v12 + v11) >> 1;
            else
              v12 = (v12 + v11) >> 1;
          }
          while ( v11 + 1 != v12 );
        }
      }
      else if ( (unsigned __int16)*(_DWORD *)v10 )
      {
        do
        {
          if ( *((_DWORD *)v10 + 4 * ((v12 + v11) >> 1) + 4) > a2 )
            v12 = (v12 + v11) >> 1;
          else
            v11 = (v12 + v11) >> 1;
        }
        while ( v11 + 1 != v12 );
      }
      if ( *((_BYTE *)v10 + 3) )
        break;
      if ( v7 )
      {
        *v9 = v10;
        v9[1] = (char *)v10 + 16 * v12 + 16;
        v9 += 2;
      }
      if ( v12 )
        v13 = (void **)((char *)v10 + 16 * v12 + 8);
      else
        v13 = (void **)((char *)v10 + 8);
      if ( *(_DWORD *)a1[2] == -1 || *((_BYTE *)v10 + 2) != 2 )
      {
        v10 = (struct B_TREE_NODE_HDR *)*v13;
      }
      else
      {
        v10 = NP_CONTEXT::NpLeafRefInternal(a1 + 2, v13, 2 * (*(_BYTE *)(a3 + 32) & 1u));
        if ( !v10 )
          return 3221225478LL;
      }
    }
    *v9 = v10;
    v14 = (_DWORD *)((char *)v10 + 8 * v12 + 16);
    v9[1] = v14;
    if ( v7 )
      *(_DWORD *)(a3 + 24) = (((__int64)v9 - *(_QWORD *)a3) >> 4) + 1;
    if ( v12 < (unsigned __int16)*(_DWORD *)v10 && *v14 == a2 )
      return 0LL;
  }
  else if ( !v7 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
  }
  return 3221226021LL;
}
