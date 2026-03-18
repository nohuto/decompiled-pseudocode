/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCMatrixTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14022D670
 * Callers:
 *     <none>
 * Callees:
 *     Feature_1282722105__private_IsEnabledDeviceUsageNoInline @ 0x140225478 (Feature_1282722105__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetFloatProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140230C20 (-SetFloatProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransformMarshaler,2>::SetFloatProperty(
        DirectComposition::CMatrixTransformMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  Feature_1282722105__private_IsEnabledDeviceUsageNoInline();
  return DirectComposition::CMatrixTransformMarshaler::SetFloatProperty(this, a2, a3, a4);
}
