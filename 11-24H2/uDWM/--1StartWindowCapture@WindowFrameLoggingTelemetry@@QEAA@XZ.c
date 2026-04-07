/*
 * XREFs of ??1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800AD138
 * Callers:
 *     ?StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0CA0 (-StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CCC70 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     _CCaptureManager::StartWindowCapture_::_1_::dtor$1 @ 0x1800F8393 (_CCaptureManager--StartWindowCapture_--_1_--dtor$1.c)
 *     _CProjectionBorderManager::StartWindowCapture_::_1_::dtor$2 @ 0x1800F8623 (_CProjectionBorderManager--StartWindowCapture_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180097CB0 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StartWindowCapture::~StartWindowCapture(
        WindowFrameLoggingTelemetry::StartWindowCapture *this)
{
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::StartWindowCapture::`vftable';
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
