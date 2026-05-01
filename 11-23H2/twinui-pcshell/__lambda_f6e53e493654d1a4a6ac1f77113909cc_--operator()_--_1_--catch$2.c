/*
 * XREFs of __lambda_f6e53e493654d1a4a6ac1f77113909cc_::operator()_::_1_::catch$2 @ 0x1802504FC
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_f6e53e493654d1a4a6ac1f77113909cc_::operator()_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x27C,
    (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
    a4);
  return 0LL;
}
