/*
 * XREFs of ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18024C110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E8988 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?IsStartScreenFilterEnabled@@YA_NXZ @ 0x1801045B4 (-IsStartScreenFilterEnabled@@YA_NXZ.c)
 *     ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180146358 (-InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experien.c)
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18016C510 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1801C1550 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___ @ 0x1801F2218 (Windows--Internal--ComTaskPool--QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___.c)
 *     ?IsRemoteAppSession@@YA_NXZ @ 0x18020BDA8 (-IsRemoteAppSession@@YA_NXZ.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180219870 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ @ 0x18022C5BC (-InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ.c)
 *     ?InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180232A08 (-InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Exper.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1802409D0 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?ReportVisibilityForMonitor@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180240A10 (-ReportVisibilityForMonitor@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoord.c)
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18024AF10 (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 *     ?IsBootToCloudPCSession@@YA_NXZ @ 0x18024B71C (-IsBootToCloudPCSession@@YA_NXZ.c)
 *     ?OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x18024BE30 (-OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     ??$Start@$$V@PerformDelayedInitialization@StartWindowTelemetry@@SA?AV01@XZ @ 0x1802C85D8 (--$Start@$$V@PerformDelayedInitialization@StartWindowTelemetry@@SA-AV01@XZ.c)
 *     ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x1802CCC1C (--1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x18045EEC8 (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@QEAA_NXZ @ 0x1804617B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::PerformDelayedInitialization(XamlLauncher *this)
{
  PerSessionState *v2; // rcx
  HRESULT v3; // eax
  unsigned int v4; // ebx
  HRESULT Service; // eax
  __int64 v6; // rdx
  int started; // esi
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int8 v10; // al
  char v11; // bl
  DWORD v12; // edx
  struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *v14; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  void *ppvOut; // [rsp+58h] [rbp-B0h] BYREF
  HMONITOR v17; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v18[336]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  StartWindowTelemetry::PerformDelayedInitialization::Start<>((StartWindowTelemetry::PerformDelayedInitialization *)v18);
  *((_BYTE *)this + 296) = IsStartScreenFilterEnabled();
  *((_BYTE *)this + 298) = IsRemoteAppSession();
  *((_BYTE *)this + 299) = IsBootToCloudPCSession();
  if ( !PerSessionState::HasLoginCompleted(v2) )
    SetWinEventHook(0x20u, 0x20u, 0LL, XamlLauncher::s_LauncherDesktopSwitchEventProc, 0, 0, 0);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v3 = IUnknown_QueryService(
         *((IUnknown **)this - 5),
         &IID_IRealmActivationHistory,
         &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
         &ppvOut);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E0,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_26;
  }
  v14 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  Service = XamlLauncher::QueryService(
              (XamlLauncher *)((char *)this - 8),
              &stru_1807A6BA0,
              &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
              (void **)&v14);
  v4 = Service;
  if ( Service < 0 )
  {
    v6 = 741LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)Service);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    goto LABEL_26;
  }
  started = XamlLauncher::InitializeStartExperienceManager((XamlLauncher *)((char *)this - 56), v14);
  if ( started < 0 )
  {
    v8 = 743LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)started);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    v4 = started;
    goto LABEL_26;
  }
  started = XamlLauncher::InitializeCortanaExperienceManager((XamlLauncher *)((char *)this - 56), v14);
  if ( started < 0 )
  {
    v8 = 746LL;
    goto LABEL_10;
  }
  started = XamlLauncher::InitializeAutomaticInvokeTrackingInformation((XamlLauncher *)((char *)this - 56));
  if ( started < 0 )
  {
    v8 = 748LL;
    goto LABEL_10;
  }
  started = XamlLauncher::InitializeJumpViewExperienceManager((XamlLauncher *)((char *)this - 56), v14);
  if ( started < 0 )
  {
    v8 = 751LL;
    goto LABEL_10;
  }
  v9 = XamlLauncher::InitializeHolographicContextIdentifier((XamlLauncher *)((char *)this - 56));
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2F2,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v9);
  Service = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, unsigned __int64))(**((_QWORD **)this + 40) + 24LL))(
              *((_QWORD *)this + 40),
              *((_QWORD *)this + 14),
              *((_QWORD *)this + 15),
              ppvOut,
              ((unsigned __int64)this + 16) & -(__int64)(this != (XamlLauncher *)56));
  v4 = Service;
  if ( Service < 0 )
  {
    v6 = 756LL;
    goto LABEL_7;
  }
  Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___();
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 128LL))(*((_QWORD *)this + 40));
  XamlLauncher::OnFindInStartVisibilityChanged((XamlLauncher *)((char *)this + 16), v10);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 136LL))(*((_QWORD *)this + 40));
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59342962>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59342962>::GetImpl'::`2'::impl) )
  {
    v17 = 0LL;
    XamlLauncher::GetCortanaVisibleMonitor((XamlLauncher *)((char *)this + 8), &v17);
    v12 = (unsigned int)v17;
    if ( v17 )
    {
      LODWORD(v15) = v11 == 0;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
        (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 46,
        (__int64)v17,
        (unsigned int *)&v15);
    }
  }
  else
  {
    LODWORD(v15) = v11 == 0;
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
      (__int64 *)this + 46,
      (unsigned int *)&v15);
  }
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v18, v12);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  v4 = 0;
LABEL_26:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  StartWindowTelemetry::PerformDelayedInitialization::~PerformDelayedInitialization((StartWindowTelemetry::PerformDelayedInitialization *)v18);
  return v4;
}
