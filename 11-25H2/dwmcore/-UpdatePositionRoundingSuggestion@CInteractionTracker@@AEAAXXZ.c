/*
 * XREFs of ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1800F96F4
 * Callers:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x18003BDB0 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800F86F4 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x1802003BC (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1800F4594 (-IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 */

void __fastcall CInteractionTracker::UpdatePositionRoundingSuggestion(CInteractionTracker *this)
{
  int v1; // edx
  char IsPositionRoundingSuggestedForActiveManipulation; // r8
  CInteractionTracker *v3; // r10

  v1 = *((_DWORD *)this + 46);
  IsPositionRoundingSuggestedForActiveManipulation = 0;
  v3 = this;
  if ( v1 )
  {
    if ( v1 == 1 )
      IsPositionRoundingSuggestedForActiveManipulation = InteractionSourceManager::IsPositionRoundingSuggestedForActiveManipulation((CInteractionTracker *)((char *)this + 208));
  }
  else
  {
    IsPositionRoundingSuggestedForActiveManipulation = 1;
  }
  if ( (*((_BYTE *)v3 + 540) & 1) != IsPositionRoundingSuggestedForActiveManipulation )
  {
    *((_BYTE *)v3 + 540) = IsPositionRoundingSuggestedForActiveManipulation | *((_BYTE *)v3 + 540) & 0xFE;
    CResource::InvalidateAnimationSources(v3, 60LL);
  }
}
