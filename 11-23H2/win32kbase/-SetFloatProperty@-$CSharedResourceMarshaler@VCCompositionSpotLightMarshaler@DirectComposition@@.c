/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionSpotLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5E80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00B5DC0 (-SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     Feature_1349830969__private_IsEnabledDeviceUsage @ 0x1C00D5C3C (Feature_1349830969__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionSpotLightMarshaler,2>::SetFloatProperty(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  Feature_1349830969__private_IsEnabledDeviceUsage();
  return DirectComposition::CCompositionSpotLightMarshaler::SetFloatProperty(this, a2, a3, a4);
}
