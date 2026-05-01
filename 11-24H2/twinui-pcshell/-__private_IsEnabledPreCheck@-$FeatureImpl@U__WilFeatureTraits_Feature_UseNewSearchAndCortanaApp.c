/*
 * XREFs of ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800F32CC
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800F2D78 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@wil@@SA_NXZ @ 0x1800F30A0 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@wil@@SA_NXZ.c)
 *     ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x1800F30C0 (-PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z.c)
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18024AF10 (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 *     ?ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1803DE8C0 (-ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 * Callees:
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18007F640 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18007F6B4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801F0EDC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18022ED34 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaAp.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180287758 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::__private_IsEnabledPreCheck(
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
    v16 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetCachedFeatureEnabledState(
                       a1,
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
      19263623,
      (struct wil_details_FeatureReportingCache *)(a1 + 2));
    v6 = v10;
  }
  v7 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
  if ( (_DWORD)v7 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)0x125F087,
      _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)),
      v7,
      v5,
      v9);
  if ( !(_DWORD)v11 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( (v2 & 0x400) != 0 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x125F087, (v2 >> 11 << 31) + 2, 0, v5, v9);
  if ( !(_DWORD)v11 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v7) = 3;
      g_wil_details_realtimeFeatureUsageHook(19263623LL, 2LL, v7);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(19263623LL, &v13, 0LL, 1LL, &v15, 0LL, 0, 1LL);
  }
  return 1;
}
