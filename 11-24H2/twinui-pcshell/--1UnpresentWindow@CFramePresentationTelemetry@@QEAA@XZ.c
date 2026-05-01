/*
 * XREFs of ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180034D30
 * Callers:
 *     _lambda_201adf67891f12ccd8a16b46f471aeff_::__lambda_201adf67891f12ccd8a16b46f471aeff_ @ 0x1800868B0 (_lambda_201adf67891f12ccd8a16b46f471aeff_--__lambda_201adf67891f12ccd8a16b46f471aeff_.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180033338 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow(
        CFramePresentationTelemetry::UnpresentWindow *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
