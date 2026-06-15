/*
 * XREFs of ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x140085458
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2511@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x140082760 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2511@@@details@w.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2602@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x140082834 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2602@@@details@w.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2605@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x14008293C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2605@@@details@w.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioCrossProcessFormatCorruption@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x140082A24 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioCrossPro.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Ten2Loc@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x140082B14 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Ten2Loc@@@details@wil@@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x140082B98 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@w.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall wil::details::WilApi_GetFeatureEnabledState(
        wil::details *this,
        __int64 a2,
        __int64 a3,
        int *a4))(wil::details *, __int64, __int64, int *)
{
  __int64 (__fastcall *result)(wil::details *, __int64, __int64, int *); // rax

  result = (__int64 (__fastcall *)(wil::details *, __int64, __int64, int *))g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState )
    return (__int64 (__fastcall *)(wil::details *, __int64, __int64, int *))result(this, 3LL, a3, a4);
  result = (__int64 (__fastcall *)(wil::details *, __int64, __int64, int *))g_wil_details_apiGetFeatureEnabledState;
  if ( g_wil_details_apiGetFeatureEnabledState )
    return (__int64 (__fastcall *)(wil::details *, __int64, __int64, int *))result(this, 3LL, a3, a4);
  return result;
}
