/*
 * XREFs of ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140380680
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140381820 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037CC80 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037CE90 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 */

struct B_TREE_NODE_HDR *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        struct NP_CONTEXT **a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // edx
  struct B_TREE_NODE_HDR *result; // rax
  _DWORD **v7; // rcx
  struct NP_CONTEXT *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  void **v11; // r9
  unsigned __int64 v12; // rax
  void **v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // edi
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  void *v19; // rsp
  unsigned int v20; // edx
  void *v21; // rsp
  __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // [rsp+20h] [rbp+0h] BYREF
  __int128 v26; // [rsp+28h] [rbp+8h]
  int v27; // [rsp+38h] [rbp+18h]
  unsigned int v28; // [rsp+3Ch] [rbp+1Ch]
  __int64 v29; // [rsp+40h] [rbp+20h]

  v5 = *(_DWORD *)(a3 + 24);
  if ( v5 == -1 || !v5 )
    result = (struct B_TREE_NODE_HDR *)(a3 + 8);
  else
    result = (struct B_TREE_NODE_HDR *)(*(_QWORD *)a3 + 16LL * (unsigned int)(v5 - 1));
  v7 = (_DWORD **)(a1 + 2);
  *(_OWORD *)a2 = *(_OWORD *)result;
  if ( !a1 )
    v7 = 0LL;
  if ( **v7 != -1 )
  {
    if ( *(_QWORD *)a2 )
    {
      v8 = *a1;
      if ( *(struct NP_CONTEXT **)a2 != *a1 )
      {
        if ( v5 == -1 )
        {
          v14 = *(_QWORD *)result;
          v15 = 0;
          if ( v8 )
            v15 = *((unsigned __int8 *)v8 + 2);
          v16 = 16LL * v15;
          v17 = v16 + 15;
          if ( v16 + 15 < v16 )
            v17 = 0xFFFFFFFFFFFFFF0LL;
          v18 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
          v19 = alloca(v18);
          v20 = *(_DWORD *)(v14 + 16);
          v21 = alloca(v18);
          v29 = 1LL;
          v27 = 0;
          v28 = v15;
          v26 = 0LL;
          v25 = (__int64)&v25;
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
            a1,
            v20,
            (__int64)&v25);
          v22 = 2LL * (v15 - 2);
          v23 = *(&v25 + 2 * v15 - 3);
          v24 = *(&v25 + v22);
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
            a1,
            (__int64)&v25);
          v11 = (void **)(v23 - 8);
          if ( v23 <= v24 + 16 )
            v11 = (void **)(v24 + 8);
        }
        else
        {
          v9 = *((_QWORD *)result - 1);
          v10 = *((_QWORD *)result - 2);
          v11 = (void **)(v9 - 8);
          v12 = v10 + 16;
          v13 = (void **)(v10 + 8);
          if ( v9 <= v12 )
            v11 = v13;
        }
        result = a1[2];
        if ( *(_DWORD *)result != -1 )
          result = NP_CONTEXT::NpLeafRefInternal(a1 + 2, v11, 3);
      }
    }
  }
  *(_QWORD *)(a2 + 8) -= 8LL;
  return result;
}
