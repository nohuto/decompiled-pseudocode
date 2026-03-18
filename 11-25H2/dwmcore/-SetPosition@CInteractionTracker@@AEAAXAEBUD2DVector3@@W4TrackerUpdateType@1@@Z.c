/*
 * XREFs of ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x18003BDB0
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18003BAF0 (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x18003BC90 (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x18003BD20 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x18003BEF0 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1800F5EBC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1800F8A1C (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800FAFF0 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800FB18C (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x1802A7084 (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1802A7A40 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x18003E8D0 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1800F8A1C (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1800F96F4 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetPosition(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v6; // rax
  int v7; // eax
  CInteractionTrackerBindingManager *v8; // rcx
  unsigned __int64 v9; // rbp

  v6 = *(_QWORD *)(a1 + 88) - *(_QWORD *)a2;
  if ( !v6 )
    v6 = *(unsigned int *)(a1 + 96) - (unsigned __int64)*(unsigned int *)(a2 + 8);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)a2;
    v7 = *(_DWORD *)(a2 + 8);
    *(_BYTE *)(a1 + 540) |= 2u;
    *(_DWORD *)(a1 + 96) = v7;
    CResource::InvalidateAnimationSources((CResource *)a1, 1u);
    CResource::InvalidateAnimationSources((CResource *)a1, 0x3Au);
    if ( *(_DWORD *)(a1 + 184) == 1 )
      CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
    if ( dword_180404CE0
      && (qword_180404CF0 & 0x400000000002LL) != 0
      && (qword_180404CF8 & 0x400000000002LL) == qword_180404CF8 )
    {
      v9 = 0LL;
      if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 568LL);
      InteractionSourceManager::TelemetrySetPosition((InteractionSourceManager *)(a1 + 208), v9);
      if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) && v9 )
        *(_QWORD *)(*(_QWORD *)(a1 + 328) + 568LL) = 0LL;
    }
    v8 = *(CInteractionTrackerBindingManager **)(a1 + 640);
    if ( v8 )
    {
      if ( !a3 )
        CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
          v8,
          (struct CInteractionTracker *)a1,
          (const struct D2DVector3 *)a2,
          0);
    }
  }
}
