/*
 * XREFs of ?BTreeNodeFree@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140376C34
 * Callers:
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140376C34 (-BTreeNodeFree@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140378D1C (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140376C34 (-BTreeNodeFree@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140378A04 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeNodeFree(
        __int64 a1,
        int *a2)
{
  int v5; // eax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 *v9; // r15
  unsigned __int64 *v10; // r8
  _DWORD **v11; // r12
  _DWORD *v12; // r13
  unsigned __int64 *v13; // rbp
  unsigned __int64 v14; // rbp
  __int64 *v15; // r15
  __int64 v16; // rdx
  unsigned __int64 *v17; // [rsp+58h] [rbp+10h]

  if ( !*((_BYTE *)a2 + 3) )
  {
    v5 = *a2;
    v6 = (unsigned __int64)(a2 + 4);
    v7 = v6;
    v8 = v6 + 16LL * (unsigned __int16)v5;
    if ( v6 <= v8 )
    {
      v9 = (unsigned __int64 *)(v6 - 8);
      v17 = (unsigned __int64 *)(v6 - 8);
      v10 = (unsigned __int64 *)(a2 + 2);
      v11 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
      do
      {
        v12 = *v11;
        v13 = v9;
        if ( v7 <= v6 )
          v13 = v10;
        if ( *v12 == -1 || *((_BYTE *)a2 + 2) != 2 )
        {
          v14 = *v13;
        }
        else if ( (*(_DWORD *)v13 & 1) != 0 )
        {
          v14 = *v13 & 0xFFFFFFFFFFFFF000uLL;
          v15 = (__int64 *)((v14 + 11) & 0xFFFFFFFFFFFFFFF8uLL);
          v16 = *v15;
          if ( *v15 && (v16 & 2) == 0 )
          {
            guard_dispatch_icall_no_overrides(v11, v16);
            *(_DWORD *)v15 |= 2u;
            --v12[12];
          }
          v9 = v17;
        }
        else
        {
          --v12[11];
          guard_dispatch_icall_no_overrides(v11, *v13);
          v14 = 0LL;
        }
        if ( v14 )
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeNodeFree(
            a1,
            v14,
            v10);
        v9 += 2;
        v6 = (unsigned __int64)(a2 + 4);
        v7 += 16LL;
        v17 = v9;
        v10 = (unsigned __int64 *)(a2 + 2);
      }
      while ( v7 <= v8 );
    }
  }
  return B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
           a1,
           a2);
}
