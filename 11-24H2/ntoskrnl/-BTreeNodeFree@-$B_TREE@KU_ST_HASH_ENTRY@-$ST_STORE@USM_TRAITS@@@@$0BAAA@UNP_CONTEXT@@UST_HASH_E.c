/*
 * XREFs of ?BTreeNodeFree@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1404AC190
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14037EFFC (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1404AC190 (-BTreeNodeFree@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 * Callees:
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14037ECE4 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1404AC190 (-BTreeNodeFree@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeNodeFree(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  unsigned __int8 *v7; // rdx
  unsigned __int8 *v8; // rdi
  unsigned __int8 *v9; // rsi
  unsigned __int64 *v10; // r15
  unsigned __int8 *v11; // r8
  _DWORD **v12; // r12
  _DWORD *v13; // r13
  unsigned __int64 *v14; // rbp
  unsigned __int64 v15; // rbp
  __int64 *v16; // r15
  __int64 v17; // rdx
  unsigned __int8 *v18; // [rsp+58h] [rbp+10h]

  if ( !a2[3] )
  {
    v6 = *(_DWORD *)a2;
    v7 = a2 + 16;
    v8 = v7;
    v9 = &v7[16 * (unsigned __int16)v6];
    if ( v7 <= v9 )
    {
      v10 = (unsigned __int64 *)(v7 - 8);
      v18 = v7 - 8;
      v11 = a2 + 8;
      v12 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
      do
      {
        v13 = *v12;
        v14 = v10;
        if ( v8 <= v7 )
          v14 = (unsigned __int64 *)v11;
        if ( *v13 == -1 || a2[2] != 2 )
        {
          v15 = *v14;
        }
        else if ( (*(_DWORD *)v14 & 1) != 0 )
        {
          v15 = *v14 & 0xFFFFFFFFFFFFF000uLL;
          v16 = (__int64 *)((v15 + 11) & 0xFFFFFFFFFFFFFFF8uLL);
          v17 = *v16;
          if ( *v16 && (v17 & 2) == 0 )
          {
            guard_dispatch_icall_no_overrides(v12, v17, v11, a4);
            *(_DWORD *)v16 |= 2u;
            --v13[12];
          }
          v10 = (unsigned __int64 *)v18;
        }
        else
        {
          --v13[11];
          guard_dispatch_icall_no_overrides(v12, *v14, v11, a4);
          v15 = 0LL;
        }
        if ( v15 )
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeNodeFree(a1);
        v10 += 2;
        v7 = a2 + 16;
        v8 += 16;
        v18 = (unsigned __int8 *)v10;
        v11 = a2 + 8;
      }
      while ( v8 <= v9 );
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
    a1,
    a2);
}
