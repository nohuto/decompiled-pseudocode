/*
 * XREFs of ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1800DE9FC
 * Callers:
 *     ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x1800DE978 (-ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIO.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x180014AC0 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ?SetRequestedBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M@Z @ 0x1800E0004 (-SetRequestedBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1800E5790 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 */

char __fastcall CInteractionTracker::SetRequestedScale(CInteractionTracker *this, float a2)
{
  int v2; // edx
  char v3; // bl
  float v6; // xmm6_4
  CInteractionTrackerBindingManager *v7; // rcx

  v2 = *((_DWORD *)this + 46);
  v3 = 0;
  if ( v2 )
  {
    if ( (unsigned int)(v2 - 2) >= 2 )
      return v3;
    CInteractionTracker::TransitionToIdle(this);
  }
  v3 = 1;
  v6 = fminf(fmaxf(a2, *((float *)this + 37)), *((float *)this + 38));
  CInteractionTracker::SetScale((__int64)this, v6, 0);
  v7 = (CInteractionTrackerBindingManager *)*((_QWORD *)this + 80);
  if ( v7 )
    CInteractionTrackerBindingManager::SetRequestedBoundTrackerScale(v7, this, v6);
  return v3;
}
