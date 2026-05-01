/*
 * XREFs of _wil::details::CallAndHandleErrorsWithReturnType_void__lambda_e369aae3ebba8282559023f1a5b0b63f__&_long_&_0__::_1_::catch$0 @ 0x1806ECD46
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details::CallAndHandleErrorsWithReturnType_void__lambda_e369aae3ebba8282559023f1a5b0b63f____long___0__::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x59F,
                           (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
                           a4);
  return 0LL;
}
