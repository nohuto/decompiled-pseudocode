/*
 * XREFs of ?TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ @ 0x1800F3B8C
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1800F3724 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x1800F46DC (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x18022D86C (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800F3D68 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

struct CChainingHelper *__fastcall CScrollAnimation::TryGetChainingHelper(CScrollAnimation *this)
{
  struct CInteractionTracker *InteractionTracker; // rax

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  return InteractionSourceManager::TryGetActiveChainingHelper((struct CInteractionTracker *)((char *)InteractionTracker
                                                                                           + 208));
}
