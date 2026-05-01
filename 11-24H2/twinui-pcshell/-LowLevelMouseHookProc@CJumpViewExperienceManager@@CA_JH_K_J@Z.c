/*
 * XREFs of ?LowLevelMouseHookProc@CJumpViewExperienceManager@@CA_JH_K_J@Z @ 0x180394C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z @ 0x18004DE48 (--0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z.c)
 *     ??0DismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x180211CEC (--0DismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?TryDismissAsync@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUDismissShellViewOptions@Shell@UI@WindowsUdk@3@@Z @ 0x180396358 (-TryDismissAsync@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shel.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall CJumpViewExperienceManager::LowLevelMouseHookProc(int code, WPARAM wParam, LPARAM lParam)
{
  int v7; // [rsp+20h] [rbp-50h] BYREF
  struct tagPOINT Point; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v9[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-38h] BYREF
  RECT rc; // [rsp+40h] [rbp-30h] BYREF
  RECT v12; // [rsp+50h] [rbp-20h] BYREF

  Point = 0LL;
  GetCursorPos(&Point);
  rc = *(RECT *)((char *)&g_hoverState + 4);
  v12 = *(RECT *)((char *)&xmmword_1808CAC60 + 4);
  if ( !qword_1808CAC78 )
    qword_1808CAC78 = GetTickCount64();
  if ( code >= 0 && wParam == 514 )
    *(&g_hoverState + 1) = 1;
  if ( PtInRect(&rc, Point) )
  {
    g_hoverState = 1;
  }
  else if ( g_hoverState || !PtInRect(&v12, Point) && GetTickCount64() - qword_1808CAC78 > 0xFA )
  {
    *(&g_hoverState + 1) = 1;
  }
  if ( *(&g_hoverState + 1) )
  {
    v7 = 18;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
      (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v10,
      (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v7);
    winrt::WindowsUdk::UI::Shell::DismissShellViewOptions::DismissShellViewOptions((winrt::WindowsUdk::UI::Shell::DismissShellViewOptions *)v9);
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::TryDismissAsync(
      v10,
      &v7,
      v9);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v9);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v10);
  }
  return CallNextHookEx(0LL, code, wParam, lParam);
}
