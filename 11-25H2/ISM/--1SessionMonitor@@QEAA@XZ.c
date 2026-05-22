/*
 * XREFs of ??1SessionMonitor@@QEAA@XZ @ 0x1800A4430
 * Callers:
 *     ??R?$default_delete@VSessionMonitor@@@std@@QEBAXPEAVSessionMonitor@@@Z @ 0x1800A2DE8 (--R-$default_delete@VSessionMonitor@@@std@@QEBAXPEAVSessionMonitor@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180092B78 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180093228 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18009AC04 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall SessionMonitor::~SessionMonitor(SessionMonitor *this, void *a2)
{
  wil::details *v3; // rcx
  void *v4; // rdx

  v3 = *(wil::details **)this;
  if ( v3 )
    WTSUnRegisterSessionNotification((HWND)v3);
  wil::details::SetEvent(*((wil::details **)this + 3), a2);
  PostMessageW(*(HWND *)this, 0x10u, 0LL, 0LL);
  WaitForSingleObject(*((HANDLE *)this + 4), 0xFFFFFFFF);
  *((_QWORD *)this + 1) = 0LL;
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 4);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 3,
    v4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
}
