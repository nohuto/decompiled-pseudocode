/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x14006FB38
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ImplVal@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x14006FC88 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ImplVal@@@details@wil@@A.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2505@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x14006FDB4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2505@@@details@wi.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PerfImpTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x14006FEE0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PerfImpTest@@@details@wi.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x14007000C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoteAudioExc.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_03_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x140070138 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_03_NonSec@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_04_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x140070264 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_04_NonSec@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_05_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x140070390 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_05_NonSec@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1400704BC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wi.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLabVal@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1400705E8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLabVal@@@details@wil.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x14007C98C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x14006FB60 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

unsigned int __fastcall wil::details::EnsureSubscribedToFeatureConfigurationChanges(wil::details *this)
{
  unsigned int result; // eax

  result = dword_1400C3CAC;
  if ( !dword_1400C3CAC )
    return wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  return result;
}
