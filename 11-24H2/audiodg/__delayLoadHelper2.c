/*
 * XREFs of __delayLoadHelper2 @ 0x1400489B0
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x14005A1C6 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x14005A251 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x14005A312 (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x14005A39D (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x14005A428 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x14005A4B3 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x14005A550 (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_3_dll @ 0x14005A68F (__tailMerge_api_ms_win_core_com_l1_1_3_dll.c)
 *     __tailMerge_avrt_dll @ 0x14005A7AA (__tailMerge_avrt_dll.c)
 *     __tailMerge_rtworkq_dll @ 0x14005B139 (__tailMerge_rtworkq_dll.c)
 *     __tailMerge_propsys_dll @ 0x14005B28A (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x14005B38A (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
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
