/*
 * XREFs of __tailMerge_api_ms_win_shlwapi_winrt_storage_l1_1_1_dll @ 0x1802D52B1
 * Callers:
 *     __imp_load_SHPinDllOfCLSID @ 0x1802D5330 (__imp_load_SHPinDllOfCLSID.c)
 *     __imp_load_SHCreateWorkerWindowW @ 0x1802D55F2 (__imp_load_SHCreateWorkerWindowW.c)
 *     __imp_load_SHSetWindowBits @ 0x1802D5B41 (__imp_load_SHSetWindowBits.c)
 *     __imp_load_SHGetFileDescriptionW @ 0x1802D6168 (__imp_load_SHGetFileDescriptionW.c)
 *     __imp_load_AssocQueryStringW @ 0x1802D6320 (__imp_load_AssocQueryStringW.c)
 *     __imp_load_SHFillRectClr @ 0x1802D66F7 (__imp_load_SHFillRectClr.c)
 *     __imp_load_IUnknown_GetWindow @ 0x1802D6848 (__imp_load_IUnknown_GetWindow.c)
 *     __imp_load_StrRetToBufW @ 0x1802DA88C (__imp_load_StrRetToBufW.c)
 *     __imp_load_IStream_WritePidl @ 0x1802DA9B4 (__imp_load_IStream_WritePidl.c)
 *     __imp_load_IStream_ReadPidl @ 0x1802DA9C6 (__imp_load_IStream_ReadPidl.c)
 *     __imp_load_IShellFolder_ParseDisplayName @ 0x1802DB0AD (__imp_load_IShellFolder_ParseDisplayName.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_shlwapi_winrt_storage_l1_1_1_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_shlwapi_winrt_storage_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
