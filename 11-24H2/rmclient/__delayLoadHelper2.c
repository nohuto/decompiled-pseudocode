/*
 * XREFs of __delayLoadHelper2 @ 0x18000FFE0
 * Callers:
 *     __tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll @ 0x180014220 (__tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x1800142AB (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll @ 0x18001435A (__tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x180014409 (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll @ 0x1800144B8 (__tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x180014543 (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x1800145CE (__tailMerge_api_ms_win_appmodel_state_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_core_psm_rtimer_l1_1_1_dll @ 0x18001467D (__tailMerge_api_ms_win_core_psm_rtimer_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_resourcemanager_crm_private_ext_l1_1_0_dll @ 0x18001472C (__tailMerge_ext_ms_win_resourcemanager_crm_private_ext_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_hostactivitymanager_ham_private_ext_l1_1_0_dll @ 0x180014823 (__tailMerge_ext_ms_win_hostactivitymanager_ham_private_ext_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll @ 0x180014A27 (__tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x180014AD6 (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
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
