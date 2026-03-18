/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x14000DD28
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x140004A84 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x14000BAA8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x14000D8B4 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x14000E238 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        char *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v12; // rax
  __int64 v13; // xmm0_8
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v16; // ebx
  __int64 v17; // rdx
  char v19[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+48h] [rbp-20h] BYREF

  v12 = wil_details_FeatureReporting_RecordUsageInCache(&v21, a1, a5);
  v13 = *(_QWORD *)(v12 + 16);
  *(_OWORD *)v19 = *(_OWORD *)v12;
  v20 = v13;
  wil::details::RecordFeatureUsageCallback((wil *)a2, a5, v14, a1, (RTL_SRWLOCK *)v19);
  v16 = 0;
  if ( a3 )
  {
    v17 = a5;
    LODWORD(v17) = a5 | 0x80000000;
    if ( !a4 )
      v17 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v17, 0LL);
  }
  if ( !(_DWORD)v20 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v15) = a8;
      g_wil_details_realtimeFeatureUsageHook(a2, a5, v15);
    }
    return 1;
  }
  return v16;
}
