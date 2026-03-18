/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll @ 0x18025D78C
 * Callers:
 *     __imp_load_EqualRect @ 0x18025D80B (__imp_load_EqualRect.c)
 *     __imp_load_IsRectEmpty @ 0x18025D81D (__imp_load_IsRectEmpty.c)
 *     __imp_load_IntersectRect @ 0x18025D82F (__imp_load_IntersectRect.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1802281C0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
