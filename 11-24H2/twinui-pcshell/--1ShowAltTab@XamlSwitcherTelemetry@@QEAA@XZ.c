/*
 * XREFs of ??1ShowAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x180119B90
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180118BB0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     ??1XamlAltTabViewHost@@UEAA@XZ @ 0x180119AFC (--1XamlAltTabViewHost@@UEAA@XZ.c)
 *     _XamlAltTabViewHost::Show_::_1_::dtor$2 @ 0x1806D280F (_XamlAltTabViewHost--Show_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180119BBC (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_P.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowAltTab::~ShowAltTab(XamlSwitcherTelemetry::ShowAltTab *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::ShowAltTab::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(this);
}
