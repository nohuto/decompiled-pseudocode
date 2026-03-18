/*
 * XREFs of ?TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ @ 0x1800E40C4
 * Callers:
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x1800DE200 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1800E2EDC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x1802223FC (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800E42A8 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

struct CChainingHelper *__fastcall CScrollAnimation::TryGetChainingHelper(CScrollAnimation *this)
{
  struct CInteractionTracker *InteractionTracker; // rax

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  return InteractionSourceManager::TryGetActiveChainingHelper((struct CInteractionTracker *)((char *)InteractionTracker
                                                                                           + 208));
}
