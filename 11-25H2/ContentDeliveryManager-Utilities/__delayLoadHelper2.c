/*
 * XREFs of __delayLoadHelper2 @ 0x1800B2870
 * Callers:
 *     __tailMerge_cdp_dll @ 0x180022E90 (__tailMerge_cdp_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll @ 0x180022F51 (__tailMerge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ole32_bindctx_l1_1_0_dll @ 0x180022FEE (__tailMerge_ext_ms_win_ole32_bindctx_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll @ 0x180023079 (__tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_security_slc_l1_1_0_dll @ 0x180023116 (__tailMerge_ext_ms_win_security_slc_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_storage_exports_internal_l1_1_0_dll @ 0x1800231A1 (__tailMerge_api_ms_win_storage_exports_internal_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x18002322C (__tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_propsys_dll @ 0x1800232B7 (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_shell_namespace_l1_1_0_dll @ 0x180023342 (__tailMerge_api_ms_win_shell_namespace_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_shell32_shellfolders_l1_1_0_dll @ 0x1800233DF (__tailMerge_ext_ms_win_shell32_shellfolders_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll @ 0x18002346A (__tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_registry_l2_1_0_dll @ 0x18002352B (__tailMerge_api_ms_win_core_registry_l2_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x1800235B6 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_sspicli_dll @ 0x180023641 (__tailMerge_sspicli_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x1800236CC (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x180023757 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x1800238C6 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_0_dll @ 0x180023951 (__tailMerge_api_ms_win_appmodel_runtime_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x1800239DC (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_core_iuri_l1_1_0_dll @ 0x180023A8B (__tailMerge_ext_ms_win_core_iuri_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x180023B28 (__tailMerge_api_ms_win_appmodel_state_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_obsolete_l1_1_0_dll @ 0x180023BC5 (__tailMerge_api_ms_win_shcore_obsolete_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_devmgmt_policy_l1_1_0_dll @ 0x180023CB6 (__tailMerge_ext_ms_win_devmgmt_policy_l1_1_0_dll.c)
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
