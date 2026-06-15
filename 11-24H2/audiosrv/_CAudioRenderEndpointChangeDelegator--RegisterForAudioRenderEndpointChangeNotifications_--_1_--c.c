/*
 * XREFs of _CAudioRenderEndpointChangeDelegator::RegisterForAudioRenderEndpointChangeNotifications_::_1_::catch$5 @ 0x18016C64F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioRenderEndpointChangeDelegator::RegisterForAudioRenderEndpointChangeNotifications_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0xEFD,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                           a4);
  return 0LL;
}
