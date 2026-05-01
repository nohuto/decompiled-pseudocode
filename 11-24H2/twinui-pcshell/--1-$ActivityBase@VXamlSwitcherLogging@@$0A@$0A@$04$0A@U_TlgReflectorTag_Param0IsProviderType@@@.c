/*
 * XREFs of ??1?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180040870
 * Callers:
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18020EF20 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1CreateAltTabControl@XamlSwitcherTelemetry@@QEAA@XZ @ 0x180212120 (--1CreateAltTabControl@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802CC7D0 (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1CreateCachedData@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802CC8AC (--1CreateCachedData@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802CCB98 (--1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1GetHostWindow@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802CD010 (--1GetHostWindow@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1CreateGamingTaskViewControl@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18069EB24 (--1CreateGamingTaskViewControl@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1ShowGamingTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18069EB50 (--1ShowGamingTaskView@XamlSwitcherTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800408A8 (-reset@-$shared_object@V-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderT.c)
 */

__int64 __fastcall wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
