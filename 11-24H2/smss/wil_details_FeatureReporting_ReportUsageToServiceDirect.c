/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14001A288
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14001A204 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x14001A084 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // bx
  int v5; // esi
  unsigned int v6; // edi
  int v8; // [rsp+30h] [rbp-58h] BYREF
  int v9; // [rsp+34h] [rbp-54h]
  _BYTE v10[40]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v11; // [rsp+60h] [rbp-28h]

  v3 = a2;
  v5 = a3;
  v6 = 0;
  v11 = *((_QWORD *)wil_details_FeatureReporting_RecordUsageInCache(
                      (__int64)v10,
                      *(volatile signed __int32 **)(a1 + 8),
                      a3,
                      SHIDWORD(a2))
        + 2);
  if ( (v3 & 0x400) != 0 && v5 != 254 )
  {
    v8 = *(_DWORD *)(a1 + 24);
    v9 = (unsigned __int16)v5;
    if ( (v3 & 0x800) != 0 )
      HIWORD(v9) |= 1u;
    RtlNotifyFeatureUsage(&v8);
  }
  LOBYTE(v6) = (_DWORD)v11 == 0;
  return v6;
}
