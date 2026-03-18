/*
 * XREFs of ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x180014AC0
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x1800146C0 (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x180014C4C (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x180014C88 (-EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1800DE9FC (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1800E1C14 (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800E3350 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800E42F8 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x18029DC6C (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 * Callees:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x180014980 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1800E1C14 (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::SetScale(__int64 a1, float a2, int a3)
{
  float v4; // xmm0_4
  float v5; // xmm2_4
  CInteractionTrackerBindingManager *v6; // rcx
  float v7; // xmm6_4
  int v8; // r8d
  bool v9; // dl
  bool v10; // al
  int v11; // r8d
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14[4]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(float *)(a1 + 144);
  v5 = fmaxf(0.001, a2);
  if ( v5 == v4 )
    return;
  *(float *)(a1 + 144) = v5;
  v6 = *(CInteractionTrackerBindingManager **)(a1 + 640);
  v7 = v5 / v4;
  if ( v6 && !a3 )
  {
    CInteractionTrackerBindingManager::UpdateBoundTrackerScale(v6, (struct CInteractionTracker *)a1, v5, 0);
    v6 = *(CInteractionTrackerBindingManager **)(a1 + 640);
  }
  v8 = *(_DWORD *)(a1 + 184);
  v9 = 0;
  if ( !v8 )
  {
LABEL_4:
    v9 = 1;
    goto LABEL_5;
  }
  v11 = v8 - 2;
  if ( v11 )
  {
    if ( v11 != 1 || *(_QWORD *)(a1 + 352) || !*(_QWORD *)(a1 + 360) || (*(_BYTE *)(a1 + 541) & 2) != 0 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(a1 + 472) != 0LL;
LABEL_5:
  v10 = !v6 || (*(_BYTE *)(a1 + 541) & 1) != 0;
  if ( v10 && v9 )
  {
    v12 = *(float *)(a1 + 160);
    v13 = *(float *)(a1 + 92);
    v14[0] = (float)((float)(*(float *)(a1 + 88) - *(float *)(a1 + 156)) * v7) + *(float *)(a1 + 156);
    v14[2] = *(float *)(a1 + 96);
    v14[1] = (float)((float)(v13 - v12) * v7) + v12;
    CInteractionTracker::SetPosition(a1, (__int64)v14, 0);
  }
  *(_BYTE *)(a1 + 540) |= 2u;
  CResource::InvalidateAnimationSources((CResource *)a1, 2u);
  CResource::InvalidateAnimationSources((CResource *)a1, 0x3Bu);
}
