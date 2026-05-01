/*
 * XREFs of _XamlLauncher::PublishServices_::_1_::catch$30 @ 0x1806EC85C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlLauncher::PublishServices_::_1_::catch_30(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 224) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 216),
                            (void *)0x29A,
                            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                            a4);
  return 0LL;
}
