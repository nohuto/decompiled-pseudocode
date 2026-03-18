/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14022D620
 * Callers:
 *     <none>
 * Callees:
 *     Feature_1282722105__private_IsEnabledDeviceUsageNoInline @ 0x140225478 (Feature_1282722105__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetFloatProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140230D70 (-SetFloatProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransform3DMarshaler,2>::SetFloatProperty(
        DirectComposition::CMatrixTransform3DMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  Feature_1282722105__private_IsEnabledDeviceUsageNoInline();
  return DirectComposition::CMatrixTransform3DMarshaler::SetFloatProperty(this, a2, a3, a4);
}
