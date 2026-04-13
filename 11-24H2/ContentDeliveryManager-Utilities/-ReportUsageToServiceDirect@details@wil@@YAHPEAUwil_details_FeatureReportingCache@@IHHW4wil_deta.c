/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180039C4C
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180039BA4 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x180039E64 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 * Callees:
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18002F1A4 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180036EFC (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18003CE20 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180040534 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        char a8)
{
  __int64 v12; // rax
  unsigned int v13; // r9d
  unsigned int v14; // ebp
  __m128i v15; // xmm1
  __int64 v16; // xmm0_8
  __int64 v17; // r8
  unsigned int v18; // edx
  const char *v20; // [rsp+20h] [rbp-68h]
  __m128i v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-30h] BYREF

  v12 = wil_details_FeatureReporting_RecordUsageInCache(&v22, a1, a5, a6);
  v14 = 1;
  v15 = *(__m128i *)v12;
  v16 = *(_QWORD *)(v12 + 16);
  v21 = *(__m128i *)v12;
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1LL);
  if ( _mm_cvtsi128_si32(v15) )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (char *)&wil::details::g_enabledStateManager,
      a2,
      a1);
    v15 = v21;
  }
  v17 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
  if ( (_DWORD)v17 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)a2,
      _mm_cvtsi128_si32(_mm_srli_si128(v15, 8)),
      v17,
      v13,
      v20);
  if ( !(_DWORD)v16 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( a3 )
  {
    v18 = a5 | 0x80000000;
    if ( !a4 )
      v18 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v18, 0, v13, v20);
  }
  if ( (_DWORD)v16 )
  {
    return 0;
  }
  else if ( g_wil_details_realtimeFeatureUsageHook )
  {
    LOBYTE(v17) = a8;
    g_wil_details_realtimeFeatureUsageHook(a2, a5, v17);
  }
  return v14;
}
