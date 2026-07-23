/*
 * XREFs of ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402F613C
 * Callers:
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x1402F52D0 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402F6914 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1402F7140 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14037E050 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404F53C8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     SmWorkItemQueue @ 0x14029F5CC (SmWorkItemQueue.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1402F6AF8 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     SmEtwEnabled @ 0x140380D60 (SmEtwEnabled.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140415270 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404ACE98 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwLogRegionOp @ 0x14060B93C (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StReleaseRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  _BYTE *v3; // r15
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  unsigned int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rdi
  void *v13; // rbx
  int v14; // [rsp+78h] [rbp+10h] BYREF

  v2 = a2;
  v3 = (_BYTE *)(a1 + 776);
  v14 = 0;
  v5 = a2;
  if ( *(_BYTE *)(a1 + 776) )
  {
    v9 = (_BYTE *)(a1 + 776);
    *(_BYTE *)(v2 + *(_QWORD *)(a1 + 1432)) = 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v6 + 6837) & 4) != 0 )
    {
      v7 = a2;
      if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 800), a2, 0LL) == -1073741650 )
        ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v2, 1LL);
    }
    else
    {
      v12 = *(_QWORD *)(v6 + 7024);
      v13 = (void *)(*(_QWORD *)(v12 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8uLL);
      MiFreePagesFromMdl((ULONG_PTR)v13, 0, 0, 0);
      ExFreePoolWithTag(v13, 0);
      *(_QWORD *)(v12 + 8 * v2) = 0LL;
      v7 = v5;
    }
    v8 = SmEtwEnabled(0LL);
    if ( v8 )
      SmEtwLogRegionOp(v8, 5, a1, v2, 0, *(_WORD *)(*(_QWORD *)(a1 + 1416) + 2 * v7), 0);
    if ( (unsigned int)v2 < *(_DWORD *)(a1 + 1476) )
      *(_DWORD *)(a1 + 1476) = v2;
    v9 = (_BYTE *)(a1 + 776);
  }
  if ( *v3 )
    v10 = 0;
  else
    v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1416) + 2 * v2) >> 13;
  --*(_DWORD *)(a1 + 8LL * v10 + 2208);
  if ( !*v9 )
    *(_WORD *)(*(_QWORD *)(a1 + 1416) + 2 * v2) &= 0x1FFFu;
  result = *(unsigned int *)(a1 + 832);
  if ( (result & 4) != 0 )
  {
    result = ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1, &v14, 0LL);
    if ( (unsigned int)(*(_DWORD *)(a1 + 856) - v14) >= 8 )
    {
      result = *(unsigned int *)(a1 + 4400);
      if ( (result & 1) == 0 )
      {
        *(_DWORD *)(a1 + 2616) = 0;
        *(_DWORD *)(a1 + 4400) |= 1u;
        return SmWorkItemQueue();
      }
    }
  }
  return result;
}
