/*
 * XREFs of _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::catch$51 @ 0x1801690CB
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetProcessSubmix_::_1_::catch_51(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 360),
                           (void *)0x1F6,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           a4);
  return 0LL;
}
