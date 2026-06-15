/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId@@@details@wil@@QEAA_NXZ @ 0x1800EFBDC
 * Callers:
 *     ?FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18007C710 (-FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV-$vector@V-$ComPtr@U.c)
 *     ?GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18008C890 (-GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteri.c)
 *     ?IsEndpointDefaultAudioEndpoint@@YAJPEAUIMMDevice@@PEAH@Z @ 0x1800EDFA0 (-IsEndpointDefaultAudioEndpoint@@YAJPEAUIMMDevice@@PEAH@Z.c)
 *     ?OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x180127B10 (-OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800ECC50 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizat.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EF094 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
