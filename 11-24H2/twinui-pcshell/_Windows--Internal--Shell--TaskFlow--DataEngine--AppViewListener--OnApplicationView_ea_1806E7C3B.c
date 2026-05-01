/*
 * XREFs of _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged_::_1_::catch$7 @ 0x1806E7C3B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x9F,
                           (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                           a4);
  return 0LL;
}
