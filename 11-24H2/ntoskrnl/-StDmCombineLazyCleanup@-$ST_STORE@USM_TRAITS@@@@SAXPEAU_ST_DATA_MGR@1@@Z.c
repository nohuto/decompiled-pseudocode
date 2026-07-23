/*
 * XREFs of ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140381820
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037CC80 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037CE90 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140380680 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140380750 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140380DD0 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     SmHpChunkFree @ 0x140380F50 (SmHpChunkFree.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140381180 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140427A94 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorAttachEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUITERATOR@1@PEAU1@@Z @ 0x1404B7BE8 (-BTreeIteratorAttachEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup(__int64 a1)
{
  char v2; // cl
  unsigned int v3; // r13d
  unsigned int v4; // ebp
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // r14d
  __int64 v11; // r8
  __int64 v12; // rcx
  _DWORD *i; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 LeafSibling; // rax
  unsigned int v17; // ebx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_BYTE *)(a1 + 2289);
  v18 = 0LL;
  if ( (v2 & 3) == 1 )
  {
    *(_BYTE *)(a1 + 2289) = v2 & 0xFC | 2;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorAttachEx(
      &v18,
      a1);
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 1448);
    if ( (*(_DWORD *)(a1 + 56) & 1) == 0 )
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (struct NP_CONTEXT **)a1,
        a1 + 24);
    *(_DWORD *)(a1 + 56) |= 1u;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      (struct NP_CONTEXT **)a1,
      v17,
      a1 + 24);
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      (struct NP_CONTEXT **)a1,
      (__int64)&v18,
      a1 + 24);
  }
  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 2280) )
  {
    v5 = v18;
    while ( v5 )
    {
      v6 = *((_QWORD *)&v18 + 1) + 8LL;
      v7 = (unsigned __int16)*(_DWORD *)v5 + 2LL;
      *((_QWORD *)&v18 + 1) = v6;
      if ( v6 >= v5 + 8 * v7 )
      {
        if ( **(_DWORD **)(a1 + 16) == -1 )
        {
          LeafSibling = *(_QWORD *)(v5 + 8);
        }
        else
        {
          LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                          a1,
                          v5);
          if ( LeafSibling == -1 )
          {
            v6 = -1LL;
            goto LABEL_7;
          }
        }
        if ( LeafSibling )
        {
          v6 = LeafSibling + 16;
          *(_QWORD *)&v18 = LeafSibling;
          *((_QWORD *)&v18 + 1) = LeafSibling + 16;
          v5 = LeafSibling;
        }
        else
        {
          v6 = 0LL;
        }
      }
LABEL_7:
      if ( !v6 )
        break;
      if ( v4 >= 0x200 )
      {
        v8 = *(_QWORD *)(a1 + 800);
        v9 = *(_DWORD *)(v8 + 6924);
        if ( *(_BYTE *)(v8 + 6838) )
          v9 >>= 8;
        if ( v9 + *(_DWORD *)(v8 + 7440) + *(_DWORD *)(v8 + 6920) )
        {
LABEL_17:
          *(_DWORD *)(a1 + 1448) = *(_DWORD *)v6;
          goto LABEL_18;
        }
        v5 = v18;
      }
      v10 = *(_DWORD *)(v6 + 4);
      v11 = v10 >> *(_DWORD *)(a1 + 456);
      _BitScanReverse((unsigned int *)&v12, v11);
      for ( i = (_DWORD *)(*(unsigned int *)(a1 + 472)
                         + *(_DWORD *)(a1 + 464) * (v10 & *(_DWORD *)(a1 + 460))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 192 + 8 * v12) + 16 * (v11 ^ (unsigned int)(1 << v12))));
            *i == -1;
            i = (_DWORD *)(*(unsigned int *)(a1 + 472)
                         + *(_DWORD *)(a1 + 464) * (*(_DWORD *)(a1 + 460) & v10)
                         + *(_QWORD *)(*(_QWORD *)(a1 + 192 + 8 * v15) + 16 * (v14 ^ (unsigned int)(1 << v15)))) )
      {
        v10 = i[1];
        ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, (__int64)i);
        SmHpChunkFree(a1 + 192, (unsigned __int64)i);
        --*(_DWORD *)(a1 + 2280);
        v14 = v10 >> *(_DWORD *)(a1 + 456);
        _BitScanReverse((unsigned int *)&v15, v14);
      }
      if ( *(_DWORD *)(v6 + 4) != v10 )
        *(_DWORD *)(v6 + 4) = v10;
      ++v4;
      if ( !*(_DWORD *)(a1 + 2280) )
        goto LABEL_17;
    }
  }
  v3 = 1024;
  *(_BYTE *)(a1 + 2289) = *(_BYTE *)(a1 + 2289) & 0xFC | 1;
LABEL_18:
  if ( *(_DWORD *)(a1 + 2280) <= v3 )
    *(_BYTE *)(a1 + 2289) &= 0xFCu;
  else
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 2296), 5, 0x7530u, 0xFFFFFFFE);
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    (__int64 *)&v18,
    (struct NP_CONTEXT **)a1);
}
