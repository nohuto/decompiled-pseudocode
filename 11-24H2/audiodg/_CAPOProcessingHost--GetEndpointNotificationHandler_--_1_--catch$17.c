/*
 * XREFs of _CAPOProcessingHost::GetEndpointNotificationHandler_::_1_::catch$17 @ 0x140092973
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005DEF4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAPOProcessingHost::GetEndpointNotificationHandler_::_1_::catch_17(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 152),
                           (void *)0xA6,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                           a4);
  return 0LL;
}
