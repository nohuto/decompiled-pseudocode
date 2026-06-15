/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixBTLECommMixFormat@@@details@wil@@QEAA_NXZ @ 0x1800E5008
 * Callers:
 *     ?TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@AEAV?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@233@Z @ 0x1800E4C40 (-TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@W4_.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixBTLECommMixFormat@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4470 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixBTLECommMix.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixBTLECommMixFormat@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E4AAC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixBTLECommMixFormat@@@details@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixBTLECommMixFormat>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixBTLECommMixFormat>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixBTLECommMixFormat>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
