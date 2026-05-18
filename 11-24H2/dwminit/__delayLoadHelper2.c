/*
 * XREFs of __delayLoadHelper2 @ 0x1800114A0
 * Callers:
 *     __tailMerge_sspicli_dll @ 0x1800031CE (__tailMerge_sspicli_dll.c)
 *     __tailMerge_api_ms_win_security_lsalookup_l1_1_0_dll @ 0x180003259 (__tailMerge_api_ms_win_security_lsalookup_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_misc_l1_1_0_dll @ 0x18000334A (__tailMerge_ext_ms_win_ntuser_misc_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x18000342A (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x18000350A (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_onecore_comp_dwmmonitor_l1_1_0_dll @ 0x180003595 (__tailMerge_ext_ms_onecore_comp_dwmmonitor_l1_1_0_dll.c)
 *     __tailMerge_faultrep_dll @ 0x18000369A (__tailMerge_faultrep_dll.c)
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
