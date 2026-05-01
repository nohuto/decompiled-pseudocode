/*
 * XREFs of _lambda_7d1ec51457c6f4a16e47004bf1a5163f_::operator() @ 0x1805CC1F8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7d1ec51457c6f4a16e47004bf1a5163f__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1805DAD80 (std--_Func_impl_no_alloc__lambda_7d1ec51457c6f4a16e47004bf1a5163f__void_winrt--Wind_ea_1805DAD80.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?SetStartUpEvent@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@AEBW4StartUpEvent@Dashboard@Shell@UI@WindowsUdk@3@@Z @ 0x180275CA8 (-SetStartUpEvent@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtensio.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_7d1ec51457c6f4a16e47004bf1a5163f_::operator()(unsigned int *a1, __int64 *a2)
{
  HRESULT v4; // eax
  GUID pguid; // [rsp+28h] [rbp-28h] BYREF
  GUID v6; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  pguid = 0LL;
  v4 = CoCreateGuid(&pguid);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xABD,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v4);
  v6 = pguid;
  winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>::SetStartUpEvent(
    a2,
    (__int128 *)&v6,
    a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a2);
}
