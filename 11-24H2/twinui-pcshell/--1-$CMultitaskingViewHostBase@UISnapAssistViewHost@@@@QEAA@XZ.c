/*
 * XREFs of ??1?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ @ 0x1802A01E0
 * Callers:
 *     ??1XamlAltTabViewHost@@UEAA@XZ @ 0x180119AFC (--1XamlAltTabViewHost@@UEAA@XZ.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlSnapAssistViewHostInternal@@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@ABI@@U5@UIImmersiveMonitorNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1802C9E08 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$CMultitaskingViewHost.c)
 *     ??1CAltTabViewHost@@UEAA@XZ @ 0x1804AF430 (--1CAltTabViewHost@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804AF550 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAllUpV.c)
 *     ??1CPPIAllUpViewHost@@UEAA@XZ @ 0x1804B176C (--1CPPIAllUpViewHost@@UEAA@XZ.c)
 *     ??1XamlGamingTaskViewHost@@UEAA@XZ @ 0x18069EB7C (--1XamlGamingTaskViewHost@@UEAA@XZ.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAA@XZ @ 0x1806A3CA4 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAllUpVi.c)
 *     ??1TaskViewHost@@UEAA@XZ @ 0x1806A3D8C (--1TaskViewHost@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1806A4250 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAllUpV.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1806A9C5C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$CMultita_ea_1806A9C5C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::_EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_ @ 0x1802A0220 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNo.c)
 */

void __fastcall CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>(
        __int64 a1)
{
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::_EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_(a1 + 96);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 88));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 80));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}
