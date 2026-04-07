/*
 * XREFs of ??$Start@II@StopWindowCapture@WindowFrameLoggingTelemetry@@SA?AV01@$$QEAI0@Z @ 0x1800958B0
 * Callers:
 *     ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B1BF0 (-StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180095908 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800959AC (-StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 */

// Hidden C++ exception states: #wind=1
WindowFrameLoggingTelemetry::StopWindowCapture *__fastcall WindowFrameLoggingTelemetry::StopWindowCapture::Start<unsigned int,unsigned int>(
        WindowFrameLoggingTelemetry::StopWindowCapture *this,
        unsigned int *a2,
        unsigned int *a3)
{
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::StopWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::StopWindowCapture::StartActivity(this, *a2, *a3);
  return this;
}
