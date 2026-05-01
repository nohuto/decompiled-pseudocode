/*
 * XREFs of _CMultitaskingViewManager::RuntimeClassInitialize_::_1_::catch$58 @ 0x1806D69E1
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CMultitaskingViewManager::RuntimeClassInitialize_::_1_::catch_58(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 320) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 312),
                            (void *)0x1BE,
                            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                            a4);
  return 0LL;
}
