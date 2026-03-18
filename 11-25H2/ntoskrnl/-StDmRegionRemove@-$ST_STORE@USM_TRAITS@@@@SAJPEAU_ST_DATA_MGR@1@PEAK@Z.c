/*
 * XREFs of ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x1406002FC
 * Callers:
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404AA060 (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B7AAC (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14020A338 (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StStagingRegionCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@@Z @ 0x1403969AC (-StStagingRegionCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140397EE4 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1405FFF10 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StRegionFindRepurpose@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x140600858 (-StRegionFindRepurpose@-$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StStagingRegionFind@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x14060099C (-StStagingRegionFind@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionRemove(__int64 a1, _DWORD *a2)
{
  _WORD *Repurpose; // rax
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rdi
  unsigned int IsCurrentRegion; // eax
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8

  Repurpose = (_WORD *)ST_STORE<SM_TRAITS>::StRegionFindRepurpose(a1, (unsigned int)*a2);
  if ( !Repurpose )
    return 3221226021LL;
  v7 = ((__int64)Repurpose - *(_QWORD *)(a1 + 1416)) >> 1;
  if ( (*Repurpose & 0x1FFF) == 0 )
    goto LABEL_6;
  if ( (*(_DWORD *)(a1 + 832) & 2) != 0 )
    return 3221226021LL;
  result = ST_STORE<SM_TRAITS>::StDmRegionEvict(a1, a1 + 1336, v7, v5, *(_DWORD *)(a1 + 808) + 1);
  if ( (int)result >= 0 )
  {
LABEL_6:
    IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v7);
    if ( IsCurrentRegion != 8 )
      ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, IsCurrentRegion, 0xFFFFFFFF, v9);
    v10 = ST_STORE<SM_TRAITS>::StStagingRegionFind(a1, (unsigned int)v7);
    v12 = v10;
    if ( v10 )
    {
      ST_STORE<SM_TRAITS>::StStagingRegionCleanup(v11, v10);
      *(_OWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_DWORD *)v12 = -1;
    }
    v13 = *(_QWORD *)(a1 + 848);
    *a2 = v7;
    *(_BYTE *)(((unsigned __int64)(unsigned int)v7 >> 3) + v13) &= ~(1 << (v7 & 7));
    --*(_DWORD *)(a1 + 856);
    return 0LL;
  }
  return result;
}
