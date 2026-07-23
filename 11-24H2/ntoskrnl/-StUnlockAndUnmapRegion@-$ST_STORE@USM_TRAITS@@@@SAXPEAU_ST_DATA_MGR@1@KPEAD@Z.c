/*
 * XREFs of ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1402F7328
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402F6914 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14048F854 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404F53C8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402F85D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140432EDC (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(__int64 a1, int a2, int a3, int a4)
{
  __int64 v6; // rcx
  int v7; // r9d
  __int64 v8; // r8

  v6 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v6 + 6837) & 4) != 0 )
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, a2, a3, a4);
  else
    SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(v6, a2, a3, a4);
  v8 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v8 + 6837) & 4) != 0 )
    return SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v8, a2, v8, v7);
  else
    return SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(v8, a2, v8, v7);
}
