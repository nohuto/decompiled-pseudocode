/*
 * XREFs of ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x1802A7000
 * Callers:
 *     ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x1802A74C0 (-ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1800EFE88 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?ApplyImpulse@CScrollAnimation@@QEAAXM@Z @ 0x1802B52EC (-ApplyImpulse@CScrollAnimation@@QEAAXM@Z.c)
 */

char __fastcall CInteractionTracker::ApplyPositionImpulse(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  int v2; // r8d
  char v3; // di

  v2 = *((_DWORD *)this + 46);
  v3 = 0;
  if ( !v2 || (unsigned int)(v2 - 2) <= 1 )
  {
    v3 = 1;
    CInteractionTracker::TransitionToInertia((__int64)this, 2);
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      CScrollAnimation::ApplyImpulse(*((CScrollAnimation **)this + 42), *(float *)a2);
      CScrollAnimation::ApplyImpulse(*((CScrollAnimation **)this + 43), *((float *)a2 + 1));
    }
  }
  return v3;
}
