/*
 * XREFs of ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180283A40
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x1800D3330 (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     ?SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA?AU?$pair@UIInspectable@Foundation@Windows@winrt@@Uevent_token@4@@std@@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@@Z @ 0x1801B8C10 (-SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA-AU-$pair@UIInspectable@Foundation@Wind.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AugmentedEntryPoint@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801E4E40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AugmentedEntryPoint@@@details@wil@@QEAAX_.c)
 *     ?VerifyAndActivateAppAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18021CFFC (-VerifyAndActivateAppAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x18022032C (-RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18023B6DC (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180275CF8 (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4SessionType@123456@@Z @ 0x1802948A0 (-UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingChanged@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A6F48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingCh.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CE3EC (--0bad_alloc@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_d5b01ac3cd59fca883f981d906b097ab___ @ 0x1805C262C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspectable_winrt--hs.c)
 *     ??$DashboardManager_BrokerCallerValueError@AEAJ@DashboardManagerTelemetry@@SAXAEAJ@Z @ 0x1805C3344 (--$DashboardManager_BrokerCallerValueError@AEAJ@DashboardManagerTelemetry@@SAXAEAJ@Z.c)
 *     ??$DashboardManager_LogBrokerCallerValue@_NAEAY0BAA@G@DashboardManagerTelemetry@@SAX$$QEA_NAEAY0BAA@G@Z @ 0x1805C3388 (--$DashboardManager_LogBrokerCallerValue@_NAEAY0BAA@G@DashboardManagerTelemetry@@SAX$$QEA_NAEAY0.c)
 *     ?DashboardManager_BrokerCallerValueNotSet@DashboardManagerTelemetry@@SAXXZ @ 0x1805CE458 (-DashboardManager_BrokerCallerValueNotSet@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58311344@@@details@wil@@QEAA_NXZ @ 0x1805DB330 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_58311344@@@details@wil@@QEAA_NXZ.c)
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1805DE25C (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  volatile signed __int64 *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 weak_ref; // rax
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 *v9; // rbx
  LSTATUS USValueW; // eax
  DashboardTaskbarSettings *v11; // rcx
  bool v12[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  DWORD pcbData[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  __int128 v18; // [rsp+70h] [rbp-90h]
  _BYTE pExceptionObject[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE pvData[512]; // [rsp+A0h] [rbp-60h] BYREF

  pcbData[0] = 0;
  v2 = (volatile signed __int64 *)((char *)this - 24);
  winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync(
    (__int64)this - 24,
    (__int64)v12);
  winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync(v2, v12, 0LL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AugmentedEntryPoint>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_AugmentedEntryPoint>::GetImpl'::`2'::impl,
    1u,
    v3,
    v4);
  if ( !winrt::Windows::Internal::Shell::implementation::DashboardManager::ShouldDeferWidgetsInitialization() )
    winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent((__int64)v2, (__int64)v12, 1);
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingChanged>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingChanged>::GetImpl'::`2'::impl,
    v5);
  weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(v2 + 7);
  if ( !weak_ref )
  {
    std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v16 = weak_ref;
  v15 = 0LL;
  pcbData[0] = 2;
  LODWORD(v17) = 0;
  v18 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, &v15);
  winrt::check_hresult(&v13, v7, &v17);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v16);
  v8 = v15;
  v15 = 0LL;
  v16 = v8;
  *(_QWORD *)pcbData = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_d5b01ac3cd59fca883f981d906b097ab___(
    &v13,
    pcbData);
  v9 = DashboardTaskbarSettings::SubscribeToDaSettingChanged(&v17, (__int64)&v13);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 31, v9);
  *((_QWORD *)this + 32) = v9[1];
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  if ( v13 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
  lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(&v16);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_58311344>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_58311344>::GetImpl'::`2'::impl) )
  {
    memset_0(pvData, 0, sizeof(pvData));
    pcbData[0] = 512;
    USValueW = SHRegGetUSValueW(
                 L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
                 L"BrokerCaller",
                 0LL,
                 pvData,
                 pcbData,
                 0,
                 0LL,
                 0);
    LODWORD(v13) = USValueW;
    if ( USValueW )
    {
      if ( USValueW == 2 )
        DashboardManagerTelemetry::DashboardManager_BrokerCallerValueNotSet();
      else
        DashboardManagerTelemetry::DashboardManager_BrokerCallerValueError<long &>(&v13);
    }
    else
    {
      v12[0] = DashboardTaskbarSettings::GetDashboardButtonEnabled(v11);
      DashboardManagerTelemetry::DashboardManager_LogBrokerCallerValue<bool,unsigned short (&)[256]>(v12, pvData);
    }
  }
}
