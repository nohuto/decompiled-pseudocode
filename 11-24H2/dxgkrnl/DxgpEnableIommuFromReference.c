/*
 * XREFs of DxgpEnableIommuFromReference @ 0x14019D504
 * Callers:
 *     ?EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x14019D578 (-EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14020C720 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EE.c)
 * Callees:
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285294 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

__int64 __fastcall DxgpEnableIommuFromReference(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = *a3;
  result = 0LL;
  if ( *a3 == -1 )
    return 3221225485LL;
  if ( v3 || (result = SysMmEnableIommu(a1, a2), (int)result >= 0) )
    *a3 = v3 + 1;
  return result;
}
