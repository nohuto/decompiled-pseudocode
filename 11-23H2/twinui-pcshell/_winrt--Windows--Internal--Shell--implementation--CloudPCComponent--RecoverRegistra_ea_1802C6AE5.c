/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::RecoverRegistrationData_::_1_::catch$62 @ 0x1802C6AE5
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::RecoverRegistrationData_::_1_::catch_62(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 1832),
    (void *)0x12E,
    (unsigned int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
    a4);
  return 0LL;
}
