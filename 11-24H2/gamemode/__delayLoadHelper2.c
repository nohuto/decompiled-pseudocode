/*
 * XREFs of __delayLoadHelper2 @ 0x180010750
 * Callers:
 *     __tailMerge_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll @ 0x180002E8E (__tailMerge_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x180002F4F (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll @ 0x180002FEC (__tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_setupapi_classinstallers_l1_1_0_dll @ 0x180003089 (__tailMerge_ext_ms_win_setupapi_classinstallers_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_setupapi_classinstallers_l1_1_2_dll @ 0x180003126 (__tailMerge_ext_ms_win_setupapi_classinstallers_l1_1_2_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x1800031D5 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           &_ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
