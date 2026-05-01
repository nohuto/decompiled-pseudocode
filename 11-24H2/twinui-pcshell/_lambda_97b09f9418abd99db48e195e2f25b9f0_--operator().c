/*
 * XREFs of _lambda_97b09f9418abd99db48e195e2f25b9f0_::operator() @ 0x1805CC3E4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_97b09f9418abd99db48e195e2f25b9f0__void_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_const_&_::_Do_call @ 0x1805DADB0 (std--_Func_impl_no_alloc__lambda_97b09f9418abd99db48e195e2f25b9f0__void_winrt--Wind_ea_1805DADB0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800566E4 (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180240684 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$PackageInstalledResultWEP@H@DashboardManagerTelemetry@@SAX$$QEAH@Z @ 0x1805C3504 (--$PackageInstalledResultWEP@H@DashboardManagerTelemetry@@SAX$$QEAH@Z.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@0@XZ @ 0x1805C4F48 (--$open@V-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CAEE8 (--1-$com_ptr_t@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CB2F0 (--1-$test_data_control@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@detai.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@1@XZ @ 0x1805CB75C (--C-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@.c)
 *     ?WasPreviouslyInstalled@WebExperiencePackageHelper@@QEAAX_N@Z @ 0x1805DA774 (-WasPreviouslyInstalled@WebExperiencePackageHelper@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_97b09f9418abd99db48e195e2f25b9f0_::operator()(__int64 a1, __int64 **a2)
{
  int v2; // ebx
  void *v3; // [rsp+20h] [rbp-39h] BYREF
  void *v4; // [rsp+28h] [rbp-31h] BYREF
  __int64 v5[3]; // [rsp+30h] [rbp-29h] BYREF
  int v6; // [rsp+48h] [rbp-11h]
  const wchar_t *v7; // [rsp+50h] [rbp-9h]
  __int64 v8; // [rsp+58h] [rbp-1h]
  const wchar_t *v9; // [rsp+60h] [rbp+7h]
  __int64 v10; // [rsp+68h] [rbp+Fh]
  _OWORD v11[2]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v12; // [rsp+90h] [rbp+37h]

  winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
    a2,
    v5);
  v2 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(v5);
  v6 = 0;
  v7 = L"9MSSGKG348SP";
  v8 = 12LL;
  v9 = L"MicrosoftWindows.Client.WebExperience_cw5n1h2txyewy";
  v10 = 51LL;
  v11[0] = 0LL;
  v11[1] = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v11[0]) = 0;
  v12 = 0x826144020CLL;
  v5[2] = (__int64)&WebExperiencePackageHelper::`vftable';
  WebExperiencePackageHelper::WasPreviouslyInstalled(0LL, v2 == 6);
  std::wstring::_Tidy_deallocate((void **)v11);
  tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>>(&v4);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::operator->(
                 (__int64)&v4,
                 (__int64 *)&v3)
            + 288) = v2;
  tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::~test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>(&v3);
  LODWORD(v3) = v2;
  DashboardManagerTelemetry::PackageInstalledResultWEP<int>((int *)&v3);
  wil::com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>(&v4);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v5);
}
