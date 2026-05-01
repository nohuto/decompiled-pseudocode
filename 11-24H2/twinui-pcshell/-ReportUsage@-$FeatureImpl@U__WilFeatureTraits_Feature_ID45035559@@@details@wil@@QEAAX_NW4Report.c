/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802875C0
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180043214 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x18007DDC0 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18011963C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ @ 0x180133F40 (-ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ.c)
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x18013F810 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x18013FB44 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x18016F5F0 (-ShouldHaveAppView@CClassicWindow@@UEBA_NXZ.c)
 *     ?MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEA_N@Z @ 0x180170C40 (-MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVir.c)
 *     ?OnViewRemoved@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@@Z @ 0x18017F890 (-OnViewRemoved@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnViewAdded@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x1801A7DB0 (-OnViewAdded@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PE.c)
 *     ?CanViewMoveDesktops@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@@Z @ 0x1801D75C0 (-CanViewMoveDesktops@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1802696A0 (-IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x180286950 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@PEA_N@Z @ 0x180286D40 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x18028DAB4 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 *     ?IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18054E570 (-IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtua.c)
 * Callees:
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18007F640 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18007F6B4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801F0EDC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18028744C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180287758 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
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
    v21 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::GetCachedFeatureEnabledState(
             (wil::details *)a1,
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
      45035559,
      (struct wil_details_FeatureReportingCache *)(a1 + 2));
    v10 = v15[0];
  }
  v12 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v10, 4));
  if ( (_DWORD)v12 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)0x2AF3027,
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
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x2AF3027, v14, 0LL);
  }
  if ( !v13 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v12) = 3;
      g_wil_details_realtimeFeatureUsageHook(45035559LL, (unsigned int)v8, v12);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(45035559LL, &v18, 0LL, v7, &v20, 0LL, 0, 1LL);
  }
}
