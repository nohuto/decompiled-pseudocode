/*
 * XREFs of __tailMerge_api_ms_win_shcore_registry_l1_1_0_dll @ 0x1802D3B6B
 * Callers:
 *     __imp_load_SHRegGetValueW @ 0x1802D3BEA (__imp_load_SHRegGetValueW.c)
 *     __imp_load_SHGetValueW @ 0x1802DA406 (__imp_load_SHGetValueW.c)
 *     __imp_load_SHSetValueW @ 0x1802DA418 (__imp_load_SHSetValueW.c)
 *     __imp_load_SHDeleteValueW @ 0x1802DA43C (__imp_load_SHDeleteValueW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_shcore_registry_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_shcore_registry_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
