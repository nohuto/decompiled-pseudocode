/*
 * XREFs of _CWindowList::StyleChange_::_1_::catch$12 @ 0x180067BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EDDD4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWindowList::StyleChange_::_1_::catch_12(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 296) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 280),
                            (void *)0x10E9,
                            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                            a4);
  return 0LL;
}
