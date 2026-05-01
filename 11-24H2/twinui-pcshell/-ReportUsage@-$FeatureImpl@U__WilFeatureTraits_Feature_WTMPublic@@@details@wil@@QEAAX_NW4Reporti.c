/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007E1F4
 * Callers:
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002A330 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x18005103C (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18007DBF0 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x18007DDC0 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapSize@Imaging@Graphics@56@V?$com_ptr_t@UIWICBitmapSource@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007DFE0 (-IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapS.c)
 *     ?SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x18007E09C (-SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800C1890 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 *     ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800C4258 (-SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilter.c)
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x18016B498 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 *     ?UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180222F9C (-UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x18057D8F8 (-ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     ?GetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x18057DFF4 (-GetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_K@Z @ 0x18057E030 (-GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A7B9C (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18007EFA0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18007F640 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18007F6B4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801F0EDC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180287758 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
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
  unsigned int v10; // r9d
  __m128i v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // r8
  int v14; // edi
  unsigned int v15; // edx
  const char *v16; // [rsp+20h] [rbp-98h]
  __m128i v17[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v18; // [rsp+70h] [rbp-48h]
  char v19[64]; // [rsp+78h] [rbp-40h] BYREF
  int v20; // [rsp+C0h] [rbp+8h] BYREF
  __int16 v21; // [rsp+C4h] [rbp+Ch]
  int v22; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+20h]

  v23 = a4;
  LOBYTE(v22) = a3;
  v4 = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v23 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::GetCachedFeatureEnabledState(
                       a1,
                       v17);
    LOWORD(v4) = v23;
  }
  v21 = 3;
  v22 = 3;
  v7 = v6;
  v20 = 0;
  v8 = 4 * (v6 ^ 1) + 2;
  v9 = (__m128i *)wil_details_FeatureReporting_RecordUsageInCache(v19, a1 + 2, v8, 0LL);
  v11 = *v9;
  v12 = v9[1].m128i_i64[0];
  LODWORD(v9) = _mm_cvtsi128_si32(*v9);
  v17[0] = v11;
  v18 = v12;
  if ( (_DWORD)v9 )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      &wil::details::g_enabledStateManager,
      0x27F07E2u,
      (struct wil_details_FeatureReportingCache *)(a1 + 2));
    v11 = v17[0];
  }
  v13 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 4));
  if ( (_DWORD)v13 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)0x27F07E2,
      _mm_cvtsi128_si32(_mm_srli_si128(v11, 8)),
      v13,
      v10,
      v16);
  v14 = v18;
  if ( !(_DWORD)v18 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( (v4 & 0x400) != 0 )
  {
    v15 = v8;
    if ( (v4 & 0x800) != 0 )
      v15 = v8 | 0x80000000;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x27F07E2, v15, 0, v10, v16);
  }
  if ( !v14 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v13) = 3;
      g_wil_details_realtimeFeatureUsageHook(41879522LL, (unsigned int)v8, v13);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(41879522LL, &v20, 0LL, v7, &v22, 0LL, 0, 1LL);
  }
}
