/*
 * XREFs of _CVirtualDesktopManager::SwitchDesktopAndMoveForegroundViewInternal_::_1_::catch$4 @ 0x1806F2A3E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CVirtualDesktopManager::SwitchDesktopAndMoveForegroundViewInternal_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x2D6,
                           (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
                           a4);
  return 0LL;
}
