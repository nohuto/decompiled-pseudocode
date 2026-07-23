/*
 * XREFs of ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140378D1C
 * Callers:
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140377FF4 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1404F76EC (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 * Callees:
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x1402F52D0 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140376C34 (-BTreeNodeFree@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140377BF0 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140378C04 (-BTreeNodeFree@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?StStagingRegionCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@@Z @ 0x140379084 (-StStagingRegionCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1403790B8 (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1403790FC (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z @ 0x14037913C (-NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z.c)
 *     SmHpChunkHeapCleanup @ 0x140379190 (SmHpChunkHeapCleanup.c)
 *     SmHpChunkHeapProtect @ 0x140379518 (SmHpChunkHeapProtect.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037D4F0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     SmHpChunkFree @ 0x140380F50 (SmHpChunkFree.c)
 *     SmHpChunkHeapInitialize @ 0x140454824 (SmHpChunkHeapInitialize.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14048FB20 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmCleanup(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdx
  PVOID *v6; // r15
  int **v7; // rbx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int16 v16; // r8
  __int64 v17; // r14
  unsigned int *v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 + 192;
  SmHpChunkHeapProtect(a1 + 192, 1LL, 0LL);
  v5 = *(_QWORD *)(a1 + 760);
  if ( v5 )
  {
    SmHpChunkFree(v2, v5);
    if ( a2 )
    {
      *(_QWORD *)(a1 + 760) = 0LL;
      *(_DWORD *)(a1 + 768) = 0;
    }
  }
  v21 = *(_QWORD *)(a1 + 464);
  SmHpChunkHeapCleanup(v2);
  if ( a2 )
    SmHpChunkHeapInitialize(v2, &v21);
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultCleanup(
    a1,
    a1 + 24,
    a2);
  if ( *(_QWORD *)a1 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(
      a1,
      *(unsigned __int8 **)a1);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
    a1 + 64,
    a1 + 88,
    a2);
  if ( *(_QWORD *)(a1 + 64) )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(
      a1 + 64,
      *(unsigned __int8 **)(a1 + 64));
  v6 = (PVOID *)(a1 + 152);
  v7 = (int **)(a1 + 128);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    a1 + 128,
    a1 + 152);
  if ( *(_DWORD *)(a1 + 176) != -1 && *v6 && !a2 )
    ExFreePoolWithTag(*v6, 0);
  if ( *v7 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeNodeFree(
      a1 + 128,
      *v7);
  if ( a2 )
  {
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_OWORD *)v7 = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1760), a2);
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1896), a2);
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 2032), a2);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 16) = a1 + 1760;
    *(_QWORD *)(a1 + 80) = a1 + 1896;
    *(_QWORD *)(a1 + 144) = a1 + 2032;
  }
  if ( *(_QWORD *)(a1 + 1416) )
  {
    ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1);
    v15 = 0LL;
    if ( *(_DWORD *)(a1 + 788) )
    {
      do
      {
        v16 = *(_WORD *)(*(_QWORD *)(a1 + 1416) + 2 * v15);
        if ( (v16 & 0x1FFF) != 0 )
          ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, v15, -(v16 & 0x1FFF), 0);
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (_DWORD)v15 != *(_DWORD *)(a1 + 788) );
    }
    if ( (*(_DWORD *)(a1 + 776) & 0x20000) != 0
      && !a2
      && *(_DWORD *)(a1 + 840) != RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 840)) )
    {
      ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 1LL, a1 + 864);
    }
    v17 = *(_QWORD *)(a1 + 1416);
    v18 = (unsigned int *)(a1 + 1488);
    v19 = 6LL;
    do
    {
      if ( !a2 || (v20 = *v18, (_DWORD)v20 == -1) || (v14 = 0x4000LL, *(_WORD *)(v17 + 2 * v20) < 0x4000u) )
      {
        ST_STORE<SM_TRAITS>::StStagingRegionCleanup(v14, v18);
        if ( a2 )
        {
          *(_OWORD *)v18 = 0LL;
          *((_QWORD *)v18 + 2) = 0LL;
          *v18 = -1;
        }
      }
      v18 += 6;
      --v19;
    }
    while ( v19 );
  }
  if ( !a2 )
  {
    v8 = *(void **)(a1 + 1440);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    v9 = *(void **)(a1 + 848);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    v10 = *(void **)(a1 + 1464);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    v11 = *(void **)(a1 + 2176);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    v12 = *(void **)(a1 + 2184);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    v13 = *(void **)(a1 + 2192);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
  }
}
