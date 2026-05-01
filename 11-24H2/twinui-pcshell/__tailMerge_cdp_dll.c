/*
 * XREFs of __tailMerge_cdp_dll @ 0x1802D9C23
 * Callers:
 *     __imp_load_CDPInitialize @ 0x1802D9CA2 (__imp_load_CDPInitialize.c)
 *     __imp_load_CDPGetUserActivitySettings @ 0x1802D9CB4 (__imp_load_CDPGetUserActivitySettings.c)
 *     __imp_load_CDPShutdown @ 0x1802D9CC6 (__imp_load_CDPShutdown.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_cdp_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_cdp_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
