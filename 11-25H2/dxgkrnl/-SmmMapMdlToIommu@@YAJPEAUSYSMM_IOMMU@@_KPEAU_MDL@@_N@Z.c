/*
 * XREFs of ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003AEA0
 * Callers:
 *     SmmMapNonPagedObjectToIommu @ 0x140039B44 (SmmMapNonPagedObjectToIommu.c)
 *     ?SysMmMapIommuRange@@YAJPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x14003ADD0 (-SysMmMapIommuRange@@YAJPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z.c)
 *     ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x14005DE90 (-SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     SmmMapPagedObjectToIommu @ 0x140061E3C (SmmMapPagedObjectToIommu.c)
 *     SmmMapLockedPagesToIommu @ 0x1400934D8 (SmmMapLockedPagesToIommu.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     SmmIommuMapReferenced @ 0x140039ACC (SmmIommuMapReferenced.c)
 *     SmmMapIommu @ 0x14003AF70 (SmmMapIommu.c)
 */

__int64 __fastcall SmmMapMdlToIommu(struct SYSMM_IOMMU *a1, __int64 a2, struct _MDL *a3, unsigned __int8 a4)
{
  __int64 v4; // rdi
  int v8; // eax
  int v9; // esi

  v4 = a4;
  if ( !a4 || (*((_DWORD *)a1 + 7) & 1) != 0 )
    v8 = SmmMapIommu();
  else
    v8 = SmmIommuMapReferenced((__int64)a1, (__int64)a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry5(2LL, a3, a2, a1, v4, v8);
    WdLogGlobalForLineNumber = 893;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to map MDL 0x%.16I64x to IOMMU at logical address 0x%.16I64x. pIommu=0x%.16I64x, Referenced=%u, Status=0x%.8x",
      (__int64)a3,
      a2,
      (__int64)a1,
      v4,
      v9);
  }
  return (unsigned int)v9;
}
