/*
 * XREFs of ?SetIconicVisual@CAnimationComponent@@QEAAXPEAVCIconicAnimatedVisual@@@Z @ 0x1800A7008
 * Callers:
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800DD83C (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CAnimationComponent::SetIconicVisual(CAnimationComponent *this, struct CIconicAnimatedVisual *a2)
{
  *((_QWORD *)this + 19) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
}
