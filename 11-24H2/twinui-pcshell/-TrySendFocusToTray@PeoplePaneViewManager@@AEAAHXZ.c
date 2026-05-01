/*
 * XREFs of ?TrySendFocusToTray@PeoplePaneViewManager@@AEAAHXZ @ 0x180413880
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x180412280 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x180412820 (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1804129F0 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall PeoplePaneViewManager::TrySendFocusToTray(PeoplePaneViewManager *this)
{
  HWND WindowW; // rax

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  return SetForegroundWindow(WindowW);
}
