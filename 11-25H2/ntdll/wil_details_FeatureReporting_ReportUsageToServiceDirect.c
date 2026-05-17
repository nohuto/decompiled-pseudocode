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
  __int64 v8; // rdx
  int v10; // [rsp+30h] [rbp-68h] BYREF
  int v11; // [rsp+34h] [rbp-64h]
  char v12; // [rsp+38h] [rbp-60h] BYREF
  __int64 v13; // [rsp+60h] [rbp-38h]

  v4 = a2;
  v7 = 0;
  v13 = *(_QWORD *)(wil_details_FeatureReporting_RecordUsageInCache(
                      (unsigned int)&v12,
                      *(_QWORD *)(a1 + 8),
                      a3,
                      HIDWORD(a2),
                      a4)
                  + 16);
  if ( (v4 & 0x400) != 0 && a3 != 254 )
  {
    v10 = *(_DWORD *)(a1 + 24);
    v11 = (unsigned __int16)a3;
    if ( (v4 & 0x800) != 0 )
      HIWORD(v11) |= 1u;
    RtlNotifyFeatureUsage((__int64)&v10, v8);
  }
  LOBYTE(v7) = (_DWORD)v13 == 0;
  return v7;
}
