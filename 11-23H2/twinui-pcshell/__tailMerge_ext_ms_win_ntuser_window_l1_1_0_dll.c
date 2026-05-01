/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_window_l1_1_0_dll @ 0x1801CB97B
 * Callers:
 *     __imp_load_IsIconic @ 0x1801CB96F (__imp_load_IsIconic.c)
 *     __imp_load_GetWindowPlacement @ 0x1801CBB46 (__imp_load_GetWindowPlacement.c)
 *     __imp_load_EnumThreadWindows @ 0x1801CBB6A (__imp_load_EnumThreadWindows.c)
 *     __imp_load_SetWindowsHookExW @ 0x1801CBB8E (__imp_load_SetWindowsHookExW.c)
 *     __imp_load_UnhookWindowsHookEx @ 0x1801CBBA0 (__imp_load_UnhookWindowsHookEx.c)
 *     __imp_load_SetPropA @ 0x1801CBBB2 (__imp_load_SetPropA.c)
 *     __imp_load_CallNextHookEx @ 0x1801CBBC4 (__imp_load_CallNextHookEx.c)
 *     __imp_load_GetPropA @ 0x1801CBCBB (__imp_load_GetPropA.c)
 *     __imp_load_AdjustWindowRectEx @ 0x1801CBD8E (__imp_load_AdjustWindowRectEx.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801865D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_window_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_window_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
