/*
 * XREFs of ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x1800E3F24
 * Callers:
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x1800E3E94 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180225690 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x18022A1F0 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1800E3F90 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

struct CInteraction *__fastcall InteractionSourceManager::GetActiveInteraction(InteractionSourceManager *this)
{
  struct CChainingHelper *ActiveChainingHelper; // rcx
  struct CInteraction *result; // rax

  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper(this);
  result = 0LL;
  if ( ActiveChainingHelper )
    return (struct CInteraction *)*((_QWORD *)ActiveChainingHelper + 5);
  return result;
}
