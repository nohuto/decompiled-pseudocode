/*
 * XREFs of ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x180086D38
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___ @ 0x180086B88 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___.c)
 *     _lambda_e77611733156e07a25f619698f3ee1ef_::__lambda_e77611733156e07a25f619698f3ee1ef_ @ 0x1801F3374 (_lambda_e77611733156e07a25f619698f3ee1ef_--__lambda_e77611733156e07a25f619698f3ee1ef_.c)
 *     _CFrameApplicationPresentation::SetSystemVisual_::_1_::dtor$0 @ 0x1806CE433 (_CFrameApplicationPresentation--SetSystemVisual_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180086D64 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 */

void __fastcall CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual(
        CFramePresentationTelemetry::SetSystemVisual *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
