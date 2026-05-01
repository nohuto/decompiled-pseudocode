/*
 * XREFs of __lambda_8f44ff5c8977fc530aba29e054e0c967_::operator()_winrt::Windows::Foundation::IInspectable__::_1_::catch$2 @ 0x18022EEA7
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_8f44ff5c8977fc530aba29e054e0c967_::operator()_winrt::Windows::Foundation::IInspectable__::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x283,
    (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    a4);
  return 0LL;
}
