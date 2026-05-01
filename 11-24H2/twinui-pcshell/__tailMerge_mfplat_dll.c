/*
 * XREFs of __tailMerge_mfplat_dll @ 0x1802D5CF3
 * Callers:
 *     __imp_load_MFStartup @ 0x1802D5D72 (__imp_load_MFStartup.c)
 *     __imp_load_MFShutdown @ 0x1802D5D84 (__imp_load_MFShutdown.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_mfplat_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_mfplat_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
