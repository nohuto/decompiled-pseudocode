/*
 * XREFs of ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18003D3C8
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x18003B1F0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1800EF8D4 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F63F0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18003DCF4 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1800F1F10 (-HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x1800F453C (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ @ 0x1800F7874 (-HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ.c)
 *     ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x180231B80 (-HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTracker@@@Z @ 0x180233950 (-BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteracti.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
