/*
 * XREFs of _CMultitaskingViewManager::EnsureXamlCoreForThreadIfNeeded_::_1_::catch$23 @ 0x1802BF65A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CMultitaskingViewManager::EnsureXamlCoreForThreadIfNeeded_::_1_::catch_23(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0x3BE,
                           (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                           a4);
  return 0LL;
}
