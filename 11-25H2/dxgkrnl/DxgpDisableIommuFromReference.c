/*
 * XREFs of DxgpDisableIommuFromReference @ 0x14019B048
 * Callers:
 *     ?DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x14019AACC (-DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x14027DDA0 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

__int64 __fastcall DxgpDisableIommuFromReference(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = *a3;
  result = 0LL;
  if ( !*a3 )
    return 3221225485LL;
  if ( v3 != 1 || (result = SysMmDisableIommu(a1, 16LL), (int)result >= 0) )
    *a3 = v3 - 1;
  return result;
}
