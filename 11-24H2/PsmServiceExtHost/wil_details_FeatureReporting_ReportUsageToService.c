/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x180078FE8
 * Callers:
 *     Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage @ 0x18006FF00 (Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage.c)
 *     wil_details_IsEnabledFallback @ 0x180079608 (wil_details_IsEnabledFallback.c)
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck @ 0x180096EB4 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck.c)
 * Callees:
 *     wil_details_MapReportingKind @ 0x180058D30 (wil_details_MapReportingKind.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x180058F30 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        char a2,
        int a3))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned __int64 v6; // r9
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  v4 = a2 & 1;
  v5 = wil_details_MapReportingKind(a3, v4);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     v6,
                                                                                                     v5);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v4, &v8, 0LL, 0, 1LL);
  }
  return result;
}
