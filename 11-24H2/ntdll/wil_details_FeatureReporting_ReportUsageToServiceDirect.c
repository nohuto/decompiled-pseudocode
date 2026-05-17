/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800D5C3C
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800D5B10 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1800D5CE4 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     RtlNotifyFeatureUsage @ 0x1800D6140 (RtlNotifyFeatureUsage.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, int a3, int a4)
{
  __int16 v4; // bx
  unsigned int v7; // edi
  int v9; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+34h] [rbp-64h]
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
    v10 = (unsigned __int16)a3;
    if ( (v4 & 0x800) != 0 )
      HIWORD(v10) |= 1u;
    RtlNotifyFeatureUsage(&v9);
  }
  LOBYTE(v7) = (_DWORD)v12 == 0;
  return v7;
}
