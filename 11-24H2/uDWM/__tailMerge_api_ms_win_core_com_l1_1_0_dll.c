/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18009C60A
 * Callers:
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x18009C689 (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_CoCreateInstance @ 0x18009C76E (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoCreateGuid @ 0x18009C780 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoInitializeEx @ 0x18009C792 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x18009C8DE (__imp_load_CoUninitialize.c)
 *     __imp_load_CoTaskMemAlloc @ 0x18009C8FC (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoTaskMemFree @ 0x18009C90E (__imp_load_CoTaskMemFree.c)
 *     __imp_load_PropVariantClear @ 0x18009C920 (__imp_load_PropVariantClear.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18007F0E0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_com_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
