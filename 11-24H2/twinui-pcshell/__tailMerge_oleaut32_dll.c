/*
 * XREFs of __tailMerge_oleaut32_dll @ 0x1802D2F00
 * Callers:
 *     __imp_load_VariantInit @ 0x1802D2F7F (__imp_load_VariantInit.c)
 *     __imp_load_SysAllocString @ 0x1802D2F91 (__imp_load_SysAllocString.c)
 *     __imp_load_VariantClear @ 0x1802D3345 (__imp_load_VariantClear.c)
 *     __imp_load_SysFreeString @ 0x1802D3363 (__imp_load_SysFreeString.c)
 *     __imp_load_VariantCopy @ 0x1802D3375 (__imp_load_VariantCopy.c)
 *     __imp_load_SafeArrayAccessData @ 0x1802D381F (__imp_load_SafeArrayAccessData.c)
 *     __imp_load_SafeArrayDestroy @ 0x1802D3831 (__imp_load_SafeArrayDestroy.c)
 *     __imp_load_SysStringLen @ 0x1802D3A9E (__imp_load_SysStringLen.c)
 *     __imp_load_SafeArrayGetDim @ 0x1802D3AB0 (__imp_load_SafeArrayGetDim.c)
 *     __imp_load_SafeArrayCreateVector @ 0x1802D3AC2 (__imp_load_SafeArrayCreateVector.c)
 *     __imp_load_SafeArrayPutElement @ 0x1802D3AD4 (__imp_load_SafeArrayPutElement.c)
 *     __imp_load_VariantChangeType @ 0x1802DA1D5 (__imp_load_VariantChangeType.c)
 *     __imp_load_SetErrorInfo @ 0x1802DB105 (__imp_load_SetErrorInfo.c)
 *     __imp_load_GetErrorInfo @ 0x1802DB123 (__imp_load_GetErrorInfo.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_oleaut32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_oleaut32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
