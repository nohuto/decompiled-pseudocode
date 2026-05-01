/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::UpdatePinnedTaskbarItem_::_1_::catch$8 @ 0x1806FD856
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::UpdatePinnedTaskbarItem_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 504),
                            (void *)0x3E2,
                            (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
                            a4);
  return 0LL;
}
