/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180094FB8
 * Callers:
 *     ?SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ @ 0x180094374 (-SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ.c)
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180094530 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18025B7B0 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025BF10 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802686C0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1805577C4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ @ 0x180563000 (-ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ.c)
 *     ??$AnimateOperation@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUIVirtualDesktop@@@Z0W4VirtualDesktopSwitchDirection@@0@Z @ 0x180567110 (--$AnimateOperation@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopMa.c)
 *     ??$AnimateOperation@PEAUIVirtualDesktop@@PEAU1@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUIVirtualDesktop@@0@Z0W4VirtualDesktopSwitchDirection@@00@Z @ 0x180567214 (--$AnimateOperation@PEAUIVirtualDesktop@@PEAU1@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDes.c)
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180568BD0 (-CurrentVirtualDesktopChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18007F640 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18007F6B4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180093BDC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801F0EDC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_MapReportingKind @ 0x18028670C (wil_details_MapReportingKind.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180287758 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // esi
  unsigned int v7; // ebp
  struct wil_details_FeatureReportingCache *v8; // r14
  unsigned int v9; // eax
  char *v10; // rdx
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
  unsigned int v24; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+20h]

  v25 = a4;
  v4 = *(_DWORD *)a1;
  v6 = a3;
  v7 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v25 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::GetCachedFeatureEnabledState(a1, v19);
    LOWORD(v4) = v25;
  }
  v8 = (wil::details *)((char *)a1 + 8);
  v22 = 3;
  v23 = 3;
  v24 = v6;
  if ( (_BYTE)v6 )
  {
    v9 = wil_details_MapReportingKind(v6, v7);
    v10 = (char *)a1 + 8;
    v11 = v9;
    v12 = wil_details_FeatureReporting_RecordUsageInCache(v21, v10, v9, 0LL);
    v14 = *(__m128i *)v12;
    v20 = *(_QWORD *)(v12 + 16);
    v19[0] = v14;
    if ( g_wil_details_RecordSRUMFeatureUsage && (v11 - 100 <= 0x31 || !v11) )
    {
      g_wil_details_RecordSRUMFeatureUsage(27923788LL, v11, 1LL);
      v14 = v19[0];
    }
    if ( _mm_cvtsi128_si32(v14) )
    {
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        (char *)&wil::details::g_enabledStateManager,
        27923788,
        v8);
      v14 = v19[0];
    }
    v15 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v14, 4));
    if ( (_DWORD)v15 )
      wil::details::WilApi_RecordFeatureUsage(
        (wil::details *)0x1AA154C,
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
      wil::details::WilApi_RecordFeatureUsage((wil::details *)0x1AA154C, v17, 0, v13, v18);
    }
    if ( !v16 )
    {
      if ( g_wil_details_realtimeFeatureUsageHook )
      {
        LOBYTE(v15) = 3;
        g_wil_details_realtimeFeatureUsageHook(27923788LL, v11, v15);
      }
      if ( g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(27923788LL, &v22, 0LL, v7, &v24, 0LL, 0, 1LL);
    }
  }
}
