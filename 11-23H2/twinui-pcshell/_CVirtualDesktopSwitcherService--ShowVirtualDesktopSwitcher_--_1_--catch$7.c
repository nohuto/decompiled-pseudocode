/*
 * XREFs of _CVirtualDesktopSwitcherService::ShowVirtualDesktopSwitcher_::_1_::catch$7 @ 0x18054A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CVirtualDesktopSwitcherService::ShowVirtualDesktopSwitcher_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0x4D,
                           (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
                           a4);
  return 0LL;
}
