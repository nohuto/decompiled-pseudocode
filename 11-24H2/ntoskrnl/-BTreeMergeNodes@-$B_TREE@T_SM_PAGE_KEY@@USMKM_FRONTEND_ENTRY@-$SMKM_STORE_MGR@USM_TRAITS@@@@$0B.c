/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1402E7260
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8290 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8290 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  _QWORD *v6; // rbx
  void **v8; // rdx
  int v9; // r8d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  _DWORD *v13; // rax
  size_t v14; // r8
  void *v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx

  v6 = (_QWORD *)a3;
  v8 = (void **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v9 = a3 & 1;
  if ( v9 )
    v6 = *v8;
  v10 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  v11 = v10;
  if ( !v9 )
  {
    v11 = (unsigned __int64)*v8;
    v10 = a3;
  }
  v12 = (unsigned __int16)*(_DWORD *)v11;
  v13 = *(v8 - 1);
  if ( v11 == v10 )
  {
    v13 -= 4;
    *(v8 - 1) = v13;
  }
  if ( *(_BYTE *)(v11 + 3) )
  {
    *(_QWORD *)(v11 + 8) = v6[1];
    v14 = 8LL * (unsigned __int16)*(_DWORD *)v6;
    v15 = (void *)(v11 + 8 * (v12 + 2));
  }
  else
  {
    v17 = 2 * v12;
    LODWORD(v12) = v12 + 1;
    *(_DWORD *)(v11 + 8 * v17 + 16) = *v13;
    *(_QWORD *)(v11 + 8 * v17 + 24) = v6[1];
    v14 = 16LL * (unsigned __int16)*(_DWORD *)v6;
    v15 = (void *)(v11 + 16 * ((unsigned int)v12 + 1LL));
  }
  memmove(v15, v6 + 2, v14);
  *(_WORD *)v11 = *(_WORD *)v6 + v12;
  ExFreePoolWithTag(v6, 0);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
