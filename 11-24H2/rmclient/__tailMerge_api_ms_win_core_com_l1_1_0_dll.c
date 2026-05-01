/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x1800142AB
 * Callers:
 *     __imp_load_CoTaskMemAlloc @ 0x18001432A (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x18001434E (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_CoUninitialize @ 0x180014B79 (__imp_load_CoUninitialize.c)
 *     __imp_load_CoMarshalInterface @ 0x180014B8B (__imp_load_CoMarshalInterface.c)
 *     __imp_load_CoReleaseMarshalData @ 0x180014B9D (__imp_load_CoReleaseMarshalData.c)
 *     __imp_load_CreateStreamOnHGlobal @ 0x180014BAF (__imp_load_CreateStreamOnHGlobal.c)
 *     __imp_load_CoInitializeEx @ 0x180014BC1 (__imp_load_CoInitializeEx.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18000FFE0 (__delayLoadHelper2.c)
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
