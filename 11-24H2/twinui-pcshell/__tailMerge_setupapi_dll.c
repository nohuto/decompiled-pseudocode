/*
 * XREFs of __tailMerge_setupapi_dll @ 0x1802D9E30
 * Callers:
 *     __imp_load_SetupDiGetClassDevsW @ 0x1802D9EAF (__imp_load_SetupDiGetClassDevsW.c)
 *     __imp_load_SetupDiEnumDeviceInfo @ 0x1802D9EC1 (__imp_load_SetupDiEnumDeviceInfo.c)
 *     __imp_load_SetupDiDestroyDeviceInfoList @ 0x1802D9ED3 (__imp_load_SetupDiDestroyDeviceInfoList.c)
 *     __imp_load_SetupDiEnumDeviceInterfaces @ 0x1802DB0BF (__imp_load_SetupDiEnumDeviceInterfaces.c)
 *     __imp_load_SetupDiGetDeviceInterfaceDetailW @ 0x1802DB0D1 (__imp_load_SetupDiGetDeviceInterfaceDetailW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_setupapi_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_setupapi_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
