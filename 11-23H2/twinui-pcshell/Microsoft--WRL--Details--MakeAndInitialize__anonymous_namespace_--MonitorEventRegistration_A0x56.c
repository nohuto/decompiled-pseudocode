/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x568a9533::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x180560ACC
 * Callers:
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_0 @ 0x180561680 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_180561680.c)
 * Callees:
 *     ??0?$EventRegistration@UIImmersiveMonitorNotificationService@@UIImmersiveMonitorNotification@@@EventRegistrationHelpers@@QEAA@XZ @ 0x18002DAB4 (--0-$EventRegistration@UIImmersiveMonitorNotificationService@@UIImmersiveMonitorNotification@@@E.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalAddRef @ 0x1800721E0 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalAddRef.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0 @ 0x1800739D0 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x568a9533::MonitorEventRegistration_IImmersiveMonitorNotification_____(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    EventRegistrationHelpers::EventRegistration<IImmersiveMonitorNotificationService,IImmersiveMonitorNotification>::EventRegistration<IImmersiveMonitorNotificationService,IImmersiveMonitorNotification>((__int64)v5);
    *v6 = off_1807C7198;
    v8 = v6;
    v6[2] = *a2;
    Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalAddRef((__int64 *)&v8);
    *a1 = v6;
    Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
