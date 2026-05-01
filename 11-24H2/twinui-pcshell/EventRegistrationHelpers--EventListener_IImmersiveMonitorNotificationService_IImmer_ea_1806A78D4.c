/*
 * XREFs of EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_1 @ 0x1806A78D4
 * Callers:
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x1802B3E20 (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@IEAAJPEAUIUnknown.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0 @ 0x1802A4034 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1802A4034.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0 @ 0x1802A4068 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease_0.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalAddRef @ 0x1802D10FC (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalAddRef.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x680a3a1a::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x1806A6528 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x68.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_1(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0((__int64)a1);
  v10 = 0LL;
  Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0(&v10);
  v4 = Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x680a3a1a::MonitorEventRegistration_IImmersiveMonitorNotification_____(
         &v10,
         a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 60LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"desktop\\internal\\shell\\inc\\private\\eventregistrationhelpers.h",
      (const char *)(unsigned int)v4);
    goto LABEL_9;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 61LL;
    goto LABEL_5;
  }
  v7 = v10;
  if ( a1[1] != v10 )
  {
    v11 = v10;
    Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalAddRef(&v11);
    v11 = a1[1];
    a1[1] = v7;
    Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0(&v11);
  }
  v5 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0(&v10);
  return v5;
}
