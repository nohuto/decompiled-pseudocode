/*
 * XREFs of DpiGetDxgAdapter @ 0x140016C90
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x140016A30 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgkPinFrameBufferForSaveCB @ 0x140016AB0 (DxgkPinFrameBufferForSaveCB.c)
 *     DxgkPinFrameBufferForSave2CB @ 0x140016AF0 (DxgkPinFrameBufferForSave2CB.c)
 *     DxgkUnpinFrameBufferForSaveCB @ 0x140016B40 (DxgkUnpinFrameBufferForSaveCB.c)
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x140016B70 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     DxgSetPowerComponentIdleCB @ 0x140016C10 (DxgSetPowerComponentIdleCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x14006C340 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x14006C3C0 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x14006C3F0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x14006C460 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x14006C4D0 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x14006C550 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkInvalidateHwContextCB @ 0x14006C5C0 (DxgkInvalidateHwContextCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x14006C780 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x14006C8D0 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x14006C940 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x14006C9B0 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgLogEtwEventCb @ 0x140070260 (DxgLogEtwEventCb.c)
 *     DxgkCbReportDiagnostic @ 0x140070F20 (DxgkCbReportDiagnostic.c)
 *     DxgkMapFrameBufferPointerCB @ 0x1400734E0 (DxgkMapFrameBufferPointerCB.c)
 *     DxgkUnmapFrameBufferPointerCB @ 0x140073520 (DxgkUnmapFrameBufferPointerCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1401B6A70 (DxgkUpdateContextAllocationCB.c)
 *     DxgkNotifyCursorSupportChangeCB @ 0x1401E4EA0 (DxgkNotifyCursorSupportChangeCB.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x140269DC0 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorDescriptor@DXGK_MONITOR_INTERFACE_V3_IMPL@@KAJQEAXIPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x14026A700 (-GetMonitorDescriptor@DXGK_MONITOR_INTERFACE_V3_IMPL@@KAJQEAXIPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x14026A9F0 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x14026AD20 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x14026B470 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x14026BBB0 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1402C93A0 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x14038F5C0 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgCreateContextAllocationCB @ 0x1403B41D0 (DxgCreateContextAllocationCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1403BB9F0 (DxgDestroyContextAllocationCB.c)
 *     DxgkMapContextAllocationCB @ 0x1403C7C70 (DxgkMapContextAllocationCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1403CB910 (DxgSetPowerComponentActiveCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1403DCE60 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     ?DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONITOR_INTERFACE@@@Z @ 0x14042C630 (-DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONI.c)
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
    WdLogGlobalForLineNumber = 2065;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2058;
  }
  return 0LL;
}
