/*
 * XREFs of __tailMerge_pdh_dll @ 0x1802D9D5D
 * Callers:
 *     __imp_load_PdhOpenQueryW @ 0x1802D9DDC (__imp_load_PdhOpenQueryW.c)
 *     __imp_load_PdhAddCounterW @ 0x1802D9DEE (__imp_load_PdhAddCounterW.c)
 *     __imp_load_PdhCollectQueryData @ 0x1802D9E00 (__imp_load_PdhCollectQueryData.c)
 *     __imp_load_PdhGetRawCounterArrayW @ 0x1802D9E12 (__imp_load_PdhGetRawCounterArrayW.c)
 *     __imp_load_PdhCloseQuery @ 0x1802D9E24 (__imp_load_PdhCloseQuery.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_pdh_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_pdh_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
