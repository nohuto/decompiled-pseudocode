/*
 * XREFs of __tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll @ 0x1800A5964
 * Callers:
 *     __imp_load_AppContainerDeriveSidFromMoniker @ 0x1800A59E3 (__imp_load_AppContainerDeriveSidFromMoniker.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180075C10 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_appmodel_identity_l1_2_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
