/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_3_dll @ 0x14005A77F
 * Callers:
 *     __imp_load_CoRevokeDeviceCatalog @ 0x14005A7FE (__imp_load_CoRevokeDeviceCatalog.c)
 *     __imp_load_CoRegisterDeviceCatalog @ 0x14005A822 (__imp_load_CoRegisterDeviceCatalog.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x140048CB0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_com_l1_1_3_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_3_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
