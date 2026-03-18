/*
 * XREFs of DpiGetDxgAdapter @ 0x1400107F0
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x140010240 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgkPinFrameBufferForSaveCB @ 0x1400102C0 (DxgkPinFrameBufferForSaveCB.c)
 *     DxgkPinFrameBufferForSave2CB @ 0x140010300 (DxgkPinFrameBufferForSave2CB.c)
 *     DxgkUnpinFrameBufferForSaveCB @ 0x140010350 (DxgkUnpinFrameBufferForSaveCB.c)
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x140010610 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     DxgSetPowerComponentIdleCB @ 0x140010770 (DxgSetPowerComponentIdleCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x14006C060 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x14006C0E0 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x14006C110 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x14006C180 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x14006C1F0 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x14006C270 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkInvalidateHwContextCB @ 0x14006C2E0 (DxgkInvalidateHwContextCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x14006C4A0 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x14006C5F0 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x14006C660 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x14006C6D0 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgLogEtwEventCb @ 0x140070BE0 (DxgLogEtwEventCb.c)
 *     DxgkCbReportDiagnostic @ 0x1400718A0 (DxgkCbReportDiagnostic.c)
 *     DxgkMapFrameBufferPointerCB @ 0x140073F80 (DxgkMapFrameBufferPointerCB.c)
 *     DxgkUnmapFrameBufferPointerCB @ 0x140073FC0 (DxgkUnmapFrameBufferPointerCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1401B9020 (DxgkUpdateContextAllocationCB.c)
 *     DxgkNotifyCursorSupportChangeCB @ 0x1401EA0D0 (DxgkNotifyCursorSupportChangeCB.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x140270D20 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorDescriptor@DXGK_MONITOR_INTERFACE_V3_IMPL@@KAJQEAXIPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x140271660 (-GetMonitorDescriptor@DXGK_MONITOR_INTERFACE_V3_IMPL@@KAJQEAXIPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x140271950 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x140271C80 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1402723D0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x140272B10 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1402E2C50 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x140383170 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgCreateContextAllocationCB @ 0x1403A5DB0 (DxgCreateContextAllocationCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1403AFB70 (DxgDestroyContextAllocationCB.c)
 *     DxgkMapContextAllocationCB @ 0x1403BC2C0 (DxgkMapContextAllocationCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1403BE700 (DxgSetPowerComponentActiveCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1403D6EB0 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     ?DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONITOR_INTERFACE@@@Z @ 0x14042E520 (-DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDxgAdapter(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 64);
    if ( v1 && *(_DWORD *)(v1 + 16) == 1953656900 && *(_DWORD *)(v1 + 20) == 2 )
      return *(_QWORD *)(v1 + 4032);
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 2066;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2059;
  }
  return 0LL;
}
