/*
 * XREFs of __lambda_65776acf8dfa6fe29cb3050938b98b74_::operator()_::_1_::catch$6 @ 0x1800FA910
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EDDD4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_65776acf8dfa6fe29cb3050938b98b74_::operator()_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x68,
                           (int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.toplevelwindow3dwrapper.cpp",
                           a4);
  return 0LL;
}
