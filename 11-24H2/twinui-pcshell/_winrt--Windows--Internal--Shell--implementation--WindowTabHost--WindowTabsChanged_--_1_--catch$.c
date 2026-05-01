/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabsChanged_::_1_::catch$5 @ 0x1806D7D8D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabsChanged_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0xBB,
    (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
    a4);
  return 0LL;
}
