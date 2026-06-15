/*
 * XREFs of __tailMerge_oleaut32_dll @ 0x1800A8E36
 * Callers:
 *     __imp_load_SysFreeString @ 0x1800A8EB5 (__imp_load_SysFreeString.c)
 *     __imp_load_VariantTimeToSystemTime @ 0x1800A949C (__imp_load_VariantTimeToSystemTime.c)
 *     __imp_load_SystemTimeToVariantTime @ 0x1800A94AE (__imp_load_SystemTimeToVariantTime.c)
 *     __imp_load_SafeArrayGetLBound @ 0x1800A954B (__imp_load_SafeArrayGetLBound.c)
 *     __imp_load_SafeArrayGetUBound @ 0x1800A955D (__imp_load_SafeArrayGetUBound.c)
 *     __imp_load_SafeArrayDestroy @ 0x1800A957B (__imp_load_SafeArrayDestroy.c)
 *     __imp_load_SafeArrayCreate @ 0x1800A958D (__imp_load_SafeArrayCreate.c)
 *     __imp_load_SafeArrayGetVartype @ 0x1800A959F (__imp_load_SafeArrayGetVartype.c)
 *     __imp_load_SafeArrayCopy @ 0x1800A95B1 (__imp_load_SafeArrayCopy.c)
 *     __imp_load_SafeArrayUnlock @ 0x1800A95C3 (__imp_load_SafeArrayUnlock.c)
 *     __imp_load_SafeArrayLock @ 0x1800A95D5 (__imp_load_SafeArrayLock.c)
 *     __imp_load_SysAllocString @ 0x1800A9BDC (__imp_load_SysAllocString.c)
 *     __imp_load_VarBstrCmp @ 0x1800A9CD8 (__imp_load_VarBstrCmp.c)
 *     __imp_load_SysAllocStringByteLen @ 0x1800A9CEA (__imp_load_SysAllocStringByteLen.c)
 *     __imp_load_SysStringByteLen @ 0x1800A9CFC (__imp_load_SysStringByteLen.c)
 *     __imp_load_BSTR_UserSize @ 0x1800AB4CC (__imp_load_BSTR_UserSize.c)
 *     __imp_load_BSTR_UserFree @ 0x1800AB4EC (__imp_load_BSTR_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserSize @ 0x1800AB50C (__imp_load_LPSAFEARRAY_UserSize.c)
 *     __imp_load_BSTR_UserUnmarshal64 @ 0x1800AB53C (__imp_load_BSTR_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserFree @ 0x1800AB56C (__imp_load_LPSAFEARRAY_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal @ 0x1800AB58C (__imp_load_LPSAFEARRAY_UserUnmarshal.c)
 *     __imp_load_LPSAFEARRAY_UserFree64 @ 0x1800AB5DC (__imp_load_LPSAFEARRAY_UserFree64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal64 @ 0x1800AB60C (__imp_load_LPSAFEARRAY_UserMarshal64.c)
 *     __imp_load_BSTR_UserUnmarshal @ 0x1800AB63C (__imp_load_BSTR_UserUnmarshal.c)
 *     __imp_load_BSTR_UserMarshal @ 0x1800AB65C (__imp_load_BSTR_UserMarshal.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal64 @ 0x1800AB67C (__imp_load_LPSAFEARRAY_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal @ 0x1800AB6AC (__imp_load_LPSAFEARRAY_UserMarshal.c)
 *     __imp_load_BSTR_UserFree64 @ 0x1800AB6CC (__imp_load_BSTR_UserFree64.c)
 *     __imp_load_BSTR_UserSize64 @ 0x1800AB6EC (__imp_load_BSTR_UserSize64.c)
 *     __imp_load_LPSAFEARRAY_UserSize64 @ 0x1800AB70C (__imp_load_LPSAFEARRAY_UserSize64.c)
 *     __imp_load_BSTR_UserMarshal64 @ 0x1800AB72C (__imp_load_BSTR_UserMarshal64.c)
 *     __imp_load_GetErrorInfo @ 0x1800ABE3D (__imp_load_GetErrorInfo.c)
 *     __imp_load_SysStringLen @ 0x1800ABE5B (__imp_load_SysStringLen.c)
 *     __imp_load_SetErrorInfo @ 0x1800ABE79 (__imp_load_SetErrorInfo.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088820 (__delayLoadHelper2.c)
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
