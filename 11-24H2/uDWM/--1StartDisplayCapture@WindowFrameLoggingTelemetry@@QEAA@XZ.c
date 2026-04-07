/*
 * XREFs of ??1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800AD10C
 * Callers:
 *     ?StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B09D0 (-StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CC650 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CCA30 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 *     _CCaptureManager::StartDisplayCapture_::_1_::dtor$1 @ 0x1800F836F (_CCaptureManager--StartDisplayCapture_--_1_--dtor$1.c)
 *     _CProjectionBorderManager::StartVirtualMonitorCapture_::_1_::dtor$1 @ 0x1800F8611 (_CProjectionBorderManager--StartVirtualMonitorCapture_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180097CB0 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StartDisplayCapture::~StartDisplayCapture(
        WindowFrameLoggingTelemetry::StartDisplayCapture *this)
{
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::StartDisplayCapture::`vftable';
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
