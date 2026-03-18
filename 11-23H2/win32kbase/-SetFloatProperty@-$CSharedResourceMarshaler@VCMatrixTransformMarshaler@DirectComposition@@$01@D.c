/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCMatrixTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5F70
 * Callers:
 *     <none>
 * Callees:
 *     Feature_1349830969__private_IsEnabledDeviceUsage @ 0x1C00D5C3C (Feature_1349830969__private_IsEnabledDeviceUsage.c)
 *     ?SetFloatProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0212910 (-SetFloatProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransformMarshaler,2>::SetFloatProperty(
        DirectComposition::CMatrixTransformMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  Feature_1349830969__private_IsEnabledDeviceUsage();
  return DirectComposition::CMatrixTransformMarshaler::SetFloatProperty(this, a2, a3, a4);
}
