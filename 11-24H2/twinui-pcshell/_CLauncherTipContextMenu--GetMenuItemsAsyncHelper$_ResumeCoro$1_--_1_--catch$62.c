/*
 * XREFs of _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::catch$62 @ 0x1806FF069
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1_::_1_::catch_62(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 504),
    (void *)0x71B,
    (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
    a4);
  return 0LL;
}
