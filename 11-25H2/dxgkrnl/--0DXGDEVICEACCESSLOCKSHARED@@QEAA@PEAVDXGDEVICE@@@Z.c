/*
 * XREFs of ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140031508
 * Callers:
 *     DxgkGetAllocationPriority @ 0x1401B03F0 (DxgkGetAllocationPriority.c)
 *     DxgkQueryAllocationResidency @ 0x1401B0C70 (DxgkQueryAllocationResidency.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1401BA6B0 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetOverlayState @ 0x1401E4400 (DxgkGetOverlayState.c)
 *     DxgkCreateProtectedSession @ 0x1401EACF0 (DxgkCreateProtectedSession.c)
 *     ?DestroySurfaceDeviceResources@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1401F7BD8 (-DestroySurfaceDeviceResources@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1401FE590 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x1401FE8C0 (NtDxgkResetTrackedWorkloadStatistics.c)
 *     DxgkGetContextSchedulingPriority @ 0x140407F90 (DxgkGetContextSchedulingPriority.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140427170 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x140031534 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 */

DXGDEVICEACCESSLOCKSHARED *__fastcall DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
        DXGDEVICEACCESSLOCKSHARED *this,
        struct DXGDEVICE *a2)
{
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  if ( a2 )
    DXGDEVICEACCESSLOCKSHARED::Acquire(this);
  return this;
}
