/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140225010
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1401085A0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     Feature_1282722105__private_IsEnabledDeviceUsageNoInline @ 0x140225478 (Feature_1282722105__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>::SetFloatProperty(
        DirectComposition::CResourceMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  if ( (unsigned int)Feature_1282722105__private_IsEnabledDeviceUsageNoInline() )
    return 3221225485LL;
  else
    return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
}
