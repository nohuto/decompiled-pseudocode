/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoveDeviceFormatChangeHandling@@@details@wil@@QEAA_NXZ @ 0x1801384F4
 * Callers:
 *     ?IsPropertyChangeRelevant@CSpatialProperties@@QEAA_NAEBU_tagpropertykey@@@Z @ 0x180135060 (-IsPropertyChangeRelevant@CSpatialProperties@@QEAA_NAEBU_tagpropertykey@@@Z.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180135110 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoveDeviceFormatChangeHandling@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180133A0C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoveDeviceFo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoveDeviceFormatChangeHandling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180135E24 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoveDeviceFormatChangeHandlin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_RemoveDeviceFormatChangeHandling>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_RemoveDeviceFormatChangeHandling>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_RemoveDeviceFormatChangeHandling>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
