/*
 * XREFs of ??1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800CFA38
 * Callers:
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D2600 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     _CProjectionBorderManager::StopDisplayCapture_::_1_::dtor$1 @ 0x1800D2777 (_CProjectionBorderManager--StopDisplayCapture_--_1_--dtor$1.c)
 *     ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D2790 (-StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     _CProjectionBorderManager::StopVirtualMonitorCapture_::_1_::dtor$1 @ 0x1800D28FE (_CProjectionBorderManager--StopVirtualMonitorCapture_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800CFEE0 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StopDisplayCapture::~StopDisplayCapture(
        WindowFrameLoggingTelemetry::StopDisplayCapture *this)
{
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::StopDisplayCapture::`vftable';
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
