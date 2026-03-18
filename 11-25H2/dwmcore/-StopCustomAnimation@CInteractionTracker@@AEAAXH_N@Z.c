/*
 * XREFs of ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800F775C
 * Callers:
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1800EF8D4 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1800EF928 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F63F0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800F75E4 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800F7718 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x180060BE0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x1800F7810 (-ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1802A7A40 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
                 91LL) )
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
