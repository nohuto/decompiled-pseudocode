/*
 * XREFs of ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x1800E3E70
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800E1E6C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1800E3F48 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToCustomAnimation(
        InteractionSourceManager *this)
{
  InteractionSourceManager *v1; // rcx

  if ( InteractionSourceManager::HasActiveManipulation(this) )
    InteractionSourceManager::ClearActiveManipulations(v1);
}
