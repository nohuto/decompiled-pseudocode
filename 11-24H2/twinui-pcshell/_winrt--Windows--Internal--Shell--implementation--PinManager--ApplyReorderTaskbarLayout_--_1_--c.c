/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::ApplyReorderTaskbarLayout_::_1_::catch$0 @ 0x1806FCE52
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ApplyReorderTaskbarLayout_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 72),
                            (void *)0x3C5,
                            (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
                            a4);
  return 0LL;
}
