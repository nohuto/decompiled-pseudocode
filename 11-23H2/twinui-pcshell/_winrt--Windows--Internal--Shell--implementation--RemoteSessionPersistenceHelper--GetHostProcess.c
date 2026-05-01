/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetHostProcessDataFromStorage_::_1_::catch$4 @ 0x180280381
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetHostProcessDataFromStorage_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rax

  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 1240),
    (void *)0xE1,
    (unsigned int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
    a4);
  v5 = *(_QWORD **)(a2 + 112);
  *v5 = 0LL;
  v5[1] = 0LL;
  return 0LL;
}
