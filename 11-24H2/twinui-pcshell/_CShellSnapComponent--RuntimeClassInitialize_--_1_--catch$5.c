/*
 * XREFs of _CShellSnapComponent::RuntimeClassInitialize_::_1_::catch$5 @ 0x1806DA9B2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CShellSnapComponent::RuntimeClassInitialize_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 312),
                           (void *)0x140,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                           a4);
  return 0LL;
}
