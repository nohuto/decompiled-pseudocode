/*
 * XREFs of __delayLoadHelper2 @ 0x18004B280
 * Callers:
 *     __tailMerge_mmdevapi_dll @ 0x180021317 (__tailMerge_mmdevapi_dll.c)
 *     __tailMerge_ondemandbrokerclient_dll @ 0x1800213C6 (__tailMerge_ondemandbrokerclient_dll.c)
 *     __tailMerge_powrprof_dll @ 0x180021451 (__tailMerge_powrprof_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x180021512 (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll @ 0x1800215AF (__tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x18002163A (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x1800216E9 (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll @ 0x180021774 (__tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x1800217FF (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll @ 0x18002189C (__tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x180021927 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180021A54 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x180021B5A (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_devmgmt_policy_l1_1_1_dll @ 0x180021C6A (__tailMerge_ext_ms_win_devmgmt_policy_l1_1_1_dll.c)
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
