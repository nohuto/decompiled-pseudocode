/*
 * XREFs of wil_details_FeatureReporting_ReportVariantUsageToService @ 0x1401B0604
 * Callers:
 *     Feature_MonitorPowerOnWatchdogTimeout__private_GetVariant @ 0x1401AED28 (Feature_MonitorPowerOnWatchdogTimeout__private_GetVariant.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1401361AC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportVariantUsageToService(
        __int64 a1,
        __int64 a2))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  char v2; // di
  char v3; // bl
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v5; // [rsp+70h] [rbp+18h] BYREF

  v5 = 2;
  v2 = ((unsigned int)a2 >> 12) & 0x3F;
  v3 = a2;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     (__int64)&Feature_MonitorPowerOnWatchdogTimeout__private_descriptor,
                                                                                                     a2,
                                                                                                     (((unsigned int)a2 >> 12) & 0x3F) + 320,
                                                                                                     1u);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(58853500LL, &Feature_UxAccOptimization_logged_traits, 0LL, v3 & 1, 0LL, &v5, v2, 1LL);
  }
  return result;
}
