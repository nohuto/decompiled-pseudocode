/*
 * XREFs of __tailMerge_ext_ms_win_sysmain_plmapi_l1_1_0_dll @ 0x180073813
 * Callers:
 *     __imp_load_MemUtilQueryProcessMetrics @ 0x180073892 (__imp_load_MemUtilQueryProcessMetrics.c)
 *     __imp_load_MemUtilIsWorkingSetTooLargeForSwap @ 0x18007392F (__imp_load_MemUtilIsWorkingSetTooLargeForSwap.c)
 *     __imp_load_MemUtilEmptyProcess @ 0x180073941 (__imp_load_MemUtilEmptyProcess.c)
 *     __imp_load_MemUtilIsLowMemPolicyActive @ 0x180073953 (__imp_load_MemUtilIsLowMemPolicyActive.c)
 *     __imp_load_MemUtilQueryGpuUtilization @ 0x180073965 (__imp_load_MemUtilQueryGpuUtilization.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18006B6D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_sysmain_plmapi_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_sysmain_plmapi_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
