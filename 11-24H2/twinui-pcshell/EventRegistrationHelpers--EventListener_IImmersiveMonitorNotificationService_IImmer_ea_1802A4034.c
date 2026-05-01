/*
 * XREFs of EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0 @ 0x1802A4034
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x18011ED70 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ @ 0x18011F650 (-DismissView@-$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1804B10C0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_0 @ 0x1804B1334 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1804B1334.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x1804B1910 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::_EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_ @ 0x1804B5300 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChangedBegi.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x1804B5B84 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register @ 0x1804B5C54 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_1804B5C54.c)
 *     ?SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x1804C9600 (-SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_1 @ 0x1806A78D4 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1806A78D4.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_2 @ 0x1806ACD28 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1806ACD28.c)
 * Callees:
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0 @ 0x1802A4068 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = a1 + 8;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    return Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0(v1);
  }
  return result;
}
