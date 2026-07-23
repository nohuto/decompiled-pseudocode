/*
 * XREFs of ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x1402E8200
 * Callers:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140377A60 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14060C9CC (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8290 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402E84A0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rsi
  int v5; // ecx
  __int64 v6; // rax
  _QWORD *v8; // r14
  __int64 v9; // rdx
  __int128 v11; // xmm0
  int v12; // eax

  v3 = a1 + 448;
  v5 = *(_DWORD *)(a2 + 24);
  v6 = a2 + 8;
  v8 = (_QWORD *)(a2 + 8);
  if ( v5 != -1 && v5 )
    v6 = *(_QWORD *)a2 + 16LL * (unsigned int)(v5 - 1);
  v9 = *a3;
  if ( *(_QWORD *)v6 == *a3 )
  {
    *(_QWORD *)(v6 + 8) = a3[1];
  }
  else if ( v5 == -1 )
  {
    v11 = *(_OWORD *)a3;
    *v8 = 0LL;
    *(_OWORD *)v6 = v11;
  }
  else
  {
    *(_DWORD *)(a2 + 24) = 0;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      v3,
      *(unsigned int *)(v9 + 16),
      a2);
    v12 = *(_DWORD *)(a2 + 24);
    if ( v12 != -1 && v12 )
      v8 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v12 - 1));
    v8[1] = a3[1];
  }
  return B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
           v3,
           a2);
}
