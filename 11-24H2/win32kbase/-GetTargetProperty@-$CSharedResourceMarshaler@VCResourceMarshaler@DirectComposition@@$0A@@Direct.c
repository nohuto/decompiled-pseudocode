/*
 * XREFs of ?GetTargetProperty@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@UEBAPEBUResPropInfo@2@I@Z @ 0x140224E60
 * Callers:
 *     <none>
 * Callees:
 *     Feature_3046074680__private_IsEnabledDeviceUsageNoInline @ 0x1402254CC (Feature_3046074680__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTargetProperty@CResourceMarshaler@DirectComposition@@UEBAPEBUResPropInfo@2@I@Z @ 0x14022C940 (-GetTargetProperty@CResourceMarshaler@DirectComposition@@UEBAPEBUResPropInfo@2@I@Z.c)
 */

const struct DirectComposition::ResPropInfo *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::GetTargetProperty(
        DirectComposition::CResourceMarshaler *this,
        unsigned int a2)
{
  if ( (unsigned int)Feature_3046074680__private_IsEnabledDeviceUsageNoInline() )
    return 0LL;
  else
    return DirectComposition::CResourceMarshaler::GetTargetProperty(this, a2);
}
