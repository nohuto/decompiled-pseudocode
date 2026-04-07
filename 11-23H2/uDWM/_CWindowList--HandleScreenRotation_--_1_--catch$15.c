/*
 * XREFs of _CWindowList::HandleScreenRotation_::_1_::catch$15 @ 0x18010A79F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EDDD4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWindowList::HandleScreenRotation_::_1_::catch_15(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 72),
                            (void *)0x756,
                            (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                            a4);
  return 0LL;
}
