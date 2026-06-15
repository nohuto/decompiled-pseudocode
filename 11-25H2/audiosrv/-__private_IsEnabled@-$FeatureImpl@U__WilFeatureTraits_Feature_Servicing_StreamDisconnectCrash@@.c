/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash@@@details@wil@@QEAA_NXZ @ 0x1800C1564
 * Callers:
 *     ?ReevaluateStreamsOnStreamGroup@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIStreamGroupProxy@@@Z @ 0x180089200 (-ReevaluateStreamsOnStreamGroup@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescripto.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008C450 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     wil::details::lambda_call__lambda_d949e4219266415162887edcf312072e___::_lambda_call__lambda_d949e4219266415162887edcf312072e___ @ 0x1800D35E8 (wil--details--lambda_call__lambda_d949e4219266415162887edcf312072e___--_lambda_call__lambda_d949.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DC130 (-RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BD060 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StreamDisconne.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BFE78 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash@@@details.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
