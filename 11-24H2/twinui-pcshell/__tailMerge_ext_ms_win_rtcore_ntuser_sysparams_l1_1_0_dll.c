/*
 * XREFs of __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1802D8046
 * Callers:
 *     __imp_load_MonitorFromWindow @ 0x1802D80C5 (__imp_load_MonitorFromWindow.c)
 *     __imp_load_MonitorFromRect @ 0x1802D80D7 (__imp_load_MonitorFromRect.c)
 *     __imp_load_MonitorFromPoint @ 0x1802D80E9 (__imp_load_MonitorFromPoint.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
