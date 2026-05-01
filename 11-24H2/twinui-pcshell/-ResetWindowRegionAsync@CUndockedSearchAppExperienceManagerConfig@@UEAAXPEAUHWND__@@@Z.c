/*
 * XREFs of ?ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z @ 0x180246680
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CDC18 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StartActivity@UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAAXXZ @ 0x1800CDD48 (-StartActivity@UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelem.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18018A814 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_18018A814.c)
 *     ??1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18018A9F8 (--1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@X.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28dd33157ff92f349d65c7c884e47fdb_____lambda_28dd33157ff92f349d65c7c884e47fdb___ @ 0x1803AED28 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28dd33157ff92.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CUndockedSearchAppExperienceManagerConfig::ResetWindowRegionAsync(
        CUndockedSearchAppExperienceManagerConfig *this,
        HWND a2)
{
  unsigned int v4; // edi
  __int64 *v5; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  const char *v9; // r9
  volatile signed __int32 *v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v12; // [rsp+40h] [rbp-C0h]
  _QWORD v13[42]; // [rsp+50h] [rbp-B0h] BYREF
  HWND v14; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v15[43]; // [rsp+1A8h] [rbp+A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+228h]

  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"UndockedSearchAppExperienceManager_ResetWindowRgn");
  v13[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::`vftable';
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::StartActivity((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn *)v13);
  v11 = 0;
  v12 = 0LL;
  v14 = a2;
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v15,
    (__int64)v13);
  v15[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::`vftable';
  v4 = *((_DWORD *)this + 2);
  v5 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28dd33157ff92f349d65c7c884e47fdb_____lambda_28dd33157ff92f349d65c7c884e47fdb___(
                    &v10,
                    &v14);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(3LL, 2LL, v4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  winrt::check_hresult(&v10, v8, &v11);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::~UndockedSearchAppExperienceManager_ResetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn *)v15);
  if ( !SetPropW(a2, L"UIA_WindowVisibilityOverridden", 0LL) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x1EC,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v9);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::~UndockedSearchAppExperienceManager_ResetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn *)v13);
}
