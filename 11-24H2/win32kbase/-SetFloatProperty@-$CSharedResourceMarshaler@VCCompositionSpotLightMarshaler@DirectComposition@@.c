/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionSpotLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14022D5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140128410 (-SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     Feature_1282722105__private_IsEnabledDeviceUsageNoInline @ 0x140225478 (Feature_1282722105__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionSpotLightMarshaler,2>::SetFloatProperty(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  Feature_1282722105__private_IsEnabledDeviceUsageNoInline();
  return DirectComposition::CCompositionSpotLightMarshaler::SetFloatProperty(this, a2, a3, a4);
}
