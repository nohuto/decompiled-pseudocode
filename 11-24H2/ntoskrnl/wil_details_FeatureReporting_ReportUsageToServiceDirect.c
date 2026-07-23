/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14021E000
 * Callers:
 *     wil_details_FeatureReporting_ReportVariantUsageToService @ 0x14021DF60 (wil_details_FeatureReporting_ReportVariantUsageToService.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x14021E0F0 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x14021E1F8 (CmFcManagerNotifyFeatureUsage.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1404C2520 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  volatile signed __int32 *v4; // r10
  unsigned int v6; // edi
  __int16 v8; // bx
  __int64 v9; // r15
  signed __int32 v11; // edx
  char v12; // r11
  signed __int32 v13; // r9d
  bool v14; // zf
  signed __int32 v15; // eax
  unsigned int v16; // edx
  unsigned __int32 v17; // eax
  unsigned __int32 v18; // ett
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  __int128 v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-30h]
  __int128 v22; // [rsp+50h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-18h]

  v4 = *(volatile signed __int32 **)(a1 + 8);
  v6 = 0;
  v19 = a2;
  v21 = 0LL;
  v8 = a2;
  v9 = a1;
  v20 = 0LL;
  if ( a3 == 4 )
  {
LABEL_2:
    wil_details_FeatureReporting_IncrementUsageInCache(v4, a3, a4, &v20);
  }
  else
  {
    switch ( a3 )
    {
      case 0u:
        goto LABEL_2;
      case 1u:
      case 5u:
        wil_details_FeatureReporting_IncrementOpportunityInCache(v4, a3, a4, &v20);
        break;
      case 2u:
      case 3u:
      case 6u:
      case 7u:
        a1 = 0LL;
        switch ( a3 )
        {
          case 2u:
            a1 = 2LL;
            break;
          case 3u:
            a1 = 8LL;
            break;
          case 6u:
            a1 = 4LL;
            break;
          case 7u:
            a1 = 16LL;
            break;
        }
        v11 = *v4;
        do
        {
          v12 = v11;
          v13 = v11 | a1 | 1;
          LODWORD(v21) = (v11 | (unsigned int)a1) == v11;
          if ( (v11 | (unsigned int)a1) == v11 )
            v13 = v11 | a1;
          v15 = _InterlockedCompareExchange(v4, v13, v11);
          v14 = v11 == v15;
          v11 = v15;
        }
        while ( !v14 );
        LOBYTE(a1) = (v12 & 1) == 0;
        LODWORD(v20) = ((unsigned __int8)a1 & ((v13 & 1) != 0)) != 0;
        break;
      default:
        v16 = a3 - 320;
        if ( (int)(a3 - 320) >= 64 )
          goto LABEL_33;
        v17 = *((_DWORD *)v4 + 1);
        do
        {
          if ( (v17 & 0x10) == 0 || (LODWORD(v21) = 1, ((v17 >> 5) & 0x3F) != v16) )
            LODWORD(v21) = 0;
          a1 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(32 * v16)) & 0x7E0 | 0x10;
          v18 = v17;
          v17 = _InterlockedCompareExchange(v4 + 1, a1, v17);
        }
        while ( v18 != v17 );
        if ( !(_DWORD)v21 )
        {
LABEL_33:
          *((_QWORD *)&v20 + 1) = __PAIR64__(HIDWORD(v19), a3);
          DWORD1(v20) = a4;
        }
        break;
    }
  }
  v23 = v21;
  v22 = v20;
  if ( g_wil_details_recordFeatureUsage )
    guard_dispatch_icall_no_overrides(*(unsigned int *)(v9 + 24), a3, a4, *(_QWORD *)(v9 + 8));
  if ( (v8 & 0x400) != 0 && a3 != 254 )
  {
    LODWORD(v19) = *(_DWORD *)(v9 + 24);
    HIDWORD(v19) = (unsigned __int16)a3;
    if ( (v8 & 0x800) != 0 )
      HIWORD(v19) |= 1u;
    CmFcManagerNotifyFeatureUsage(a1, &v19);
  }
  LOBYTE(v6) = (_DWORD)v23 == 0;
  return v6;
}
