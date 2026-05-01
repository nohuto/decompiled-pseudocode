/*
 * XREFs of _lambda_5ac696817d9ead6e33159563da3f5a7c_::operator() @ 0x1802364C4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5ac696817d9ead6e33159563da3f5a7c__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x180248220 (std--_Func_impl_no_alloc__lambda_5ac696817d9ead6e33159563da3f5a7c__void_winrt--Wind_ea_180248220.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1800B6A10 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::_optional__anonymous_namespace_::DashboardExtensionVersion_ @ 0x1801B3A48 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--_optional__anonymous_namespace_.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x1801BBA18 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 *     ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1801BDCB0 (-DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$DashboardInteracted@Uguid@winrt@@IAEB_NPEBGPEBGAEAY0L@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEB_N$$QEAPEBG3AEAY0L@$$CBGAEAPEBG@Z @ 0x180693B40 (--$DashboardInteracted@Uguid@winrt@@IAEB_NPEBGPEBGAEAY0L@$$CBGAEAPEBG@DashboardManagerTelemetry@.c)
 *     ?StartSwipe@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@AEBUPoint@Foundation@Windows@3@@Z @ 0x180697F88 (-StartSwipe@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Das.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_5ac696817d9ead6e33159563da3f5a7c_::operator()(__int64 a1, IUnknown **a2)
{
  HRESULT v4; // eax
  const WCHAR *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  int v8; // eax
  HRESULT v9; // eax
  float v10; // xmm1_4
  float v11[2]; // [rsp+40h] [rbp-69h] BYREF
  const WCHAR *v12; // [rsp+48h] [rbp-61h]
  int v13[2]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v14[3]; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v15[64]; // [rsp+70h] [rbp-39h] BYREF
  GUID v16; // [rsp+B0h] [rbp+7h] BYREF
  GUID pguid; // [rsp+C0h] [rbp+17h] BYREF
  _QWORD v18[4]; // [rsp+D0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v14[1] = a2;
  v4 = CoCreateGuid(&pguid);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4D5,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v4);
  std::wstring::wstring(v18, &LocaleName);
  anonymous_namespace_::TryGetAvailableDashboardExtensionVersion((__int64)v15);
  if ( v15[56] )
  {
    v5 = (const WCHAR *)(std::optional__anonymous_namespace_::DashboardExtensionVersion_::value((__int64)v15) + 24);
    if ( *((_QWORD *)v5 + 3) >= 8uLL )
      v5 = *(const WCHAR **)v5;
  }
  else
  {
    v5 = &LocaleName;
  }
  v12 = v5;
  v6 = (_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 40) >= 8uLL )
    v6 = (_QWORD *)*v6;
  *(_QWORD *)v13 = v6;
  v7 = v18;
  if ( v18[3] >= 8uLL )
    v7 = (_QWORD *)v18[0];
  v14[0] = v7;
  LODWORD(v11[0]) = 3;
  v16 = pguid;
  DashboardManagerTelemetry::DashboardInteracted<winrt::guid,unsigned int,bool const &,unsigned short const *,unsigned short const *,unsigned short const (&)[11],unsigned short const * &>(
    (unsigned int)&v16,
    (unsigned int)v11,
    a1 + 48,
    (unsigned int)v14,
    (__int64)v13);
  v8 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DisableWindowHardeningPolicy();
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4DC,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v8);
  v9 = CoAllowSetForegroundWindow(*a2, 0LL);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4DD,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v9);
  v10 = (float)*(int *)(a1 + 12);
  v11[0] = (float)*(int *)(a1 + 8);
  v11[1] = v10;
  v16 = pguid;
  winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>::StartSwipe(
    a2,
    &v16,
    v11);
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)a1 + 152LL),
    (winrt::Windows::Foundation::IUnknown *)a2);
  std::optional__anonymous_namespace_::DashboardExtensionVersion_::_optional__anonymous_namespace_::DashboardExtensionVersion_((__int64)v15);
  std::wstring::_Tidy_deallocate((__int64)v18);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)a2);
}
