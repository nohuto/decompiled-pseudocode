/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow_::_1_::catch$34 @ 0x1806CC9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow_::_1_::catch_34(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 248),
    (void *)0xAD,
    (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
    a4);
  return 0LL;
}
