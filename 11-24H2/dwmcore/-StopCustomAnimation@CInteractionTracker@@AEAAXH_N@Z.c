/*
 * XREFs of ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800E556C
 * Callers:
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800E59E8 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800E5AB4 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E63C0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801E13E8 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801E143C (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x1800163B0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x1800E5620 (-ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x18029DC6C (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimation(CInteractionTracker *this, int a2, char a3)
{
  __int64 v6; // rcx
  __int64 TargetResource; // rax
  struct CResource *v8; // rdi

  if ( (unsigned __int64)a2 < 2 )
  {
    v6 = *((_QWORD *)this + a2 + 44);
    if ( v6 )
    {
      TargetResource = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v6);
      v8 = (struct CResource *)TargetResource;
      if ( TargetResource )
      {
        if ( *((_QWORD *)this + 80) && a3 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)TargetResource + 64LL))(
                 TargetResource,
                 92LL) )
          {
            CInteractionTrackerBindingManager::SetCustomAnimationFinalValue(
              *((_QWORD *)this + 80),
              this,
              v8,
              (unsigned int)a2);
          }
        }
        *((_BYTE *)v8 + 224) &= ~1u;
        CResource::UnRegisterNotifierInternal(this, v8);
      }
      CInteractionTracker::ClearCustomAnimation(this, a2);
    }
  }
}
