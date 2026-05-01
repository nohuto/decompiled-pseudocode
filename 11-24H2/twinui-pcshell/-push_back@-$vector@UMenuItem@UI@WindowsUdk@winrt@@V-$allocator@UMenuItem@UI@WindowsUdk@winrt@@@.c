/*
 * XREFs of ?push_back@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAAX$$QEAUMenuItem@UI@WindowsUdk@winrt@@@Z @ 0x1806037AC
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180600D50 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // r9
  _QWORD *result; // rax

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 == *(_QWORD **)(a1 + 16) )
    return std::vector<winrt::WindowsUdk::UI::MenuItem>::_Emplace_reallocate<winrt::WindowsUdk::UI::MenuItem>(
             a1,
             *(__int64 **)(a1 + 8),
             a2);
  result = (_QWORD *)*a2;
  *a2 = 0LL;
  *v2 = result;
  *(_QWORD *)(a1 + 8) += 8LL;
  return result;
}
