/*
 * XREFs of ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800F757C
 * Callers:
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18003DCF4 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1800EFE88 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1800F06E4 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1800F6BAC (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800FC434 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800F7718 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 */

void __fastcall CInteractionTracker::StopCustomAndDefaultAnimations(struct CResource **this, bool a2)
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
