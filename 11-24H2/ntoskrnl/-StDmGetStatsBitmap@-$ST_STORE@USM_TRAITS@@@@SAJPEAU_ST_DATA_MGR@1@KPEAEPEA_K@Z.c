/*
 * XREFs of ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140609E6C
 * Callers:
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140377594 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 * Callees:
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14037A520 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14037B540 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037CE90 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14037D5F0 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037DB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140381180 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140441C88 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmGetStatsBitmap(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r12
  _QWORD *v8; // rbx
  unsigned int v9; // ebp
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 LeafSibling; // rax
  __int64 v14; // r9
  int v15; // r10d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // r8d
  unsigned int v24; // eax
  unsigned int v25; // r8d
  signed int v26; // r10d
  unsigned int v27; // eax
  unsigned __int64 v28; // r8
  char v29; // cl
  __int64 v31[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0LL;
  *(_OWORD *)v31 = 0LL;
  if ( *(_QWORD *)(a1 + 72) )
  {
    if ( (*(_DWORD *)(a1 + 56) & 1) == 0 )
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (struct NP_CONTEXT **)a1,
        a1 + 24);
    *(_DWORD *)(a1 + 56) |= 1u;
    v8 = (_QWORD *)(a1 + 64);
    if ( (*(_DWORD *)(a1 + 120) & 1) == 0 )
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (struct B_TREE_NODE_HDR **)(a1 + 64),
        a1 + 88);
    *(_DWORD *)(a1 + 120) |= 1u;
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, *(_QWORD *)(a1 + 760));
    **(_DWORD **)(a1 + 760) = 0;
    v9 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
           (struct B_TREE_NODE_HDR **)(a1 + 64),
           *(_DWORD *)(a1 + 768),
           a1 + 88);
    if ( v9 != -1073741818 )
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
        (struct B_TREE_NODE_HDR **)(a1 + 64),
        (__int64)v31,
        a1 + 88);
      v10 = v31[1];
      v11 = v31[0];
      while ( 1 )
      {
        if ( !v11 )
          goto LABEL_28;
        v10 += 4LL;
        v12 = (unsigned __int16)*(_DWORD *)v11 + 4LL;
        v31[1] = v10;
        if ( v10 >= v11 + 4 * v12 )
        {
          if ( **(_DWORD **)((a1 + 80) & -(__int64)(a1 != -64)) == -1 )
          {
            LeafSibling = *(_QWORD *)(v11 + 8);
          }
          else
          {
            LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                            (struct B_TREE_NODE_HDR **)(a1 + 64),
                            v11);
            if ( LeafSibling == -1 )
            {
              v14 = -1LL;
              goto LABEL_18;
            }
          }
          if ( !LeafSibling )
          {
            v14 = 0LL;
            goto LABEL_18;
          }
          v10 = LeafSibling + 16;
          v31[0] = LeafSibling;
          v31[1] = LeafSibling + 16;
          v11 = LeafSibling;
        }
        v14 = v10;
LABEL_18:
        if ( !v14 )
          goto LABEL_28;
        if ( v14 == -1 )
        {
          v9 = -1073741818;
          break;
        }
        v15 = 4096;
        v16 = (unsigned int)(*(_DWORD *)(a1 + 464) * (*(_DWORD *)v14 & *(_DWORD *)(a1 + 460)));
        v17 = (unsigned int)(*(_DWORD *)v14 >> *(_DWORD *)(a1 + 456));
        _BitScanReverse((unsigned int *)&v18, v17);
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v18 + 192) + 16 * (v17 ^ (unsigned int)(1 << v18)));
        v20 = 4096LL;
        v21 = v16 + v19;
        v22 = *(unsigned int *)(a1 + 472);
        v23 = *(_DWORD *)(v21 + v22 + 4);
        v24 = *(_DWORD *)(v21 + v22);
        v25 = v23 & 0xFFF;
        if ( v25 )
          v20 = v25;
        v4 += v20;
        if ( v25 )
          v15 = v25;
        v26 = (unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v15) >> 4;
        v27 = v24 / a2;
        if ( v26 )
        {
          do
          {
            v28 = (unsigned __int64)v27 >> 3;
            v29 = v27++ & 7;
            v26 -= a2;
            *(_BYTE *)(v28 + a3) |= 1 << v29;
          }
          while ( v26 > 0 );
        }
      }
    }
  }
  else
  {
LABEL_28:
    *a4 = v4;
    v8 = (_QWORD *)(a1 + 64);
    v9 = 0;
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    v31,
    v8);
  return v9;
}
