/*
 * XREFs of ??0XamlAltTabViewHost@@QEAA@XZ @ 0x1801193FC
 * Callers:
 *     ??$MakeAndInitialize@VXamlAltTabViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlAltTabViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180119344 (--$MakeAndInitialize@VXamlAltTabViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Micros.c)
 * Callees:
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801194BC (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIXamlAltTabViewHostInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x180119560 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAltTabV.c)
 */

XamlAltTabViewHost *__fastcall XamlAltTabViewHost::XamlAltTabViewHost(XamlAltTabViewHost *this)
{
  XamlAltTabViewHost *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAltTabViewHost>,IXamlAltTabViewHostInternal>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAltTabViewHost>,IXamlAltTabViewHostInternal>();
  *((_QWORD *)this + 17) = 0LL;
  *(_QWORD *)this = &XamlAltTabViewHost::`vftable'{for `Microsoft::WRL::ChainInterfaces<IAltTabViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &XamlAltTabViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 15) = &XamlAltTabViewHost::`vftable';
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((XamlAltTabViewHost *)((char *)this + 176));
  *((_QWORD *)this + 22) = &XamlSwitcherTelemetry::ShowAltTab::`vftable';
  result = this;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_QWORD *)this + 68) = 0LL;
  *((_DWORD *)this + 18) = 1;
  return result;
}
