/*
 * XREFs of __tailMerge_api_ms_win_core_shlwapi_obsolete_l1_1_0_dll @ 0x1802D2E5D
 * Callers:
 *     __imp_load_QISearch @ 0x1802D2EDC (__imp_load_QISearch.c)
 *     __imp_load_StrCmpICW @ 0x1802D3E75 (__imp_load_StrCmpICW.c)
 *     __imp_load_StrCpyNW @ 0x1802D3EE7 (__imp_load_StrCpyNW.c)
 *     __imp_load_StrCmpIW @ 0x1802DA284 (__imp_load_StrCmpIW.c)
 *     __imp_load_StrCmpNIW @ 0x1802DA296 (__imp_load_StrCmpNIW.c)
 *     __imp_load_StrCmpNICW @ 0x1802DA3F4 (__imp_load_StrCmpNICW.c)
 *     __imp_load_StrCmpW @ 0x1802DA42A (__imp_load_StrCmpW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_shlwapi_obsolete_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_shlwapi_obsolete_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
