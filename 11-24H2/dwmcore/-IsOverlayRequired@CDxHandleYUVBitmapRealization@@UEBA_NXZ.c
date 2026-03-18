/*
 * XREFs of ?IsOverlayRequired@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180222A50
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@details@wil@@QEAA_NXZ @ 0x1802435B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResour.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::IsOverlayRequired(CDxHandleYUVBitmapRealization *this)
{
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::GetImpl'::`2'::impl) )
    return (*((_DWORD *)this - 22) & 0x80) != 0;
  if ( (*((_DWORD *)this - 22) & 0x80u) == 0 )
    return *((_BYTE *)this + 65) == 0;
  return 1;
}
