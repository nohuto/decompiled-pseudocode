/*
 * XREFs of _CMulticastSessionManager::GetMulticastCapableChildEndpoints_::_1_::catch$2 @ 0x1801670AC
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B23C8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CMulticastSessionManager::GetMulticastCapableChildEndpoints_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0x160,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
                           a4);
  return 0LL;
}
