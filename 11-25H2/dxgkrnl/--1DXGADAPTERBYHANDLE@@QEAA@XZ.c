/*
 * XREFs of ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1401A92D0 (DxgkAdjustFullscreenGamma.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1401AA510 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkModifyVSyncWaiterInternal @ 0x1401AB5F0 (DxgkModifyVSyncWaiterInternal.c)
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401AC9B0 (DxgkOpenVerticalBlankEventInternal.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1401ACEB0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1401ADAB0 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401AFCCC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkConfirmToken @ 0x1401B5FF0 (DxgkConfirmToken.c)
 *     DxgkGetMultisampleMethodList @ 0x1401C46F0 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1401C4E00 (DxgkInvalidateActiveVidPn.c)
 *     NtDxgkIsFeatureEnabled @ 0x1401CC7A0 (NtDxgkIsFeatureEnabled.c)
 *     DxgkSetStablePowerState @ 0x1401E9AD0 (DxgkSetStablePowerState.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021CBA0 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x140283980 (DxgkGetDisplayModeList.c)
 *     DxgkGetPresentHistoryInternal @ 0x1402871A0 (DxgkGetPresentHistoryInternal.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1402FB5E4 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     DxgkQueryVideoMemoryInfo @ 0x140309910 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14032973C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkGetScanLine @ 0x140342C80 (DxgkGetScanLine.c)
 *     DxgkGetPresentStats @ 0x14034A864 (DxgkGetPresentStats.c)
 *     DxgkQueryClockCalibration @ 0x140385300 (DxgkQueryClockCalibration.c)
 *     DxgkGetPostCompositionCaps @ 0x140398610 (DxgkGetPostCompositionCaps.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x140399040 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1403A21E0 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403A37C0 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1403A5020 (DxgkFreeGpuVirtualAddress.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403B1828 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403B60A8 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1403C3D40 (DxgkCheckVidPnExclusiveOwnership.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403CB400 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkFlushPresentHistory @ 0x1403E6BA0 (DxgkFlushPresentHistory.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1403FF61C (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x140400520 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkCheckMonitorPowerState @ 0x14040F790 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(DXGADAPTER **this, unsigned __int64 a2)
{
  DXGADAPTER *v2; // rcx

  v2 = *this;
  if ( v2 )
    DXGADAPTER::ReleaseReference(v2, a2);
}
