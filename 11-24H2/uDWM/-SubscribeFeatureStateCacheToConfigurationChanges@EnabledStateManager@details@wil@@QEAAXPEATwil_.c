/*
 * XREFs of ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18008CDD0
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180078CBC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_Secondary_Windows@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800ADB24 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_Secondary_Window.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800ADD44 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@detai.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B8950 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@AE.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B8B6C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@d.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800C552C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOn.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RAIL_ServerWindowRounding@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800DAEA8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RAIL_ServerWindowRoundin.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HideGlassSheetImmediatelyOnArrangementEnd@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800EFE3C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HideGlassSheetImmediatel.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180073F64 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800759E4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 */

void __fastcall wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        int a4)
{
  RTL_SRWLOCK *v8; // rbx
  int v9; // eax
  _DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-20h]
  RTL_SRWLOCK *v12; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_DWORD *)a1 )
  {
    v8 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v9 = *(_DWORD *)(a1 + 28);
    v12 = v8;
    if ( !a4
      || a4 != v9
      || (v10[1] = 0, v10[0] = a3, v11 = a2, !wil::details_abi::heap_buffer::push_back((void **)(a1 + 80), v10, 0x10uLL)) )
    {
      _InterlockedAnd(a2, a3 != 0 ? -5 : -2111);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
  }
}
