/*
 * XREFs of ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18024D6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180070E3C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E8988 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x1800EE660 (-SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?UninitializeStartExperienceManager@XamlLauncher@@AEAAXXZ @ 0x1801466F0 (-UninitializeStartExperienceManager@XamlLauncher@@AEAAXXZ.c)
 *     ?reset@?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAXPEAVFocusHoldingTank@@@Z @ 0x1801468D0 (-reset@-$unique_ptr@VFocusHoldingTank@@U-$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA.c)
 *     ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x18014692C (-InternalRelease@-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ @ 0x18024D454 (-UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ.c)
 *     ??$As@UIObjectWithSite@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectWithSite@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C2298 (--$As@UIObjectWithSite@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComP.c)
 *     ??$Start@$$V@UnsubscribeFromServices@StartWindowTelemetry@@SA?AV01@XZ @ 0x1802C8738 (--$Start@$$V@UnsubscribeFromServices@StartWindowTelemetry@@SA-AV01@XZ.c)
 *     ??1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ @ 0x1802CC880 (--1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::UnsubscribeFromServices(XamlLauncher *this, struct IServiceProvider *a2)
{
  DWORD v3; // edx
  ImmersiveMonitorHelper *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  void *ppvOut[2]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v13[336]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  StartWindowTelemetry::UnsubscribeFromServices::Start<>((StartWindowTelemetry::UnsubscribeFromServices *)v13);
  if ( *((_QWORD *)this + 35) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 56LL))(*((_QWORD *)this + 33));
    *((_QWORD *)this + 35) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 33);
  if ( *((_QWORD *)this + 36) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 56LL))(*((_QWORD *)this + 34));
    *((_QWORD *)this + 36) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 34);
  if ( *((_DWORD *)this + 39) )
  {
    ppvOut[0] = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
    if ( IUnknown_QueryService(
           *((IUnknown **)this - 5),
           (const GUID *const)&SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           ppvOut) >= 0 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut[0] + 32LL))(ppvOut[0], *((unsigned int *)this + 39));
      *((_DWORD *)this + 39) = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (void (__fastcall ****)(_QWORD, __int64))this + 13,
    0LL);
  wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::reset(
    (FocusHoldingTank **)this + 12,
    0LL);
  XamlLauncher::UninitializeStartExperienceManager((XamlLauncher *)((char *)this - 56));
  XamlLauncher::UninitializeCortanaExperienceManager((XamlLauncher *)((char *)this - 56));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 17);
  v4 = (ImmersiveMonitorHelper *)*((_QWORD *)this + 18);
  if ( !v4 )
  {
LABEL_13:
    v8 = *((_QWORD *)this + 40);
    if ( v8 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 1041LL;
        goto LABEL_16;
      }
      ppvOut[0] = 0LL;
      v9 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IObjectWithSite>((char *)this + 320, ppvOut);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 1043LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
        goto LABEL_24;
      }
      v9 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut[0] + 24LL))(ppvOut[0], 0LL);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 1044LL;
        goto LABEL_19;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 40);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
    }
    wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13, v3);
    v6 = 0;
    goto LABEL_24;
  }
  v5 = ImmersiveMonitorHelper::SetSite(v4, 0LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease((volatile int **)this + 18);
    goto LABEL_13;
  }
  v7 = 1035LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v5);
LABEL_24:
  StartWindowTelemetry::UnsubscribeFromServices::~UnsubscribeFromServices((StartWindowTelemetry::UnsubscribeFromServices *)v13);
  return v6;
}
