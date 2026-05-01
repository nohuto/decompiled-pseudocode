/*
 * XREFs of ?SearchDismissRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801DCBF0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_4d81d6df990b8329ece9e4830fdca620___::Invoke @ 0x1801DCBB0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1801DCBB0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     XamlLauncher::SearchDismissRequested$_InitCoro$2 @ 0x18024C8D4 (XamlLauncher--SearchDismissRequested$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall XamlLauncher::SearchDismissRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  void *v6; // rax
  int v8; // [rsp+128h] [rbp+10h] BYREF

  v6 = operator new(0xE0uLL);
  v8 = 0;
  XamlLauncher::SearchDismissRequested__InitCoro_2(&v8, v6, a2, a3, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
