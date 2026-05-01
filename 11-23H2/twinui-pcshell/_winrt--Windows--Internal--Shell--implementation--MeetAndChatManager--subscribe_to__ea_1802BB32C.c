/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::subscribe_to_services_::_1_::catch$31 @ 0x1802BB32C
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::subscribe_to_services_::_1_::catch_31(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0x1B4,
    (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
    a4);
  return 0LL;
}
