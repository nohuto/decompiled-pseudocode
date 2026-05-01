/*
 * XREFs of __tailMerge_dsreg_dll @ 0x1802D950C
 * Callers:
 *     __imp_load_DsrGetJoinInfo @ 0x1802D958B (__imp_load_DsrGetJoinInfo.c)
 *     __imp_load_DsrFreeJoinInfo @ 0x1802D959D (__imp_load_DsrFreeJoinInfo.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_dsreg_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_dsreg_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
