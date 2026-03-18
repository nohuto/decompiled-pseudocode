/*
 * XREFs of SysMmTestDisableIommu @ 0x140095F10
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285110 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

__int64 __fastcall SysMmTestDisableIommu(__int64 a1)
{
  return SysMmDisableIommu(a1, 64LL);
}
