/*
 * XREFs of ??0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z @ 0x1800A4520
 * Callers:
 *     ?Create@SessionMonitor@@SAJPEAUISessionMonitorOwner@@PEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800A4A38 (-Create@SessionMonitor@@SAJPEAUISessionMonitorOwner@@PEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x180051F08 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x180090AE8 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180093428 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009AC50 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 */

SessionMonitor *__fastcall SessionMonitor::SessionMonitor(
        SessionMonitor *this,
        struct ISessionMonitorOwner *a2,
        struct IMessageSession *a3)
{
  wil::details **v5; // rcx
  DWORD ThreadId; // [rsp+50h] [rbp+8h] BYREF
  HANDLE v8; // [rsp+58h] [rbp+10h] BYREF

  *((_QWORD *)this + 2) = 0LL;
  v5 = (wil::details **)((char *)this + 24);
  *v5 = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  ThreadId = 0;
  SessionMonitor::_instance = this;
  *((_QWORD *)this + 1) = a2;
  _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
    v5,
    1);
  Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)this + 2, (__int64)a3);
  v8 = CreateThread(0LL, 0LL, SessionMonitor::ThreadProc, 0LL, 0, &ThreadId);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
    (void **)this + 4,
    &v8);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v8);
  return this;
}
