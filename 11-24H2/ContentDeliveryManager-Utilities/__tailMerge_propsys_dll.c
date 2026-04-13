/*
 * XREFs of __tailMerge_propsys_dll @ 0x1800232C7
 * Callers:
 *     __imp_load_PSPropertyBag_WriteStr @ 0x180023346 (__imp_load_PSPropertyBag_WriteStr.c)
 *     __imp_load_PSCreateMemoryPropertyStore @ 0x18002351D (__imp_load_PSCreateMemoryPropertyStore.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800B2B90 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_propsys_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_propsys_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
