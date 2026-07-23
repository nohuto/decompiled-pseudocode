/*
 * XREFs of ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140380A88
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14023016C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140379378 (-BTreeFindLeafSiblingEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037DB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14037ECC0 (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140381180 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140381398 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x140469EF0 (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineRegion(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  _DWORD *Pool2; // rax
  int v6; // ecx
  int v7; // r14d
  int v8; // eax
  _QWORD *v9; // r14
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // r14
  __int64 result; // rax
  _DWORD *LeafSibling; // rax
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  int v19; // [rsp+28h] [rbp-8h]
  _QWORD *v20; // [rsp+70h] [rbp+40h] BYREF

  v2 = *(_QWORD **)(a1 + 1440);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1440) = 0LL;
    Pool2 = v2;
    v20 = v2;
  }
  else
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, 0x1000uLL, 0x74536D73u);
    v20 = Pool2;
    v2 = Pool2;
    if ( !Pool2 )
    {
      result = 3221225626LL;
      goto LABEL_19;
    }
  }
  *Pool2 = a2;
  Pool2[1] = 528384;
  v6 = *(_DWORD *)(a1 + 812);
  v18 = 0LL;
  v7 = *(_DWORD *)(a1 + 808) | (a2 << v6);
  v19 = 0;
  if ( (*(_DWORD *)(a1 + 120) & 1) == 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (struct B_TREE_NODE_HDR **)(a1 + 64),
      a1 + 88);
  *(_DWORD *)(a1 + 120) |= 1u;
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, *(_QWORD *)(a1 + 760));
  **(_DWORD **)(a1 + 760) = v7;
  if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
              a1 + 88,
              a1 + 64,
              *(unsigned int *)(a1 + 768)) < 0 )
    NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  while ( 1 )
  {
    v8 = *(_DWORD *)(a1 + 112);
    if ( !v8 )
      break;
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL * (unsigned int)(v8 - 1));
    v10 = v9[1] - 4LL;
    v11 = *v9 + 16LL;
    v9[1] = v10;
    if ( v10 >= v11 )
      goto LABEL_8;
    v9[1] = v11;
    LeafSibling = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSiblingEx(
                              a1 + 64,
                              a1 + 88,
                              2u);
    if ( !LeafSibling )
      break;
    if ( LeafSibling != (_DWORD *)-1LL )
    {
      v10 = (unsigned __int64)&LeafSibling[(unsigned __int16)*LeafSibling + 3];
      v9[1] = v10;
LABEL_8:
      if ( !v10 )
        break;
      goto LABEL_9;
    }
    v10 = -1LL;
LABEL_9:
    v12 = *(_DWORD *)v10;
    v13 = v12 >> *(_DWORD *)(a1 + 456);
    _BitScanReverse((unsigned int *)&v14, v13);
    v15 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                   + *(_DWORD *)(a1 + 464) * (v12 & *(_DWORD *)(a1 + 460))
                   + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v14 + 192) + 16 * (v13 ^ (unsigned int)(1 << v14))));
    if ( *v15 >> *(_DWORD *)(a1 + 812) != a2 )
      break;
    if ( (v15[1] & 0xFFFFF000) <= 0x1000
      && (unsigned int)ST_STORE<SM_TRAITS>::StDmCombineBufferAddEntry(a1, (unsigned int *)v2, (unsigned int *)&v18, v15) == -2147483643 )
    {
      result = ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(a1, &v20);
      if ( (int)result < 0 )
        goto LABEL_26;
      if ( (*(_DWORD *)(a1 + 120) & 1) == 0 )
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          (struct B_TREE_NODE_HDR **)(a1 + 64),
          a1 + 88);
      *(_DWORD *)(a1 + 120) |= 1u;
      **(_DWORD **)(a1 + 760) = *v15;
      if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
                  a1 + 88,
                  a1 + 64,
                  *(unsigned int *)(a1 + 768)) < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      v2 = v20;
      v18 = 0LL;
      v19 = 0;
      *v20 = 0LL;
      *(_DWORD *)v2 = a2;
      *((_DWORD *)v2 + 1) = 528384;
    }
  }
  if ( v2 + 1 >= (_QWORD *)((char *)v2 + *((unsigned __int16 *)v2 + 3)) )
  {
LABEL_18:
    result = 0LL;
    goto LABEL_19;
  }
  result = ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(a1, &v20);
  if ( (int)result >= 0 )
  {
    v2 = v20;
    goto LABEL_18;
  }
LABEL_26:
  v2 = v20;
LABEL_19:
  if ( v2 )
    *(_QWORD *)(a1 + 1440) = v2;
  return result;
}
