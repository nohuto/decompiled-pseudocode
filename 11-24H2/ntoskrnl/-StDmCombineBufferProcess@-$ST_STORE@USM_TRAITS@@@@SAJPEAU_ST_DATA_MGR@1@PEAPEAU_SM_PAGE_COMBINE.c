/*
 * XREFs of ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140381398
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140380A88 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1402F6D30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1402F95BC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140379378 (-BTreeFindLeafSiblingEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14037D5F0 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037DB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14037E050 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140380DD0 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140381180 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x140469EF0 (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(__int64 a1, unsigned __int16 **a2, __int64 a3, int a4)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  unsigned __int16 *v8; // rdx
  int v9; // eax
  int v10; // edi
  unsigned __int16 *v11; // r14
  struct B_TREE_NODE_HDR **v12; // r12
  unsigned __int16 *v13; // rdi
  int v14; // esi
  unsigned __int16 *v15; // r13
  int v16; // eax
  _QWORD *v17; // rsi
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rax
  unsigned int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rsi
  PVOID *v24; // rax
  _DWORD *v25; // rax
  int v26; // r10d
  unsigned int v27; // r11d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r14
  char v31; // al
  unsigned int v32; // ecx
  __int64 v34; // rcx
  _DWORD *LeafSibling; // rax
  PVOID P[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v37; // [rsp+30h] [rbp-50h]
  __int64 v38; // [rsp+40h] [rbp-40h]
  _QWORD v39[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v40; // [rsp+58h] [rbp-28h]
  __int128 v41; // [rsp+68h] [rbp-18h]
  __int64 v42; // [rsp+78h] [rbp-8h]
  __int64 v43; // [rsp+B0h] [rbp+30h]
  unsigned int v44; // [rsp+B0h] [rbp+30h]

  v4 = a1 + 88;
  v38 = 0LL;
  v6 = *(_QWORD *)(a1 + 800);
  v8 = *a2;
  v37 = 0LL;
  DWORD2(v37) = -1;
  LODWORD(v38) = 1;
  *(_OWORD *)P = 0LL;
  if ( (*(_BYTE *)(v6 + 6837) & 4) != 0 )
  {
    v42 = 0LL;
    v39[1] = v8;
    v40 = 0LL;
    v39[0] = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback;
    v41 = 0LL;
    v9 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(v6, 5, (__int64)v39, 0xCu);
    v10 = v9;
    if ( v9 )
    {
      if ( v9 == -1073741536 )
      {
        *a2 = 0LL;
        goto LABEL_42;
      }
    }
    else
    {
      v10 = v42;
    }
  }
  else
  {
    v10 = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(v6 + 7040, v8, 0, a4);
  }
  if ( v10 < 0 )
  {
LABEL_42:
    v12 = (struct B_TREE_NODE_HDR **)(a1 + 64);
    goto LABEL_29;
  }
  v11 = *a2;
  v12 = (struct B_TREE_NODE_HDR **)(a1 + 64);
  v13 = v11 + 4;
  v14 = (*((_DWORD *)v11 + 2) >> 4) | (*(_DWORD *)v11 << *(_DWORD *)(a1 + 812));
  if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (struct B_TREE_NODE_HDR **)(a1 + 64),
      v4);
  *(_DWORD *)(v4 + 32) &= ~1u;
  **(_DWORD **)(a1 + 760) = v14;
  if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
              v4,
              a1 + 64,
              *(unsigned int *)(a1 + 768)) < 0 )
    NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  v15 = (unsigned __int16 *)((char *)v11 + v11[3]);
  while ( v13 < v15 )
  {
    if ( *((_BYTE *)v13 + 7) >= 0x10u )
      goto LABEL_23;
    *(_DWORD *)v13 >>= 4;
    do
    {
      v16 = *(_DWORD *)(v4 + 24);
      if ( !v16 )
        goto LABEL_27;
      v17 = (_QWORD *)(*(_QWORD *)v4 + 16LL * (unsigned int)(v16 - 1));
      v18 = v17[1] - 4LL;
      v19 = *v17 + 16LL;
      v17[1] = v18;
      if ( v18 >= v19 )
        goto LABEL_11;
      v17[1] = v19;
      LeafSibling = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSiblingEx(
                                a1 + 64,
                                v4,
                                2u);
      if ( LeafSibling )
      {
        if ( LeafSibling == (_DWORD *)-1LL )
        {
          v18 = -1LL;
        }
        else
        {
          v18 = (unsigned __int64)&LeafSibling[(unsigned __int16)*LeafSibling + 3];
          v17[1] = v18;
        }
      }
      else
      {
LABEL_27:
        v18 = 0LL;
      }
LABEL_11:
      v20 = *(_DWORD *)v18;
      v21 = v20 >> *(_DWORD *)(a1 + 456);
      _BitScanReverse((unsigned int *)&v22, v21);
      v23 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                     + *(_DWORD *)(a1 + 464) * (v20 & *(_DWORD *)(a1 + 460))
                     + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v22 + 192) + 16 * (v21 ^ (unsigned int)(1 << v22))));
    }
    while ( (*(_DWORD *)(a1 + 808) & *v23) != *(_DWORD *)v13 );
    if ( (v23[1] & 0xFFFFF000) <= 0x1000 )
    {
      **(_DWORD **)(a1 + 760) = (*(_DWORD *)&v13[4 * *((unsigned __int8 *)v13 + 7) + 6] >> 4) | (*(_DWORD *)&v13[4 * *((unsigned __int8 *)v13 + 7) + 4] << *(_DWORD *)(a1 + 812));
      if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                  (struct B_TREE_NODE_HDR **)(a1 + 64),
                  *(_DWORD *)(a1 + 768),
                  (__int64)P) >= 0 )
      {
        v24 = DWORD2(v37) == -1 || !DWORD2(v37) ? &P[1] : (PVOID *)((char *)P[0] + 16 * (unsigned int)(DWORD2(v37) - 1));
        v25 = v24[1];
        v26 = *(_DWORD *)(a1 + 456);
        v27 = *(_DWORD *)(a1 + 464);
        v43 = *(unsigned int *)(a1 + 472);
        v28 = (unsigned int)(*v25 >> v26);
        _BitScanReverse((unsigned int *)&v29, v28);
        v30 = v43
            + v27 * (*v25 & *(_DWORD *)(a1 + 460))
            + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v29 + 192) + 16 * (v28 ^ (unsigned int)(1 << v29)));
        if ( (*(_DWORD *)(v30 + 4) & 0xFFFFF000) != 0xFFFFF000 )
        {
          if ( (v23[1] & 0xFFFFF000) != 0x1000 )
            NT_ASSERT("SourcePageRecord->RefCount == 1");
          v44 = (*(_DWORD *)((v30 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << v26)
              + ((_DWORD)v30 - (_DWORD)v43 - ((unsigned int)v30 & 0xFFFFF000)) / v27;
          ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, (__int64)v23);
          ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v30);
          if ( (int)ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, (unsigned __int64)v23, v4) < 0 )
            NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
          *v23 = -1;
          v23[1] = v44;
          v31 = *(_BYTE *)(a1 + 2289);
          v32 = *(_DWORD *)(a1 + 2280) + 1;
          *(_DWORD *)(a1 + 2280) = v32;
          if ( (v31 & 3) == 0 && v32 > 0x400 )
          {
            v34 = *(_QWORD *)(a1 + 2296);
            *(_BYTE *)(a1 + 2289) = v31 & 0xFC | 1;
            ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(v34, 5, 0x7530u, 0xFFFFFFFE);
          }
          if ( (*(_DWORD *)(v30 + 4) & 0xFFFFF000) >= 0xFFFFF000 )
            NT_ASSERT("TargetPageRecord->RefCount < ((1 << 20) - 1)");
          *(_DWORD *)(v30 + 4) = (*(_DWORD *)(v30 + 4) + 4096) ^ ((unsigned __int16)*(_DWORD *)(v30 + 4) ^ (unsigned __int16)(*(_DWORD *)(v30 + 4) + 4096)) & 0xFFF;
        }
      }
    }
LABEL_23:
    v13 += 4 * *((unsigned __int8 *)v13 + 6) + 4;
  }
  v10 = 0;
LABEL_29:
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    v12,
    (__int64)P);
  if ( DWORD2(v37) != -1 && P[0] )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)v10;
}
