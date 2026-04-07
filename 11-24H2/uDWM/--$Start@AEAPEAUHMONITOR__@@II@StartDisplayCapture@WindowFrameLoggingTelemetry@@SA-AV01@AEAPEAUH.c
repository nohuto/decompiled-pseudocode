/*
 * XREFs of ??$Start@AEAPEAUHMONITOR__@@II@StartDisplayCapture@WindowFrameLoggingTelemetry@@SA?AV01@AEAPEAUHMONITOR__@@$$QEAI1@Z @ 0x1800AB6CC
 * Callers:
 *     ?StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B09D0 (-StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CC650 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CCA30 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180095908 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x1800B0720 (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 */

// Hidden C++ exception states: #wind=1
WindowFrameLoggingTelemetry::StartDisplayCapture *__fastcall WindowFrameLoggingTelemetry::StartDisplayCapture::Start<HMONITOR__ * &,unsigned int,unsigned int>(
        WindowFrameLoggingTelemetry::StartDisplayCapture *this,
        HMONITOR *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"StartDisplayCapture");
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::StartDisplayCapture::`vftable';
  WindowFrameLoggingTelemetry::StartDisplayCapture::StartActivity(this, *a2, *a3, *a4);
  return this;
}
