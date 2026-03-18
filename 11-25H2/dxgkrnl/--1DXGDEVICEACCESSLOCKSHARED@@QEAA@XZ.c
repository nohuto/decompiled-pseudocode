/*
 * XREFs of ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034ED4
 * Callers:
 *     DxgkGetAllocationPriority @ 0x1401B03F0 (DxgkGetAllocationPriority.c)
 *     DxgkQueryAllocationResidency @ 0x1401B0C70 (DxgkQueryAllocationResidency.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1401BA6B0 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetOverlayState @ 0x1401E4400 (DxgkGetOverlayState.c)
 *     DxgkCreateProtectedSession @ 0x1401EACF0 (DxgkCreateProtectedSession.c)
 *     ?DestroySurfaceDeviceResources@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1401F7BD8 (-DestroySurfaceDeviceResources@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1401FE590 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x1401FE8C0 (NtDxgkResetTrackedWorkloadStatistics.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1402A6DD0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1402ABA40 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x140322BB0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x14032B360 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkQueryResourceInfo @ 0x14035EB70 (DxgkQueryResourceInfo.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x140397AB0 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkGetContextSchedulingPriority @ 0x140407F90 (DxgkGetContextSchedulingPriority.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140427170 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED(DXGDEVICEACCESSLOCKSHARED *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v2 + 136));
      KeLeaveCriticalRegion();
    }
  }
}
