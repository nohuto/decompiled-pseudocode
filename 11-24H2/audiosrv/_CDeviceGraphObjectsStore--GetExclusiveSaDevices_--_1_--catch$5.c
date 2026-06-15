/*
 * XREFs of _CDeviceGraphObjectsStore::GetExclusiveSaDevices_::_1_::catch$5 @ 0x18016FFCC
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::GetExclusiveSaDevices_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x257,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           a4);
  return 0LL;
}
