/*
 * XREFs of _lambda_e4e3b38ea4e4911517cc25fd51baafe0_::operator() @ 0x1805CCC08
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e4e3b38ea4e4911517cc25fd51baafe0__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1805DADF0 (std--_Func_impl_no_alloc__lambda_e4e3b38ea4e4911517cc25fd51baafe0__void_winrt--Wind_ea_1805DADF0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?IsPrelaunchEnabled@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180275888 (-IsPrelaunchEnabled@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExten.c)
 *     ?PrelaunchDelay@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802759C8 (-PrelaunchDelay@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExtension.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE34 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_e4e3b38ea4e4911517cc25fd51baafe0_::operator()(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  void (__fastcall ***v3)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *); // rcx
  bool v4; // di
  unsigned int v5; // eax
  unsigned int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 Data; // [rsp+50h] [rbp+20h] BYREF
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v9; // [rsp+58h] [rbp+28h]
  __int64 lpData; // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  v9 = a2;
  Data = a1;
  v3 = *(void (__fastcall ****)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *))a2;
  Data = 0LL;
  v4 = 0;
  if ( v3 )
  {
    (**v3)(
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v3,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension2>,
      &Data);
    if ( Data )
      v4 = 1;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&Data);
  if ( v4 )
  {
    LODWORD(Data) = (unsigned __int8)winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::IsPrelaunchEnabled((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2);
    v5 = RegSetKeyValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
           L"IsPrelaunchEnabled",
           4u,
           &Data,
           4u);
    if ( v5 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        2823LL,
        (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)v5);
    lpData = *winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::PrelaunchDelay(
                (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2,
                &v11)
           / 10000LL;
    v6 = RegSetKeyValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
           L"PrelaunchDelay",
           0xBu,
           &lpData,
           8u);
    if ( v6 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        2827LL,
        (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)v6);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
}
