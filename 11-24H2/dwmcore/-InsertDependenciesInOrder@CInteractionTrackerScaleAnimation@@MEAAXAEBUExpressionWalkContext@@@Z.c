/*
 * XREFs of ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAXAEBUExpressionWalkContext@@@Z @ 0x180227290
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800E42A8 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::InsertDependenciesInOrder(
        CInteractionTrackerScaleAnimation *this,
        const struct ExpressionWalkContext *a2)
{
  struct CInteractionTracker *InteractionTracker; // rax
  const char *v5; // r9

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  CInteractionTracker::InsertDependenciesForAxis((__int64)InteractionTracker, (__int64)a2, *((_DWORD *)this + 81), v5);
}
