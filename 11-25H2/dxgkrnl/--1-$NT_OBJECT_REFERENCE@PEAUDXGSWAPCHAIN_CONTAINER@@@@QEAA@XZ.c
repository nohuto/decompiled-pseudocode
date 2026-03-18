/*
 * XREFs of ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403B80D0
 * Callers:
 *     ?GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1401F8204 (-GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     DxgkGetSwapChainSurfacePhysicalAddress @ 0x1401FB5F0 (DxgkGetSwapChainSurfacePhysicalAddress.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1402D69A0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkDispMgrReferenceObjectByHandle @ 0x1403E6E50 (DxgkDispMgrReferenceObjectByHandle.c)
 *     DxgkDispMgrOperation @ 0x1403F47A0 (DxgkDispMgrOperation.c)
 *     DxgkDispMgrSourceOperation @ 0x14041A4C0 (DxgkDispMgrSourceOperation.c)
 *     DxgkDispMgrTargetOperation @ 0x14041A8C0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(
        void **a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = ObfDereferenceObjectWithTag(v2, 0x4B677844u);
    *a1 = 0LL;
  }
  return result;
}
