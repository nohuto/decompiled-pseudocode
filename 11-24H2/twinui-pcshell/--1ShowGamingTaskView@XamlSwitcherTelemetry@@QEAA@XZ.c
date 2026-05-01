/*
 * XREFs of ??1ShowGamingTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18069EB50
 * Callers:
 *     ??1XamlGamingTaskViewHost@@UEAA@XZ @ 0x18069EB7C (--1XamlGamingTaskViewHost@@UEAA@XZ.c)
 *     ??4ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18069EDDC (--4ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1806A0C10 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 *     _XamlGamingTaskViewHost::Show_::_1_::dtor$2 @ 0x180704E5E (_XamlGamingTaskViewHost--Show_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180040558 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowGamingTaskView::~ShowGamingTaskView(
        XamlSwitcherTelemetry::ShowGamingTaskView *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::ShowGamingTaskView::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
