/*
 * XREFs of ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAXAEBUExpressionWalkContext@@@Z @ 0x1800F49C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800F3D68 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::InsertDependenciesInOrder(
        CInteractionTrackerScaleAnimation *this,
        const struct ExpressionWalkContext *a2)
{
  struct CInteractionTracker *InteractionTracker; // rax

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  CInteractionTracker::InsertDependenciesForAxis(InteractionTracker, a2, *((unsigned int *)this + 81));
}
