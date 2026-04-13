/*
 * XREFs of __delayLoadHelper2 @ 0x1800B2B90
 * Callers:
 *     __tailMerge_cdp_dll @ 0x180022EA0 (__tailMerge_cdp_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll @ 0x180022F61 (__tailMerge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ole32_bindctx_l1_1_0_dll @ 0x180022FFE (__tailMerge_ext_ms_win_ole32_bindctx_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll @ 0x180023089 (__tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_security_slc_l1_1_0_dll @ 0x180023126 (__tailMerge_ext_ms_win_security_slc_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_storage_exports_internal_l1_1_0_dll @ 0x1800231B1 (__tailMerge_api_ms_win_storage_exports_internal_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x18002323C (__tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_propsys_dll @ 0x1800232C7 (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_shell_namespace_l1_1_0_dll @ 0x180023352 (__tailMerge_api_ms_win_shell_namespace_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_shell32_shellfolders_l1_1_0_dll @ 0x1800233EF (__tailMerge_ext_ms_win_shell32_shellfolders_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll @ 0x18002347A (__tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_registry_l2_1_0_dll @ 0x18002353B (__tailMerge_api_ms_win_core_registry_l2_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x1800235C6 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_sspicli_dll @ 0x180023651 (__tailMerge_sspicli_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x1800236DC (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x180023767 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x1800238D6 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_0_dll @ 0x180023961 (__tailMerge_api_ms_win_appmodel_runtime_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x1800239EC (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_core_iuri_l1_1_0_dll @ 0x180023A9B (__tailMerge_ext_ms_win_core_iuri_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x180023B38 (__tailMerge_api_ms_win_appmodel_state_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_obsolete_l1_1_0_dll @ 0x180023BD5 (__tailMerge_api_ms_win_shcore_obsolete_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_devmgmt_policy_l1_1_0_dll @ 0x180023CC6 (__tailMerge_ext_ms_win_devmgmt_policy_l1_1_0_dll.c)
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
