/*
 * XREFs of __delayLoadHelper2 @ 0x140048CB0
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x14005A2B6 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x14005A341 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x14005A402 (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x14005A48D (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x14005A518 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x14005A5A3 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x14005A640 (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_3_dll @ 0x14005A77F (__tailMerge_api_ms_win_core_com_l1_1_3_dll.c)
 *     __tailMerge_avrt_dll @ 0x14005A89A (__tailMerge_avrt_dll.c)
 *     __tailMerge_rtworkq_dll @ 0x14005B229 (__tailMerge_rtworkq_dll.c)
 *     __tailMerge_propsys_dll @ 0x14005B37A (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x14005B47A (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
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
