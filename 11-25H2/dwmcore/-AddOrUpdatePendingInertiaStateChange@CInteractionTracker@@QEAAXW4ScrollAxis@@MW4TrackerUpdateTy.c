/*
 * XREFs of ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1800F47AC
 * Callers:
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1800EFCB8 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x1800F46DC (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800FC434 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1802A794C (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1802A7B50 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800EFB8C (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1800F46B4 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x1800F975C (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1802A794C (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 */

void __fastcall CInteractionTracker::AddOrUpdatePendingInertiaStateChange(
        __int64 a1,
        unsigned int a2,
        float a3,
        int a4)
{
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // xmm9_4
  __int64 v12; // rcx
  float ForceEngineCurrentValue; // xmm8_4
  float v14; // xmm7_4
  _DWORD v15[12]; // [rsp+20h] [rbp-58h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 504)
    && (v7 = *(_QWORD *)(a1 + 480), v8 = (unsigned int)(*(_DWORD *)(a1 + 504) - 1), *(_DWORD *)(v7 + 24 * v8) == 2) )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        if ( a2 != 2 )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        *(float *)(v7 + 24 * v8 + 16) = a3;
LABEL_8:
        v9 = 57LL;
        goto LABEL_11;
      }
      *(float *)(v7 + 24 * v8 + 8) = a3;
    }
    else
    {
      *(float *)(v7 + 24 * v8 + 4) = a3;
    }
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 96);
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1)
      && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v12 + 344)) )
    {
      ForceEngineCurrentValue = CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 344));
    }
    else
    {
      ForceEngineCurrentValue = *(float *)(a1 + 92);
    }
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1)
      && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(a1 + 336)) )
    {
      v14 = CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 336));
    }
    else
    {
      v14 = *(float *)(a1 + 88);
    }
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1)
      && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(a1 + 328)) )
    {
      CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 328));
    }
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        ForceEngineCurrentValue = a3;
      }
      else if ( a2 != 2 )
      {
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
    }
    else
    {
      v14 = a3;
    }
    *(float *)v15 = v14;
    *(float *)&v15[1] = ForceEngineCurrentValue;
    v15[2] = v11;
    CInteractionTracker::AddPendingStateChange(a1, 2LL, v15);
    if ( a2 >= 2 )
      goto LABEL_8;
  }
  v9 = 56LL;
LABEL_11:
  CResource::InvalidateAnimationSources((CResource *)a1, v9);
  v10 = *(_QWORD *)(a1 + 640);
  if ( v10 )
  {
    if ( !a4 )
      CInteractionTrackerBindingManager::AddOrUpdatePendingInertiaStateChangeForBoundTrackers(v10, a1, a2);
  }
}
