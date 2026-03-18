/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140062F04
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140062E74 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x140062CE0 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int16 v5; // bx
  _DWORD *v8; // rax
  unsigned int v9; // edi
  int v11; // [rsp+30h] [rbp-78h] BYREF
  int v12; // [rsp+34h] [rbp-74h]
  _BYTE v13[24]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v14; // [rsp+50h] [rbp-58h] BYREF
  __int64 v15; // [rsp+60h] [rbp-48h]

  v5 = a2;
  v8 = wil_details_FeatureReporting_RecordUsageInCache(
         (__int64)v13,
         *(volatile signed __int32 **)(a1 + 8),
         a3,
         SHIDWORD(a2),
         a4);
  v9 = 0;
  v14 = *(_OWORD *)v8;
  v15 = *((_QWORD *)v8 + 2);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(*(unsigned int *)(a1 + 24), a3, a4, *(_QWORD *)(a1 + 8), &v14);
  if ( (v5 & 0x400) != 0 && a3 != 254 )
  {
    v11 = *(_DWORD *)(a1 + 24);
    v12 = (unsigned __int16)a3;
    if ( (v5 & 0x800) != 0 )
      HIWORD(v12) |= 1u;
    RtlNotifyFeatureUsage(&v11);
  }
  LOBYTE(v9) = (_DWORD)v15 == 0;
  return v9;
}
