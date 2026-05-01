/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800742D4
 * Callers:
 *     ?PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ @ 0x1800734E0 (-PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ.c)
 *     ?SetDockThreshold@CShellSnapComponent@@AEAAXXZ @ 0x180209194 (-SetDockThreshold@CShellSnapComponent@@AEAAXXZ.c)
 *     ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x1802703F0 (-OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEven.c)
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180270510 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 *     ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18059F650 (-OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x18059F860 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?OnWindowArrangementReset@CShellSnapComponent@@UEAAJXZ @ 0x18059FEA0 (-OnWindowArrangementReset@CShellSnapComponent@@UEAAJXZ.c)
 * Callees:
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18007F640 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18007F6B4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801F0EDC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_MapReportingKind @ 0x18028670C (wil_details_MapReportingKind.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180287758 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18059E6E4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@AE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // esi
  struct wil_details_FeatureReportingCache *v7; // rbp
  unsigned int v8; // r14d
  unsigned int v9; // eax
  _DWORD *v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rax
  unsigned int v13; // r9d
  __m128i v14; // xmm1
  __int64 v15; // r8
  int v16; // esi
  unsigned int v17; // edx
  const char *v18; // [rsp+20h] [rbp-A8h]
  __m128i v19[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v20; // [rsp+70h] [rbp-58h]
  char v21[80]; // [rsp+78h] [rbp-50h] BYREF
  int v22; // [rsp+D0h] [rbp+8h] BYREF
  __int16 v23; // [rsp+D4h] [rbp+Ch]
  int v24; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+20h]

  v25 = a4;
  LOBYTE(v24) = a3;
  v4 = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v25 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::GetCachedFeatureEnabledState(a1, v19);
    LOWORD(v4) = v25;
  }
  v7 = (struct wil_details_FeatureReportingCache *)(a1 + 2);
  v22 = 3;
  v23 = 3;
  v24 = 3;
  v8 = v6;
  v9 = wil_details_MapReportingKind(3LL, v6);
  v10 = a1 + 2;
  v11 = v9;
  v12 = wil_details_FeatureReporting_RecordUsageInCache(v21, v10, v9, 0LL);
  v14 = *(__m128i *)v12;
  v20 = *(_QWORD *)(v12 + 16);
  v19[0] = v14;
  if ( g_wil_details_RecordSRUMFeatureUsage && (v11 - 100 <= 0x31 || !v11) )
  {
    g_wil_details_RecordSRUMFeatureUsage(27924095LL, v11, 1LL);
    v14 = v19[0];
  }
  if ( _mm_cvtsi128_si32(v14) )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      &wil::details::g_enabledStateManager,
      0x1AA167Fu,
      v7);
    v14 = v19[0];
  }
  v15 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v14, 4));
  if ( (_DWORD)v15 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)0x1AA167F,
      _mm_cvtsi128_si32(_mm_srli_si128(v14, 8)),
      v15,
      v13,
      v18);
  v16 = v20;
  if ( !(_DWORD)v20 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( (v4 & 0x400) != 0 )
  {
    v17 = v11;
    if ( (v4 & 0x800) != 0 )
      v17 = v11 | 0x80000000;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x1AA167F, v17, 0, v13, v18);
  }
  if ( !v16 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v15) = 3;
      g_wil_details_realtimeFeatureUsageHook(27924095LL, v11, v15);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(27924095LL, &v22, 0LL, v8, &v24, 0LL, 0, 1LL);
  }
}
