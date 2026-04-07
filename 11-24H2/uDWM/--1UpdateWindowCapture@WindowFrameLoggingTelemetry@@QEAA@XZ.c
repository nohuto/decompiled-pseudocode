/*
 * XREFs of ??1UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800CB4AC
 * Callers:
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CDC90 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     _CProjectionBorderManager::UpdateWindowCapture_::_1_::dtor$2 @ 0x1800F8647 (_CProjectionBorderManager--UpdateWindowCapture_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180097CB0 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall WindowFrameLoggingTelemetry::UpdateWindowCapture::~UpdateWindowCapture(
        WindowFrameLoggingTelemetry::UpdateWindowCapture *this)
{
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::UpdateWindowCapture::`vftable';
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
