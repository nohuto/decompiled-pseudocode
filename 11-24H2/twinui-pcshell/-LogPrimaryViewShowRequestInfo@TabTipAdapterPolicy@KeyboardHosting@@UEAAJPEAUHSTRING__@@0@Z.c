/*
 * XREFs of ?LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180486A90
 * Callers:
 *     <none>
 * Callees:
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180050094 (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x180050E68 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007EA0C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CFE14 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ?GetApplication@?$consume_Windows_Internal_StateRepository_IApplicationExtension@UIApplicationExtension@StateRepository@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18020CC78 (-GetApplication@-$consume_Windows_Internal_StateRepository_IApplicationExtension@UIApplicationEx.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180240684 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetMonitorRect@MonitorInformation@KeyboardHosting@@QEBA?AURect@Foundation@Windows@@XZ @ 0x18047A238 (-GetMonitorRect@MonitorInformation@KeyboardHosting@@QEBA-AURect@Foundation@Windows@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     ??$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEBU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_N_N_N_N_NPEBGPEBGPEBGPEBGPEBGPEBGPEBGPEBG_NAEA_NAEAU?$atomic@_N@std@@HAEA_N@TouchKeyboardTelemetry@@SAX$$QEAPEBG0AEAY07$$CBGAEAURect@Foundation@Windows@@AEBU123@1AEBU_GUID@@$$QEA_N555AEB_N65555000000005AEA_NAEAU?$atomic@_N@std@@$$QEAH7@Z @ 0x180484B98 (--$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEBU123@AEAY07$$CBGAEBU_GUI.c)
 *     ?GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA?AUDigitizerState@2@XZ @ 0x18048596C (-GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA-AUDigitizerState@2@XZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::LogPrimaryViewShowRequestInfo(
        KeyboardHosting::TabTipAdapterPolicy *this,
        HSTRING a2,
        HSTRING a3)
{
  char v6; // r8
  __int64 v7; // r9
  __int128 *MonitorRect; // rax
  const unsigned __int16 *v9; // rax
  winrt::hstring *v10; // rax
  winrt::hstring *v11; // rax
  winrt::hstring *v12; // rax
  winrt::hstring *Application; // rax
  winrt::hstring *View; // rax
  winrt::hstring *v15; // rax
  winrt::hstring *v16; // rax
  __int64 v17; // r8
  __int64 v19; // [rsp+28h] [rbp-148h]
  __int64 v20; // [rsp+30h] [rbp-140h]
  bool v21; // [rsp+F0h] [rbp-80h] BYREF
  bool v22; // [rsp+F1h] [rbp-7Fh] BYREF
  bool v23; // [rsp+F2h] [rbp-7Eh] BYREF
  bool v24; // [rsp+F3h] [rbp-7Dh] BYREF
  bool v25; // [rsp+F4h] [rbp-7Ch] BYREF
  bool v26; // [rsp+F5h] [rbp-7Bh] BYREF
  bool v27; // [rsp+F6h] [rbp-7Ah] BYREF
  bool v28; // [rsp+F7h] [rbp-79h] BYREF
  bool v29; // [rsp+F8h] [rbp-78h] BYREF
  bool v30; // [rsp+FCh] [rbp-74h] BYREF
  bool v31; // [rsp+FDh] [rbp-73h] BYREF
  int v32; // [rsp+100h] [rbp-70h] BYREF
  const unsigned __int16 *v33; // [rsp+108h] [rbp-68h] BYREF
  const unsigned __int16 *v34; // [rsp+110h] [rbp-60h] BYREF
  const unsigned __int16 *v35; // [rsp+118h] [rbp-58h] BYREF
  const unsigned __int16 *v36; // [rsp+120h] [rbp-50h] BYREF
  const unsigned __int16 *v37; // [rsp+128h] [rbp-48h] BYREF
  const unsigned __int16 *v38; // [rsp+130h] [rbp-40h] BYREF
  const unsigned __int16 *v39; // [rsp+138h] [rbp-38h] BYREF
  const unsigned __int16 *v40; // [rsp+140h] [rbp-30h] BYREF
  PCWSTR StringRawBuffer; // [rsp+148h] [rbp-28h] BYREF
  PCWSTR v42; // [rsp+150h] [rbp-20h] BYREF
  volatile signed __int32 *v43; // [rsp+158h] [rbp-18h] BYREF
  volatile signed __int32 *v44; // [rsp+160h] [rbp-10h] BYREF
  volatile signed __int32 *v45; // [rsp+168h] [rbp-8h] BYREF
  volatile signed __int32 *v46; // [rsp+170h] [rbp+0h] BYREF
  volatile signed __int32 *v47; // [rsp+178h] [rbp+8h] BYREF
  volatile signed __int32 *v48; // [rsp+180h] [rbp+10h] BYREF
  __int128 v49; // [rsp+188h] [rbp+18h] BYREF
  __int128 v50; // [rsp+198h] [rbp+28h] BYREF

  KeyboardHosting::TabTipAdapterPolicy::GetDigitizerState((__int64)this, (char *)&v30);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    MonitorRect = KeyboardHosting::MonitorInformation::GetMonitorRect((__int64)this + 216, &v50);
  }
  else
  {
    v49 = *((_OWORD *)this + 14);
    MonitorRect = &v49;
  }
  v50 = *MonitorRect;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
    1u,
    v6,
    v7);
  v32 = *((unsigned __int8 *)this + 849);
  v21 = 0;
  v9 = (const unsigned __int16 *)((char *)this + 912);
  if ( *((_QWORD *)this + 117) > 7uLL )
    v9 = *(const unsigned __int16 **)v9;
  v33 = v9;
  v10 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
                            (__int64 **)this + 108,
                            &v49);
  v34 = winrt::hstring::c_str(v10);
  v11 = (winrt::hstring *)winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
                            (__int64 **)this + 108,
                            &v48);
  v35 = winrt::hstring::c_str(v11);
  v12 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
                            (__int64 **)this + 108,
                            &v47);
  v36 = winrt::hstring::c_str(v12);
  Application = (winrt::hstring *)winrt::impl::consume_Windows_Internal_StateRepository_IApplicationExtension<winrt::Windows::Internal::StateRepository::IApplicationExtension>::GetApplication(
                                    (__int64 **)this + 108,
                                    &v46);
  v37 = winrt::hstring::c_str(Application);
  View = (winrt::hstring *)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
                             (__int64 **)this + 108,
                             &v45);
  v38 = winrt::hstring::c_str(View);
  v15 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                            (__int64 **)this + 108,
                            &v44);
  v39 = winrt::hstring::c_str(v15);
  v16 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                            (__int64 **)this + 108,
                            &v43);
  v40 = winrt::hstring::c_str(v16);
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v42 = WindowsGetStringRawBuffer(a2, 0LL);
  TouchKeyboardTelemetry::HostInvokedMethod<unsigned short const *,unsigned short const *,unsigned short const (&)[8],Windows::Foundation::Rect &,Windows::Foundation::Rect const &,unsigned short const (&)[8],_GUID const &,bool,bool,bool,bool,bool const &,bool const &,bool,bool,bool,bool,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,bool &,std::atomic<bool> &,int,bool &>(
    &v42,
    &StringRawBuffer,
    v17,
    (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 128),
    (struct Windows::Foundation::Rect *)&v50,
    v19,
    v20,
    &v29,
    &v28,
    &v27,
    &v26,
    &v30,
    &v31,
    &v25,
    &v24,
    &v23,
    &v22,
    &v40,
    &v39,
    &v38,
    &v37,
    &v36,
    &v35,
    &v34,
    &v33,
    &v21,
    (char *)this + 850,
    (char *)this + 857,
    &v32,
    (char *)this + 848);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v44);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v45);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v46);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v47);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v48);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v49);
  return 0LL;
}
