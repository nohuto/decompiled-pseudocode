/*
 * XREFs of ?DismissRequestedVirtualDesktopSwitcher@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1804A2F58
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_6daa9864e3a60bb25737e1a0d14b42c1___::Invoke @ 0x1804A3170 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1804A3170.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x1804A2CB8 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_InitCoro$2.c)
 */

_BYTE *__fastcall CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher(__int64 a1, _BYTE *a2, __int64 *a3)
{
  void *v6; // rax
  int v8; // [rsp+B8h] [rbp+10h] BYREF

  v6 = operator new(0x70uLL);
  v8 = 0;
  CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher__InitCoro_2(&v8, (__int64)v6, a2, a3, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a2;
}
