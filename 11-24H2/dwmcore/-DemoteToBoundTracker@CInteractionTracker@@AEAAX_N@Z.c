/*
 * XREFs of ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800E5AB4
 * Callers:
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800DF830 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?SetRequestedBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M@Z @ 0x1800E0004 (-SetRequestedBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1800E1C14 (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1800E1D34 (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1800E2194 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1800E51BC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800E556C (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1800E5B6C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CInteractionTracker::DemoteToBoundTracker(CInteractionTracker *this, char a2)
{
  char v2; // al
  struct CResource *v5; // rdx
  struct CResource *v6; // rdx

  v2 = *((_BYTE *)this + 541);
  if ( (v2 & 1) != 0 )
  {
    *((_BYTE *)this + 541) = v2 & 0xFE;
    CInteractionTracker::DestroyInteractionAnimations(this);
    v5 = (struct CResource *)*((_QWORD *)this + 58);
    if ( v5 )
    {
      CResource::UnRegisterNotifierInternal(this, v5);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 58);
    }
    v6 = (struct CResource *)*((_QWORD *)this + 59);
    if ( v6 )
    {
      CResource::UnRegisterNotifierInternal(this, v6);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 59);
    }
    CInteractionTracker::StopCustomAnimation(this, 0, a2);
    if ( *((_QWORD *)this + 45) )
    {
      if ( (*((_BYTE *)this + 541) & 2) == 0 )
        CInteractionTracker::StopCustomAnimation(this, 1, a2);
    }
  }
}
