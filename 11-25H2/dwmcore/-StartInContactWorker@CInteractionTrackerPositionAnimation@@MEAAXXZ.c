/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x180231FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18003D85C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18003D970 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18003DDB8 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800F3D68 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1800F3D84 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::StartInContactWorker(CInteractionTrackerPositionAnimation *this)
{
  char ShouldChainForAxis; // bl
  struct CInteractionTracker *InteractionTracker; // rbp
  int v4; // xmm6_4
  double CurrentValue; // xmm0_8
  struct CManipulation *ActiveManipulation; // rbp
  InteractionSourceManager *v7; // rcx
  __int64 v8; // rcx

  ShouldChainForAxis = 0;
  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  if ( *((_QWORD *)this + 58) )
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 58);
  v4 = *((_DWORD *)InteractionTracker + 132);
  CurrentValue = CInteractionTracker::GetCurrentValue((__int64)InteractionTracker, *((_DWORD *)this + 81));
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((struct CInteractionTracker *)((char *)InteractionTracker + 208));
  if ( InteractionSourceManager::TryGetActiveChainingHelper(v7) && ActiveManipulation )
    ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(
                           v8,
                           *((_DWORD *)this + 81),
                           (__int64)ActiveManipulation,
                           0);
  *((_DWORD *)this + 127) = LODWORD(CurrentValue);
  *((_DWORD *)this + 144) = LODWORD(CurrentValue);
  *((_DWORD *)this + 145) = v4;
  CMotion::StartInContact((CInteractionTrackerPositionAnimation *)((char *)this + 440), ShouldChainForAxis);
}
