/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x140084E9C
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x140084DF8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x14007E268 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x140081E94 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x1400849CC (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1400859F8 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v12; // rax
  unsigned int v13; // ebp
  __m128i v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // r8
  __int64 v17; // rdx
  __m128i v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+58h] [rbp-30h] BYREF

  v12 = wil_details_FeatureReporting_RecordUsageInCache(&v20, a1, a5);
  v13 = 1;
  v14 = *(__m128i *)v12;
  v15 = *(_QWORD *)(v12 + 16);
  v19 = *(__m128i *)v12;
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1LL);
  if ( _mm_cvtsi128_si32(v14) )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (char *)&wil::details::g_enabledStateManager,
      a2,
      a1);
    v14 = v19;
  }
  v16 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v14, 4));
  if ( (_DWORD)v16 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)a2,
      (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v14, 8)),
      v16);
  if ( !(_DWORD)v15 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( a3 )
  {
    v17 = a5;
    LODWORD(v17) = a5 | 0x80000000;
    if ( !a4 )
      v17 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v17, 0LL);
  }
  if ( (_DWORD)v15 )
  {
    return 0;
  }
  else if ( g_wil_details_realtimeFeatureUsageHook )
  {
    LOBYTE(v16) = a8;
    g_wil_details_realtimeFeatureUsageHook(a2, a5, v16);
  }
  return v13;
}
