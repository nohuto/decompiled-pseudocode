/*
 * XREFs of ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x1800F9BC8
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800F86F4 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18003E984 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToCustomAnimation(
        InteractionSourceManager *this)
{
  InteractionSourceManager *v1; // rcx

  if ( InteractionSourceManager::HasActiveManipulation(this) )
    InteractionSourceManager::ClearActiveManipulations(v1);
}
