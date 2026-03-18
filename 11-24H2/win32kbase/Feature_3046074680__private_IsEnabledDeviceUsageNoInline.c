/*
 * XREFs of Feature_3046074680__private_IsEnabledDeviceUsageNoInline @ 0x1402254CC
 * Callers:
 *     ?GetTargetProperty@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@UEBAPEBUResPropInfo@2@I@Z @ 0x140224E60 (-GetTargetProperty@-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@Direct.c)
 *     ?GetTargetProperty@?$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEBAPEBUResPropInfo@2@I@Z @ 0x140224EA0 (-GetTargetProperty@-$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$0.c)
 * Callees:
 *     Feature_3046074680__private_IsEnabledFallback @ 0x140225504 (Feature_3046074680__private_IsEnabledFallback.c)
 */

__int64 Feature_3046074680__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3046074680__private_featureState & 0x10) != 0 )
    return Feature_3046074680__private_featureState & 1;
  else
    return Feature_3046074680__private_IsEnabledFallback((unsigned int)Feature_3046074680__private_featureState, 3LL);
}
