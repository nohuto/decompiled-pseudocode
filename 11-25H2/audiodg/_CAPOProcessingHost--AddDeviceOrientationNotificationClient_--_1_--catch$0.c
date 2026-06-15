/*
 * XREFs of _CAPOProcessingHost::AddDeviceOrientationNotificationClient_::_1_::catch$0 @ 0x1400957D4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005DFE4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAPOProcessingHost::AddDeviceOrientationNotificationClient_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0xE0,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                           a4);
  return 0LL;
}
