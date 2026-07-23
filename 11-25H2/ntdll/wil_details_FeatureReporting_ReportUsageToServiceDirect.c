/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x18009FE48
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18009FD1C (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     RtlNotifyFeatureUsage @ 0x18009F110 (RtlNotifyFeatureUsage.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18009FEF0 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, int a3, int a4)
{
  __int16 v4; // bx
  unsigned int v7; // edi
  ULONG v9; // eax
  _RTL_FEATURE_USAGE_REPORT FeatureUsageReport; // [rsp+30h] [rbp-68h] BYREF
  char v11; // [rsp+38h] [rbp-60h] BYREF
  __int64 v12; // [rsp+60h] [rbp-38h]

  v4 = a2;
  v7 = 0;
  v12 = *(_QWORD *)(wil_details_FeatureReporting_RecordUsageInCache(
                      (unsigned int)&v11,
                      *(_QWORD *)(a1 + 8),
                      a3,
                      HIDWORD(a2),
                      a4)
                  + 16);
  if ( (v4 & 0x400) != 0 && a3 != 254 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    FeatureUsageReport.ReportingOptions = 0;
    FeatureUsageReport.FeatureId = v9;
    FeatureUsageReport.ReportingKind = a3;
    if ( (v4 & 0x800) != 0 )
      FeatureUsageReport.ReportingOptions |= 1u;
    RtlNotifyFeatureUsage(&FeatureUsageReport);
  }
  LOBYTE(v7) = (_DWORD)v12 == 0;
  return v7;
}
