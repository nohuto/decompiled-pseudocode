/*
 * XREFs of __delayLoadHelper2 @ 0x18006B4B0
 * Callers:
 *     __tailMerge_ext_ms_win_session_usermgr_l1_1_0_dll @ 0x180072956 (__tailMerge_ext_ms_win_session_usermgr_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll @ 0x180072A4A (__tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_storelicensing_l1_2_0_dll @ 0x180072B2A (__tailMerge_ext_ms_win_core_storelicensing_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll @ 0x180072C40 (__tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_xbrm_l1_1_1_dll @ 0x180072D76 (__tailMerge_ext_ms_win_core_xbrm_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll @ 0x180072E5B (__tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_security_efswrt_l1_1_2_dll @ 0x180072F0A (__tailMerge_ext_ms_win_security_efswrt_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x180072F95 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x18007302C (__tailMerge_api_ms_win_appmodel_state_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll @ 0x1800730DB (__tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_dxcore_l1_1_0_dll @ 0x180073232 (__tailMerge_ext_ms_win_dxcore_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll @ 0x1800732BD (__tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll.c)
 *     __tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll @ 0x180073348 (__tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll @ 0x18007341B (__tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_0_dll @ 0x18007350C (__tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_internal_l1_1_2_dll @ 0x180073597 (__tailMerge_api_ms_win_appmodel_runtime_internal_l1_1_2_dll.c)
 *     __tailMerge_feclient_dll @ 0x180073634 (__tailMerge_feclient_dll.c)
 *     __tailMerge_ext_ms_win_sysmain_plmapi_l1_1_0_dll @ 0x1800736E3 (__tailMerge_ext_ms_win_sysmain_plmapi_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_sysmain_plmapi_l1_1_1_dll @ 0x18007376E (__tailMerge_ext_ms_win_sysmain_plmapi_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll @ 0x1800738FA (__tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_message_l1_1_0_dll @ 0x1800739DA (__tailMerge_ext_ms_win_ntuser_message_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll @ 0x180073ABA (__tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll @ 0x180073B57 (__tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll.c)
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
