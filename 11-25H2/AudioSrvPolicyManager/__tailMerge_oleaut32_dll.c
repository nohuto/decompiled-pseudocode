/*
 * XREFs of __tailMerge_oleaut32_dll @ 0x180021927
 * Callers:
 *     __imp_load_SysAllocString @ 0x1800219A6 (__imp_load_SysAllocString.c)
 *     __imp_load_SafeArrayGetDim @ 0x1800219B8 (__imp_load_SafeArrayGetDim.c)
 *     __imp_load_SafeArrayGetElemsize @ 0x1800219CA (__imp_load_SafeArrayGetElemsize.c)
 *     __imp_load_SafeArrayGetUBound @ 0x1800219DC (__imp_load_SafeArrayGetUBound.c)
 *     __imp_load_SafeArrayGetElement @ 0x1800219EE (__imp_load_SafeArrayGetElement.c)
 *     __imp_load_SafeArrayGetLBound @ 0x180021A00 (__imp_load_SafeArrayGetLBound.c)
 *     __imp_load_SafeArrayUnlock @ 0x180021A12 (__imp_load_SafeArrayUnlock.c)
 *     __imp_load_SafeArrayDestroy @ 0x180021A24 (__imp_load_SafeArrayDestroy.c)
 *     __imp_load_SafeArrayCreate @ 0x180021A36 (__imp_load_SafeArrayCreate.c)
 *     __imp_load_SafeArrayLock @ 0x180021A48 (__imp_load_SafeArrayLock.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18004B280 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_oleaut32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_oleaut32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
