/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_winevent_l1_1_0_dll @ 0x1801C9F91
 * Callers:
 *     __imp_load_SetWinEventHook @ 0x1801C9F85 (__imp_load_SetWinEventHook.c)
 *     __imp_load_UnhookWinEvent @ 0x1801CA15C (__imp_load_UnhookWinEvent.c)
 *     __imp_load_NotifyWinEvent @ 0x1801CA921 (__imp_load_NotifyWinEvent.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801865D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_rtcore_ntuser_winevent_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_rtcore_ntuser_winevent_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
