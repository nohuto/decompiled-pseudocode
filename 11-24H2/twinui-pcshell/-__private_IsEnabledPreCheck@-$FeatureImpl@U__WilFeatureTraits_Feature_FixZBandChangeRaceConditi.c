/*
 * XREFs of ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180175F78
 * Callers:
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x180175CF0 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 * Callees:
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18007F640 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18007F6B4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18010E494 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondit.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801F0EDC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180287758 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::__private_IsEnabledPreCheck(
        int *a1,
        char a2)
{
  unsigned int v2; // ebx
  __m128i *v4; // rax
  unsigned int v5; // r9d
  __m128i v6; // xmm1
  __int64 v7; // r8
  const char *v9; // [rsp+20h] [rbp-88h]
  __m128i v10; // [rsp+50h] [rbp-58h]
  __int64 v11; // [rsp+70h] [rbp-38h]
  _BYTE v12[48]; // [rsp+78h] [rbp-30h] BYREF
  int v13; // [rsp+B0h] [rbp+8h] BYREF
  __int16 v14; // [rsp+B4h] [rbp+Ch]
  int v15; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v16; // [rsp+C0h] [rbp+18h] BYREF

  LOBYTE(v15) = a2;
  v2 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v16 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetCachedFeatureEnabledState(
             (wil::details *)a1,
             &v16);
    v2 = v16;
  }
  v14 = 3;
  v13 = 0;
  v15 = 3;
  v4 = (__m128i *)wil_details_FeatureReporting_RecordUsageInCache(v12, a1 + 2, 2LL, 0LL);
  v6 = *v4;
  v10 = *v4;
  v11 = v4[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(*v4) )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (char *)&wil::details::g_enabledStateManager,
      9910473,
      (struct wil_details_FeatureReportingCache *)(a1 + 2));
    v6 = v10;
  }
  v7 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
  if ( (_DWORD)v7 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)0x9738C9,
      _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)),
      v7,
      v5,
      v9);
  if ( !(_DWORD)v11 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( (v2 & 0x400) != 0 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x9738C9, (v2 >> 11 << 31) + 2, 0, v5, v9);
  if ( !(_DWORD)v11 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v7) = 3;
      g_wil_details_realtimeFeatureUsageHook(9910473LL, 2LL, v7);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(9910473LL, &v13, 0LL, 1LL, &v15, 0LL, 0, 1LL);
  }
  return 1;
}
