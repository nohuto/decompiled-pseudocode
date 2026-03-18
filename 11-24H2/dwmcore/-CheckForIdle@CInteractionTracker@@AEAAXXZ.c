/*
 * XREFs of ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1800E5684
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180013DC0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E63C0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801E13E8 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1800E3B2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1800E5790 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ @ 0x1800E5828 (-HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ.c)
 *     ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTracker@@@Z @ 0x1800E587C (-BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteracti.c)
 *     ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1800E683C (-HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1800E6D38 (-HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x1800E712C (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::CheckForIdle(CInteractionTracker *this)
{
  int v2; // ecx
  int v3; // ecx
  CInteractionTrackerBindingManager *v4; // rcx
  CInteractionTracker *v5; // rcx
  CInteractionTracker *v6; // rcx

  v2 = *((_DWORD *)this + 46) - 1;
  if ( !v2 )
    return;
  v3 = v2 - 1;
  if ( !v3 )
  {
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this)
      && ((*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 41) + 296LL))(*((_QWORD *)this + 41))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 296LL))(*((_QWORD *)this + 42))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 296LL))(*((_QWORD *)this + 43)))
      || CInteractionTracker::HasRunningDefaultPositionAnimation(this)
      || CInteractionTracker::HasRunningDefaultScaleAnimation(v5) )
    {
      return;
    }
    if ( !CInteractionTracker::IsOutOfBounds(v6) )
      goto LABEL_4;
    goto LABEL_18;
  }
  if ( v3 != 1 )
  {
LABEL_4:
    CInteractionTracker::TransitionToIdle(this);
    return;
  }
  if ( !CInteractionTracker::HasActiveCustomAnimation(this) )
  {
    if ( !CInteractionTracker::IsOutOfBounds(this) )
    {
      v4 = (CInteractionTrackerBindingManager *)*((_QWORD *)this + 80);
      if ( !v4 || !CInteractionTrackerBindingManager::BoundTrackersHaveActiveCustomAnimations(v4, this) )
        goto LABEL_4;
      return;
    }
LABEL_18:
    CInteractionTracker::TransitionToInertia(this, 0LL);
  }
}
