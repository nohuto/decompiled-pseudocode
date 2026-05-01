/*
 * XREFs of _TaskViewHost::ViewVirtualDesktopChanged_::_1_::catch$13 @ 0x180705385
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TaskViewHost::ViewVirtualDesktopChanged_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x1F5,
                            (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                            a4);
  return 0LL;
}
