/*
 * XREFs of ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003B450
 * Callers:
 *     SmmMapNonPagedObjectToIommu @ 0x14003A2E8 (SmmMapNonPagedObjectToIommu.c)
 *     ?SysMmMapIommuRange@@YAJPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x14003B380 (-SysMmMapIommuRange@@YAJPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z.c)
 *     ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x14005E6C8 (-SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     SmmMapPagedObjectToIommu @ 0x140062730 (SmmMapPagedObjectToIommu.c)
 *     SmmMapLockedPagesToIommu @ 0x140095A30 (SmmMapLockedPagesToIommu.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     SmmIommuMapReferenced @ 0x14003A270 (SmmIommuMapReferenced.c)
 *     SmmMapIommu @ 0x14003B520 (SmmMapIommu.c)
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
    WdLogGlobalForLineNumber = 901;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
