/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStream_Crash@@@details@wil@@QEAA_NXZ @ 0x1800C0138
 * Callers:
 *     ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x180076C20 (-FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacte.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800BBFB0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStream_Crash@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BC738 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStream_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStream_Crash@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BEEB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStream_Crash@@@details@w.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForEachStream_Crash>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForEachStream_Crash>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForEachStream_Crash>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
