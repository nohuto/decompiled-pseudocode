/*
 * XREFs of __delayLoadHelper2 @ 0x180048A60
 * Callers:
 *     __tailMerge_mmdevapi_dll @ 0x1800213C7 (__tailMerge_mmdevapi_dll.c)
 *     __tailMerge_ondemandbrokerclient_dll @ 0x180021476 (__tailMerge_ondemandbrokerclient_dll.c)
 *     __tailMerge_powrprof_dll @ 0x180021501 (__tailMerge_powrprof_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x1800215C2 (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll @ 0x18002165F (__tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x1800216EA (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x180021799 (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll @ 0x180021824 (__tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x1800218AF (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll @ 0x18002194C (__tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x1800219D7 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180021B04 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x180021C0A (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_devmgmt_policy_l1_1_1_dll @ 0x180021D1A (__tailMerge_ext_ms_win_devmgmt_policy_l1_1_1_dll.c)
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
