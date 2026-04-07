/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180059B74
 * Callers:
 *     ?WindowMoveResizeCrossfadeAnimationScheduled@UDwmTrace@@SAXXZ @ 0x18004A950 (-WindowMoveResizeCrossfadeAnimationScheduled@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeBeginPostTransition@UDwmTrace@@SAXXZ @ 0x18004C79C (-WindowMoveResizeCrossfadeBeginPostTransition@UDwmTrace@@SAXXZ.c)
 *     ?WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ @ 0x18008BEAC (-WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeCaptureVisualsComplete@UDwmTrace@@SAXXZ @ 0x18008BEFC (-WindowMoveResizeCrossfadeCaptureVisualsComplete@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginSchedulingFirstAnimation@UDwmTrace@@SAXXZ @ 0x180097A8C (-ResponsiveRotationBeginSchedulingFirstAnimation@UDwmTrace@@SAXXZ.c)
 *     ?WindowSnapSignalReceived@UDwmTrace@@SAXXZ @ 0x180097ADC (-WindowSnapSignalReceived@UDwmTrace@@SAXXZ.c)
 *     ?UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x1800A42AC (-UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ @ 0x1800A4300 (-UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ @ 0x1800A4354 (-UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ @ 0x1800A43A8 (-UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ @ 0x1800A43FC (-UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x1800A4450 (-UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ??$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z @ 0x1800AB8D0 (--$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z.c)
 *     ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800C2478 (-ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ResponsiveRotationAnimationTeardownComplete@UDwmTrace@@SAXXZ @ 0x1800E13E8 (-ResponsiveRotationAnimationTeardownComplete@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ @ 0x1800E1438 (-ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginSchedulingSecondAnimation@UDwmTrace@@SAXXZ @ 0x1800E1488 (-ResponsiveRotationBeginSchedulingSecondAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingFirstAnimation@UDwmTrace@@SAXXZ @ 0x1800E14D8 (-ResponsiveRotationFinishSchedulingFirstAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingHalfAnimation@UDwmTrace@@SAXXZ @ 0x1800E1528 (-ResponsiveRotationFinishSchedulingHalfAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingSecondAnimation@UDwmTrace@@SAXXZ @ 0x1800E1578 (-ResponsiveRotationFinishSchedulingSecondAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationPreRotationVisualsCaptured@UDwmTrace@@SAXXZ @ 0x1800E15C8 (-ResponsiveRotationPreRotationVisualsCaptured@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ @ 0x1800E1618 (-ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18005A1CC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _BYTE v6[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v9 = 0;
  v7 = a5;
  v8 = 8;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 3, (__int64)v6);
}
