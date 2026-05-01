/*
 * XREFs of __tailMerge_ext_ms_win_core_storelicensing_l1_2_0_dll @ 0x180072C5A
 * Callers:
 *     __imp_load_EnsureStoreLicenseForPackageActivation2 @ 0x180072CD9 (__imp_load_EnsureStoreLicenseForPackageActivation2.c)
 *     __imp_load_PackageSuspendedNotificationForStoreLicense2 @ 0x180072D40 (__imp_load_PackageSuspendedNotificationForStoreLicense2.c)
 *     __imp_load_PackageRundownNotificationForStoreLicense2 @ 0x180072D52 (__imp_load_PackageRundownNotificationForStoreLicense2.c)
 *     __imp_load_BeginAcquireStoreLicenseForPackageActivation2 @ 0x180072D64 (__imp_load_BeginAcquireStoreLicenseForPackageActivation2.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18006B6D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_core_storelicensing_l1_2_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_core_storelicensing_l1_2_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
