/*
 * XREFs of ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x1406000B4
 * Callers:
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1405FFF10 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 * Callees:
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140396E60 (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14039B1A0 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14039B6F0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionGetKeys(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v9; // rdi
  _DWORD *v11; // rbx
  int v12; // ebp
  __int64 result; // rax
  int v14; // eax
  __int64 v15; // rax
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int *PreviousEntry; // rax
  unsigned int v20; // r10d
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // r11
  __int64 v26; // r8
  unsigned int v27; // r9d
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // ecx
  __int64 v31; // r8
  _DWORD *v33; // [rsp+78h] [rbp+30h]

  v9 = *(_QWORD *)(a2 + 8);
  v11 = a6;
  v33 = &a6[*a7];
  v12 = (a5 - 1) | (a3 << *(_DWORD *)(a1 + 812));
  if ( (*(_DWORD *)(v9 + 32) & 1) == 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (struct B_TREE_NODE_HDR **)(a1 + 64),
      v9);
  *(_DWORD *)(v9 + 32) |= 1u;
  **(_DWORD **)(a1 + 760) = v12;
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
             (struct B_TREE_NODE_HDR **)(a1 + 64),
             *(_DWORD *)(a1 + 768),
             v9);
  if ( (_DWORD)result != -1073741818 )
  {
    if ( !(_DWORD)result )
    {
      v14 = *(_DWORD *)(v9 + 24);
      if ( v14 == -1 || !v14 )
        v15 = v9 + 8;
      else
        v15 = *(_QWORD *)v9 + 16LL * (unsigned int)(v14 - 1);
      v11 = a6 + 1;
      v16 = *(_DWORD **)(v15 + 8);
      v17 = (unsigned int)(*v16 >> *(_DWORD *)(a1 + 456));
      _BitScanReverse((unsigned int *)&v18, v17);
      *a6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v18 + 192) + 16 * (v17 ^ (unsigned int)(1 << v18)))
                      + (unsigned int)(*(_DWORD *)(a1 + 464) * (*v16 & *(_DWORD *)(a1 + 460)))
                      + *(unsigned int *)(a1 + 472)
                      + 8LL);
    }
    while ( 1 )
    {
      if ( v11 >= v33 )
        goto LABEL_16;
      PreviousEntry = (unsigned int *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                                        a1 + 64,
                                        v9);
      if ( PreviousEntry == (unsigned int *)-1LL )
        return 3221225478LL;
      if ( !PreviousEntry )
        goto LABEL_16;
      v20 = *PreviousEntry;
      v21 = *(unsigned int *)(a1 + 472);
      v22 = *(_DWORD *)(a1 + 464) * (*PreviousEntry & *(_DWORD *)(a1 + 460));
      v23 = v20 >> *(_DWORD *)(a1 + 456);
      _BitScanReverse((unsigned int *)&v24, v23);
      v25 = (unsigned int)v22;
      v26 = v21 + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v24 + 192) + 16 * (v23 ^ (unsigned int)(1 << v24)));
      LODWORD(v22) = *(_DWORD *)(v26 + v22);
      v27 = v22 & *(_DWORD *)(a1 + 808);
      if ( (unsigned int)v22 >> *(_DWORD *)(a1 + 812) != a3 )
        goto LABEL_16;
      if ( v27 < a4 )
      {
        _BitScanReverse((unsigned int *)&v28, v23);
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v28 + 192) + 16 * (v23 ^ (unsigned int)(1 << v28)));
        v30 = 4096;
        v31 = v25 + v29;
        if ( (*(_DWORD *)(v31 + v21 + 4) & 0xFFF) != 0 )
          v30 = *(_DWORD *)(v31 + v21 + 4) & 0xFFF;
        if ( v27 + ((unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v30) >> 4) > a4 )
          *v11++ = *(_DWORD *)(v31 + v21 + 8);
LABEL_16:
        *a7 = v11 - a6;
        return 0LL;
      }
      *v11++ = *(_DWORD *)(v26 + v25 + 8);
      if ( v27 == a4 )
        goto LABEL_16;
    }
  }
  return result;
}
