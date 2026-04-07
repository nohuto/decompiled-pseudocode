/*
 * XREFs of _tlgKeywordOn @ 0x18007A880
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800136A4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180015EE4 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z @ 0x18001AE00 (-TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z.c)
 *     ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800339B4 (-ReportStopActivity@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?WindowMoveResizeCrossfadeAnimationScheduled@UDwmTrace@@SAXXZ @ 0x18004A950 (-WindowMoveResizeCrossfadeAnimationScheduled@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeBeginPostTransition@UDwmTrace@@SAXXZ @ 0x18004C79C (-WindowMoveResizeCrossfadeBeginPostTransition@UDwmTrace@@SAXXZ.c)
 *     ?IsNewConnectVariant@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800560E0 (-IsNewConnectVariant@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet.c)
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180056264 (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800563F0 (-IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@.c)
 *     ?OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ @ 0x180079A50 (-OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18007B340 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007B788 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ @ 0x18008BEAC (-WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeCaptureVisualsComplete@UDwmTrace@@SAXXZ @ 0x18008BEFC (-WindowMoveResizeCrossfadeCaptureVisualsComplete@UDwmTrace@@SAXXZ.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18008E5C8 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800959AC (-StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180095A78 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?ResponsiveRotationBeginSchedulingFirstAnimation@UDwmTrace@@SAXXZ @ 0x180097A8C (-ResponsiveRotationBeginSchedulingFirstAnimation@UDwmTrace@@SAXXZ.c)
 *     ?WindowSnapSignalReceived@UDwmTrace@@SAXXZ @ 0x180097ADC (-WindowSnapSignalReceived@UDwmTrace@@SAXXZ.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18009F828 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x1800A42AC (-UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ @ 0x1800A4300 (-UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ @ 0x1800A4354 (-UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ @ 0x1800A43A8 (-UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ @ 0x1800A43FC (-UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x1800A4450 (-UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x1800AB7FC (--$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAP.c)
 *     ??$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z @ 0x1800AB8D0 (--$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z.c)
 *     ??$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z @ 0x1800AB92C (--$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800AC520 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800AEA50 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x1800B0720 (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800B0810 (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800B0900 (-StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B0ED0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800B0FB0 (-StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800B11E0 (-StopActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800B1410 (-StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800B1640 (-StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BEE40 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800C046C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800C1FA0 (-StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800C2478 (-ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800CC458 (-ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800CC498 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800CC4D8 (-ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800CC518 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800CC558 (-StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?StopActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800CD000 (-StopActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800DB1B0 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?ResponsiveRotationAnimationTeardownComplete@UDwmTrace@@SAXXZ @ 0x1800E13E8 (-ResponsiveRotationAnimationTeardownComplete@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ @ 0x1800E1438 (-ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginSchedulingSecondAnimation@UDwmTrace@@SAXXZ @ 0x1800E1488 (-ResponsiveRotationBeginSchedulingSecondAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingFirstAnimation@UDwmTrace@@SAXXZ @ 0x1800E14D8 (-ResponsiveRotationFinishSchedulingFirstAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingHalfAnimation@UDwmTrace@@SAXXZ @ 0x1800E1528 (-ResponsiveRotationFinishSchedulingHalfAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingSecondAnimation@UDwmTrace@@SAXXZ @ 0x1800E1578 (-ResponsiveRotationFinishSchedulingSecondAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationPreRotationVisualsCaptured@UDwmTrace@@SAXXZ @ 0x1800E15C8 (-ResponsiveRotationPreRotationVisualsCaptured@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ @ 0x1800E1618 (-ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
