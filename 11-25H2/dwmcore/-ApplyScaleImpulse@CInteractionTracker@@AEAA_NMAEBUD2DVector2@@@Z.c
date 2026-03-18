/*
 * XREFs of ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x1802A715C
 * Callers:
 *     ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x1802A75D8 (-ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIO.c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1800EFE88 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?ApplyImpulse@CScrollAnimation@@QEAAXM@Z @ 0x1802B52EC (-ApplyImpulse@CScrollAnimation@@QEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker::ApplyScaleImpulse(
        CInteractionTracker *this,
        float a2,
        const struct D2DVector2 *a3)
{
  int v3; // r9d
  char v4; // di

  v3 = *((_DWORD *)this + 46);
  v4 = 0;
  if ( !v3 || (unsigned int)(v3 - 2) <= 1 )
  {
    v4 = 1;
    CInteractionTracker::TransitionToInertia((__int64)this, 2);
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      CScrollAnimation::ApplyImpulse(*((CScrollAnimation **)this + 41), a2);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 304LL))(*((_QWORD *)this + 42));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 304LL))(*((_QWORD *)this + 43));
      *(_QWORD *)((char *)this + 532) = *(_QWORD *)a3;
    }
  }
  return v4;
}
