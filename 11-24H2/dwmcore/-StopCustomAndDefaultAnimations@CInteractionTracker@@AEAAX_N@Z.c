/*
 * XREFs of ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800E5BE8
 * Callers:
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800DF830 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1800E5790 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1800E5F5C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801E05CC (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801E09AC (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800E59E8 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CInteractionTracker::StopCustomAndDefaultAnimations(struct CResource **this, char a2)
{
  struct CResource *v3; // rdx
  struct CResource *v4; // rdx

  CInteractionTracker::StopCustomAnimations((CInteractionTracker *)this, a2);
  v3 = this[58];
  if ( v3 )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, v3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 58);
  }
  v4 = this[59];
  if ( v4 )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 59);
  }
}
