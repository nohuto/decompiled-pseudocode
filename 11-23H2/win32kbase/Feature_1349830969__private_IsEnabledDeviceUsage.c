/*
 * XREFs of Feature_1349830969__private_IsEnabledDeviceUsage @ 0x1C00D5C3C
 * Callers:
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5BB0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectCo.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5CF0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComp.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5D40 (-SetFloatProperty@-$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5D90 (-SetFloatProperty@-$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectCompositio.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionDistantLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5DE0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCCompositionDistantLightMarshaler@DirectCompositio.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionPointLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5E30 (-SetFloatProperty@-$CSharedResourceMarshaler@VCCompositionPointLightMarshaler@DirectComposition@.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionSpotLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5E80 (-SetFloatProperty@-$CSharedResourceMarshaler@VCCompositionSpotLightMarshaler@DirectComposition@@.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCManipulationTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5ED0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCManipulationTransformMarshaler@DirectComposition@.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5F20 (-SetFloatProperty@-$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@$01.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCMatrixTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5F70 (-SetFloatProperty@-$CSharedResourceMarshaler@VCMatrixTransformMarshaler@DirectComposition@@$01@D.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5FC0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01@Di.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D6010 (-SetFloatProperty@-$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@Di.c)
 * Callees:
 *     Feature_1349830969__private_IsEnabledFallback @ 0x1C00D5C74 (Feature_1349830969__private_IsEnabledFallback.c)
 */

__int64 Feature_1349830969__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1349830969__private_featureState & 0x10) != 0 )
    return Feature_1349830969__private_featureState & 1;
  else
    return Feature_1349830969__private_IsEnabledFallback((unsigned int)Feature_1349830969__private_featureState, 3LL);
}
