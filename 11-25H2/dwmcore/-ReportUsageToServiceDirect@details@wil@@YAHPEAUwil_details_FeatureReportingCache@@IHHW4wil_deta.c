/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x1800C8A90
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18024A830 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wil@@QEAAX.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1800C8C00 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18022DAEC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180234C5C (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180234FBC (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8)
{
  __int64 v12; // rax
  unsigned int v13; // r9d
  __m128i v14; // xmm1
  unsigned int v15; // r8d
  unsigned int v17; // edx
  const char *v18; // [rsp+20h] [rbp-58h]
  __m128i v19; // [rsp+30h] [rbp-48h]
  __int64 v20; // [rsp+50h] [rbp-28h]
  _BYTE v21[24]; // [rsp+58h] [rbp-20h] BYREF

  v12 = wil_details_FeatureReporting_RecordUsageInCache(v21, a1, a5);
  v14 = *(__m128i *)v12;
  v20 = *(_QWORD *)(v12 + 16);
  v19 = *(__m128i *)v12;
  if ( g_wil_details_RecordSRUMFeatureUsage && (a5 - 100 <= 0x31 || !a5) )
  {
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1LL);
    v14 = v19;
  }
  if ( _mm_cvtsi128_si32(v14) )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(&wil::details::g_enabledStateManager, a2, a1);
    v14 = v19;
  }
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 4));
  if ( v15 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)a2,
      _mm_cvtsi128_si32(_mm_srli_si128(v14, 8)),
      v15,
      v13,
      v18);
  if ( !(_DWORD)v20 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( a3 )
  {
    v17 = a5 | 0x80000000;
    if ( !a4 )
      v17 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v17, 0, v13, v18);
  }
  if ( (_DWORD)v20 )
    return 0LL;
  if ( g_wil_details_realtimeFeatureUsageHook )
    g_wil_details_realtimeFeatureUsageHook(a2, a5, a8);
  return 1LL;
}
