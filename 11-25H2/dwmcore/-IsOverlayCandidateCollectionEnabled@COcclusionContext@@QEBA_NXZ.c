/*
 * XREFs of ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ @ 0x18023DE28
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180055A90 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18023FB60 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180245D90 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MinMPOSize@@@details@wil@@QEAA_NXZ @ 0x1802862F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MinMPOSize@@@details@wil@@QEAA_NX.c)
 */

bool __fastcall COcclusionContext::IsOverlayCandidateCollectionEnabled(COcclusionContext *this)
{
  char IsEnabled; // al
  char v3; // cl

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_MinMPOSize>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MinMPOSize>::GetImpl'::`2'::impl);
  v3 = 0;
  if ( !IsEnabled )
    return *((_QWORD *)this + 226) != *((_QWORD *)this + 225);
  if ( *((_BYTE *)this + 1565) )
    return *((_QWORD *)this + 226) != *((_QWORD *)this + 225);
  return v3;
}
