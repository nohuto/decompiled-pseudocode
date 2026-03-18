/*
 * XREFs of ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140387A58
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140387148 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14037FA38 (-BTreeFindLeafSiblingEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140383CB0 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403841F0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x140384710 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140387490 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140387840 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140399A30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14039C2BC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x14046F714 (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v4; // rcx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edi
  __int64 v9; // r14
  struct B_TREE_NODE_HDR **v10; // r12
  unsigned __int64 v11; // rdi
  int v12; // esi
  unsigned __int64 v13; // r13
  int v14; // eax
  _QWORD *v15; // rsi
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // rsi
  PVOID *v22; // rax
  _DWORD *v23; // rax
  int v24; // r10d
  unsigned int v25; // r11d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r14
  char v29; // al
  unsigned int v30; // ecx
  __int64 v32; // rcx
  _DWORD *LeafSibling; // rax
  PVOID P[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v35; // [rsp+30h] [rbp-50h]
  __int64 v36; // [rsp+40h] [rbp-40h]
  _QWORD v37[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v38; // [rsp+58h] [rbp-28h]
  __int128 v39; // [rsp+68h] [rbp-18h]
  __int64 v40; // [rsp+78h] [rbp-8h]
  __int64 v41; // [rsp+B0h] [rbp+30h]
  unsigned int v42; // [rsp+B0h] [rbp+30h]

  v2 = a1 + 88;
  v36 = 0LL;
  v4 = *(_QWORD *)(a1 + 800);
  v6 = *a2;
  v35 = 0LL;
  DWORD2(v35) = -1;
  LODWORD(v36) = 1;
  *(_OWORD *)P = 0LL;
  if ( (*(_BYTE *)(v4 + 6837) & 4) != 0 )
  {
    v40 = 0LL;
    v37[1] = v6;
    v38 = 0LL;
    v37[0] = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback;
    v39 = 0LL;
    v7 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(v4, 5LL, v37);
    v8 = v7;
    if ( v7 )
    {
      if ( v7 == -1073741536 )
      {
        *a2 = 0LL;
        goto LABEL_42;
      }
    }
    else
    {
      v8 = v40;
    }
  }
  else
  {
    v8 = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(v4 + 7040, v6, 0LL);
  }
  if ( v8 < 0 )
  {
LABEL_42:
    v10 = (struct B_TREE_NODE_HDR **)(a1 + 64);
    goto LABEL_29;
  }
  v9 = *a2;
  v10 = (struct B_TREE_NODE_HDR **)(a1 + 64);
  v11 = v9 + 8;
  v12 = (*(_DWORD *)(v9 + 8) >> 4) | (*(_DWORD *)v9 << *(_DWORD *)(a1 + 812));
  if ( (*(_DWORD *)(v2 + 32) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (struct B_TREE_NODE_HDR **)(a1 + 64),
      v2);
  *(_DWORD *)(v2 + 32) &= ~1u;
  **(_DWORD **)(a1 + 760) = v12;
  if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
              v2,
              a1 + 64,
              *(unsigned int *)(a1 + 768)) < 0 )
    NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  v13 = v9 + *(unsigned __int16 *)(v9 + 6);
  while ( v11 < v13 )
  {
    if ( *(_BYTE *)(v11 + 7) >= 0x10u )
      goto LABEL_23;
    *(_DWORD *)v11 >>= 4;
    do
    {
      v14 = *(_DWORD *)(v2 + 24);
      if ( !v14 )
        goto LABEL_27;
      v15 = (_QWORD *)(*(_QWORD *)v2 + 16LL * (unsigned int)(v14 - 1));
      v16 = v15[1] - 4LL;
      v17 = *v15 + 16LL;
      v15[1] = v16;
      if ( v16 >= v17 )
        goto LABEL_11;
      v15[1] = v17;
      LeafSibling = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSiblingEx(
                                a1 + 64,
                                v2,
                                2u);
      if ( LeafSibling )
      {
        if ( LeafSibling == (_DWORD *)-1LL )
        {
          v16 = -1LL;
        }
        else
        {
          v16 = (unsigned __int64)&LeafSibling[(unsigned __int16)*LeafSibling + 3];
          v15[1] = v16;
        }
      }
      else
      {
LABEL_27:
        v16 = 0LL;
      }
LABEL_11:
      v18 = *(_DWORD *)v16;
      v19 = v18 >> *(_DWORD *)(a1 + 456);
      _BitScanReverse((unsigned int *)&v20, v19);
      v21 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                     + *(_DWORD *)(a1 + 464) * (v18 & *(_DWORD *)(a1 + 460))
                     + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v20 + 192) + 16 * (v19 ^ (unsigned int)(1 << v20))));
    }
    while ( (*(_DWORD *)(a1 + 808) & *v21) != *(_DWORD *)v11 );
    if ( (v21[1] & 0xFFFFF000) <= 0x1000 )
    {
      **(_DWORD **)(a1 + 760) = (*(_DWORD *)(v11 + 8LL * *(unsigned __int8 *)(v11 + 7) + 12) >> 4) | (*(_DWORD *)(v11 + 8LL * *(unsigned __int8 *)(v11 + 7) + 8) << *(_DWORD *)(a1 + 812));
      if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                  (struct B_TREE_NODE_HDR **)(a1 + 64),
                  *(_DWORD *)(a1 + 768),
                  (__int64)P) >= 0 )
      {
        v22 = DWORD2(v35) == -1 || !DWORD2(v35) ? &P[1] : (PVOID *)((char *)P[0] + 16 * (unsigned int)(DWORD2(v35) - 1));
        v23 = v22[1];
        v24 = *(_DWORD *)(a1 + 456);
        v25 = *(_DWORD *)(a1 + 464);
        v41 = *(unsigned int *)(a1 + 472);
        v26 = (unsigned int)(*v23 >> v24);
        _BitScanReverse((unsigned int *)&v27, v26);
        v28 = v41
            + v25 * (*v23 & *(_DWORD *)(a1 + 460))
            + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v27 + 192) + 16 * (v26 ^ (unsigned int)(1 << v27)));
        if ( (*(_DWORD *)(v28 + 4) & 0xFFFFF000) != 0xFFFFF000 )
        {
          if ( (v21[1] & 0xFFFFF000) != 0x1000 )
            NT_ASSERT("SourcePageRecord->RefCount == 1");
          v42 = (*(_DWORD *)((v28 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << v24)
              + ((_DWORD)v28 - (_DWORD)v41 - ((unsigned int)v28 & 0xFFFFF000)) / v25;
          ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, (__int64)v21);
          ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v28);
          if ( (int)ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, (unsigned __int64)v21, v2) < 0 )
            NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
          *v21 = -1;
          v21[1] = v42;
          v29 = *(_BYTE *)(a1 + 2289);
          v30 = *(_DWORD *)(a1 + 2280) + 1;
          *(_DWORD *)(a1 + 2280) = v30;
          if ( (v29 & 3) == 0 && v30 > 0x400 )
          {
            v32 = *(_QWORD *)(a1 + 2296);
            *(_BYTE *)(a1 + 2289) = v29 & 0xFC | 1;
            ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(v32, 5, 0x7530u, 0xFFFFFFFE);
          }
          if ( (*(_DWORD *)(v28 + 4) & 0xFFFFF000) >= 0xFFFFF000 )
            NT_ASSERT("TargetPageRecord->RefCount < ((1 << 20) - 1)");
          *(_DWORD *)(v28 + 4) = (*(_DWORD *)(v28 + 4) + 4096) ^ ((unsigned __int16)*(_DWORD *)(v28 + 4) ^ (unsigned __int16)(*(_DWORD *)(v28 + 4) + 4096)) & 0xFFF;
        }
      }
    }
LABEL_23:
    v11 += 8LL * *(unsigned __int8 *)(v11 + 6) + 8;
  }
  v8 = 0;
LABEL_29:
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    v10,
    (__int64)P);
  if ( DWORD2(v35) != -1 && P[0] )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)v8;
}
