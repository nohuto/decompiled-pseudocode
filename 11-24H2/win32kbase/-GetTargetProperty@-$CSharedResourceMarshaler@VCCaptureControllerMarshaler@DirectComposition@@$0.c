/*
 * XREFs of ?GetTargetProperty@?$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEBAPEBUResPropInfo@2@I@Z @ 0x140224EA0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_3046074680__private_IsEnabledDeviceUsageNoInline @ 0x1402254CC (Feature_3046074680__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTargetProperty@CResourceMarshaler@DirectComposition@@UEBAPEBUResPropInfo@2@I@Z @ 0x14022C940 (-GetTargetProperty@CResourceMarshaler@DirectComposition@@UEBAPEBUResPropInfo@2@I@Z.c)
 */

const struct DirectComposition::ResPropInfo *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCaptureControllerMarshaler,2>::GetTargetProperty(
        DirectComposition::CResourceMarshaler *this,
        unsigned int a2)
{
  Feature_3046074680__private_IsEnabledDeviceUsageNoInline();
  return DirectComposition::CResourceMarshaler::GetTargetProperty(this, a2);
}
