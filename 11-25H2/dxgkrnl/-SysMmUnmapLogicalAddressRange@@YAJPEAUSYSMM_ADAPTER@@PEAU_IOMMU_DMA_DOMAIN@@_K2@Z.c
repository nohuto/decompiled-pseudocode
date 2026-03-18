/*
 * XREFs of ?SysMmUnmapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K2@Z @ 0x14027F400
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1400577CC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysMmUnmapLogicalAddressRange(struct SYSMM_ADAPTER *a1, struct _IOMMU_DMA_DOMAIN *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11

  if ( !SmmUseIommuV3Interface() )
    return 3221225485LL;
  if ( !v2 )
  {
    if ( (*(_DWORD *)(v3 + 88) & 0x10) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1212;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"The global adapter domain can be used only with GpuVaIommuGlobalRequired",
        1212LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    v5 = *(_QWORD *)(v3 + 112);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64))qword_14015E560)(v5, v6, v4 >> 12);
}
