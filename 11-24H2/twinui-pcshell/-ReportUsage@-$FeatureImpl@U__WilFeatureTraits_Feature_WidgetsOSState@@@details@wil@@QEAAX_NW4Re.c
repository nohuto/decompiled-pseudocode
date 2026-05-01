/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WidgetsOSState@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802867AC
 * Callers:
 *     ?RegisterHotKeys@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x180239D98 (-RegisterHotKeys@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ.c)
 *     ?subscribe_to_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1802B7520 (-subscribe_to_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIS.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9CB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1805D9CB0.c)
 *     ?unsubscribe_from_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1805DD830 (-unsubscribe_from_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18007F640 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18007F6B4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801F0EDC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180287758 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WidgetsOSState@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802920C0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WidgetsOSState@@@details.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_WidgetsOSState>::ReportUsage(
        int *a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // esi
  unsigned int v7; // ebp
  __int64 v8; // rsi
  __m128i *v9; // rax
  __m128i v10; // xmm1
  __int64 v11; // xmm0_8
  __int64 v12; // r8
  int v13; // edi
  __int64 v14; // rdx
  __m128i v15[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v16; // [rsp+70h] [rbp-48h]
  char v17[64]; // [rsp+78h] [rbp-40h] BYREF
  int v18; // [rsp+C0h] [rbp+8h] BYREF
  __int16 v19; // [rsp+C4h] [rbp+Ch]
  int v20; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v21; // [rsp+D8h] [rbp+20h]

  v21 = a4;
  LOBYTE(v20) = a3;
  v4 = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v21 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WidgetsOSState>::GetCachedFeatureEnabledState(
                       a1,
                       v15);
    LOWORD(v4) = v21;
  }
  v19 = 3;
  v20 = 3;
  v7 = v6;
  v18 = 0;
  v8 = 4 * (v6 ^ 1) + 2;
  v9 = (__m128i *)wil_details_FeatureReporting_RecordUsageInCache(v17, a1 + 2, v8, 0LL);
  v10 = *v9;
  v11 = v9[1].m128i_i64[0];
  LODWORD(v9) = _mm_cvtsi128_si32(*v9);
  v15[0] = v10;
  v16 = v11;
  if ( (_DWORD)v9 )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (char *)&wil::details::g_enabledStateManager,
      43713192,
      (struct wil_details_FeatureReportingCache *)(a1 + 2));
    v10 = v15[0];
  }
  v12 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v10, 4));
  if ( (_DWORD)v12 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)0x29B02A8,
      (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v10, 8)),
      v12);
  v13 = v16;
  if ( !(_DWORD)v16 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( (v4 & 0x400) != 0 )
  {
    v14 = (unsigned int)v8;
    if ( (v4 & 0x800) != 0 )
      LODWORD(v14) = v8 | 0x80000000;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x29B02A8, v14, 0LL);
  }
  if ( !v13 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v12) = 3;
      g_wil_details_realtimeFeatureUsageHook(43713192LL, (unsigned int)v8, v12);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(43713192LL, &v18, 0LL, v7, &v20, 0LL, 0, 1LL);
  }
}
