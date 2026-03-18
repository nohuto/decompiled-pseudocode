/*
 * XREFs of SmmMapIommu @ 0x14003B520
 * Callers:
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003B450 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 * Callees:
 *     SmmIommuMapIdentityRange @ 0x14003B548 (SmmIommuMapIdentityRange.c)
 *     SmmIommuMapLogicalRange @ 0x14003B5B0 (SmmIommuMapLogicalRange.c)
 */

__int64 __fastcall SmmMapIommu(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 )
    return SmmIommuMapLogicalRange(v3, a2, a3, a2);
  else
    return SmmIommuMapIdentityRange(v3, 0LL, a3);
}
