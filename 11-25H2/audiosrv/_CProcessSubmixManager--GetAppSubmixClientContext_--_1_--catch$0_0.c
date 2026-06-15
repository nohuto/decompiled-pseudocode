/*
 * XREFs of _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::catch$0_0 @ 0x180163D64
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B23C8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CProcessSubmixManager::GetAppSubmixClientContext_::_1_::catch_0_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x165,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           a4);
  return 0LL;
}
