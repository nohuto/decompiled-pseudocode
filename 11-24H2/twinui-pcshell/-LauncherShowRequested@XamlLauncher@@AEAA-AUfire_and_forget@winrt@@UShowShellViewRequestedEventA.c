/*
 * XREFs of ?LauncherShowRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801DDAD0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_0f59bd4c249e80fc849f8df850cac31c___::Invoke @ 0x1801DDA90 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1801DDA90.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     XamlLauncher::LauncherShowRequested$_InitCoro$2 @ 0x18024B804 (XamlLauncher--LauncherShowRequested$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall XamlLauncher::LauncherShowRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  unsigned int v6; // eax
  int v8; // [rsp+108h] [rbp+10h] BYREF

  v6 = (unsigned int)operator new(0xC0uLL);
  v8 = 0;
  XamlLauncher::LauncherShowRequested__InitCoro_2((unsigned int)&v8, v6, a2, (_DWORD)a3, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
