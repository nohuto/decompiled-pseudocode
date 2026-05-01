/*
 * XREFs of _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$22 @ 0x180257EAA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@XZ @ 0x1802E8DC8 (--1-$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1_::_1_::dtor_22(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 280) = *(_QWORD *)(a2 + 384) + 576LL;
  return winrt::param::vector<winrt::WindowsUdk::UI::MenuItem>::~vector<winrt::WindowsUdk::UI::MenuItem>(*(_QWORD *)(a2 + 280));
}
