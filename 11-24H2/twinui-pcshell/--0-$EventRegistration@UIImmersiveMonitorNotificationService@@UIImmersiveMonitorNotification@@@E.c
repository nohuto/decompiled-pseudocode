/*
 * XREFs of ??0?$EventRegistration@UIImmersiveMonitorNotificationService@@UIImmersiveMonitorNotification@@@EventRegistrationHelpers@@QEAA@XZ @ 0x1804AF2C4
 * Callers:
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x7a5ebaa3::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x1802379F0 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x7a.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x568a9533::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x1804AF1BC (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x56.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x1e4dc85f::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x1804B0F10 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x1e.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x680a3a1a::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x1806A6528 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x68.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x1801F2540 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@@WRL@M.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventRegistration<IImmersiveMonitorNotificationService,IImmersiveMonitorNotification>::EventRegistration<IImmersiveMonitorNotificationService,IImmersiveMonitorNotification>(
        __int64 a1)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification>((_QWORD *)a1);
  *(_QWORD *)a1 = &EventRegistrationHelpers::EventRegistration<IImmersiveMonitorNotificationService,IImmersiveMonitorNotification>::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return a1;
}
