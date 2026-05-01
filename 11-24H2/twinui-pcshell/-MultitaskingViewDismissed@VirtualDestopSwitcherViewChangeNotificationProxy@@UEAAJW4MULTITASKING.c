/*
 * XREFs of ?MultitaskingViewDismissed@VirtualDestopSwitcherViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802260F0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802C7844 (--R-$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@.c)
 */

__int64 __fastcall VirtualDestopSwitcherViewChangeNotificationProxy::MultitaskingViewDismissed(
        __int64 a1,
        char a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    if ( (a2 & 0x10) != 0 )
      std::_Func_class<void,enum winrt::WindowsUdk::UI::Shell::ViewVisibility>::operator()(a1 + 160, 1LL);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x96,
                           (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                           a4);
  }
  return result;
}
