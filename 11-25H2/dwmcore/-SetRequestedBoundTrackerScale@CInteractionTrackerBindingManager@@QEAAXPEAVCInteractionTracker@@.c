/*
 * XREFs of ?SetRequestedBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M@Z @ 0x180221104
 * Callers:
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x180221080 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 * Callees:
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1800F849C (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 */

void __fastcall CInteractionTrackerBindingManager::SetRequestedBoundTrackerScale(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        float a3)
{
  *((_BYTE *)a2 + 541) |= 1u;
  CInteractionTrackerBindingManager::UpdateBoundTrackerScale(this, a2, a3, 1);
  CInteractionTracker::DemoteToBoundTracker(a2, 0);
}
