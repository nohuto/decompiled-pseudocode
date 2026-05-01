/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x180058F30
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x180078FE8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureReporting_ReportVariantUsageToService @ 0x18007906C (wil_details_FeatureReporting_ReportVariantUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180058FC0 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x1800773FC (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

_BOOL8 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edi
  __int64 v6; // rax
  _BYTE v8[24]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+58h] [rbp-30h]

  v3 = a2;
  v5 = a3;
  v6 = wil_details_FeatureReporting_RecordUsageInCache(v8, *(_QWORD *)(a1 + 8), a3, HIDWORD(a2));
  v10 = *(_QWORD *)(v6 + 16);
  v9 = *(_OWORD *)v6;
  if ( (v3 & 0x400) != 0 && v5 != 254 )
    wil_RtlStagingConfig_RecordFeatureUsage(*(unsigned int *)(a1 + 24), v5, (v3 >> 11) & 1);
  return (_DWORD)v10 == 0;
}
