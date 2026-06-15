/*
 * XREFs of _CEndpointStoreCache::GetEndpointStore_::_1_::catch$17 @ 0x180168650
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CEndpointStoreCache::GetEndpointStore_::_1_::catch_17(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x41,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
                            a4);
  return 0LL;
}
