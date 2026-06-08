/*
 * XREFs of wil_details_FeatureReporting_ReportVariantUsageToService @ 0x140004AF0
 * Callers:
 *     Feature_QosHysteresisExperiment__private_GetVariant @ 0x14000424C (Feature_QosHysteresisExperiment__private_GetVariant.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140004A04 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportVariantUsageToService(
        __int64 a1,
        __int64 a2))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  char v2; // bl
  char v3; // di
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v5; // [rsp+70h] [rbp+18h] BYREF

  v5 = 2;
  v2 = a2;
  v3 = ((unsigned int)a2 >> 12) & 0x3F;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     (((unsigned int)a2 >> 12) & 0x3F) + 320);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(58222274LL, &Feature_UxAccOptimization_logged_traits, 0LL, v2 & 1, 0LL, &v5, v3, 1LL);
  }
  return result;
}
