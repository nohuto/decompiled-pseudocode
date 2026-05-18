/*
 * XREFs of __tailMerge_api_ms_win_security_lsalookup_l1_1_0_dll @ 0x180003259
 * Callers:
 *     __imp_load_LsaLookupManageSidNameMapping @ 0x1800032D8 (__imp_load_LsaLookupManageSidNameMapping.c)
 *     __imp_load_LsaLookupFreeMemory @ 0x1800032EA (__imp_load_LsaLookupFreeMemory.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800114A0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_security_lsalookup_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_api_ms_win_security_lsalookup_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
