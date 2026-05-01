/*
 * XREFs of ??1ShowSnapAssist@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802CC9E0
 * Callers:
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x180194844 (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 *     _XamlSnapAssistViewHost::Show_::_1_::dtor$2 @ 0x1806D2B2B (_XamlSnapAssistViewHost--Show_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180119BBC (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_P.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowSnapAssist::~ShowSnapAssist(XamlSwitcherTelemetry::ShowSnapAssist *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::ShowSnapAssist::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
