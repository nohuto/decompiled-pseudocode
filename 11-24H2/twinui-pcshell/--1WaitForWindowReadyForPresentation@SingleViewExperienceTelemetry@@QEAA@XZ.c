/*
 * XREFs of ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800AFB70
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800AFB9C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::__lambda_71ae74f74888d637c85562ef224bc48a_ @ 0x180680C0C (_lambda_71ae74f74888d637c85562ef224bc48a_--__lambda_71ae74f74888d637c85562ef224bc48a_.c)
 *     _CSingleViewShellExperience::WaitForWindowReadyForPresentation_::_1_::dtor$0 @ 0x1806CFAF6 (_CSingleViewShellExperience--WaitForWindowReadyForPresentation_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B0670 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::~WaitForWindowReadyForPresentation(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
