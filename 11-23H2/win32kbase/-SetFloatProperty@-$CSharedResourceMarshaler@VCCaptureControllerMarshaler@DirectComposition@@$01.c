/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5D40
 * Callers:
 *     <none>
 * Callees:
 *     Feature_1349830969__private_IsEnabledDeviceUsage @ 0x1C00D5C3C (Feature_1349830969__private_IsEnabledDeviceUsage.c)
 *     ?SetFloatProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C022EC20 (-SetFloatProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCaptureControllerMarshaler,2>::SetFloatProperty(
        DirectComposition::CCaptureControllerMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  Feature_1349830969__private_IsEnabledDeviceUsage();
  return DirectComposition::CCaptureControllerMarshaler::SetFloatProperty(this, a2, a3, a4);
}
