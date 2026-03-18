/*
 * XREFs of ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1800F5774
 * Callers:
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18003DCF4 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1800F4B14 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1800F4CD0 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800F53B4 (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1800F1B54 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetInertiaStartVelocity@CScrollAnimation@@QEBAMXZ @ 0x1800F5A28 (-GetInertiaStartVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1800F5A4C (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1800F5AB0 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?CanDetermineModifiedRestingValue@CScrollAnimation@@QEBA_NXZ @ 0x1800F5AFC (-CanDetermineModifiedRestingValue@CScrollAnimation@@QEBA_NXZ.c)
 *     ?GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ @ 0x1800F5B38 (-GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x1800F5B60 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18022C8D4 (-GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x18022F654 (-GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1802318E0 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x1802A741C (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1802B5408 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1802B54B4 (-GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 */

__int64 __fastcall CInteractionTracker::CalculateInertiaCallbackValues(CScrollAnimation **a1, __int64 a2)
{
  CInteractionTracker *v4; // rcx
  bool HasImpulse; // al
  CScrollAnimation *v6; // rcx
  float InertiaStartVelocity; // xmm6_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  CScrollAnimation *v10; // rcx
  float NaturalEndpoint; // xmm6_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  CScrollAnimation *v14; // rcx
  float ModifiedRestingValue; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  CScrollAnimation *v18; // rcx
  bool v19; // al
  CScrollAnimation *v20; // rcx
  int v22; // xmm0_4
  int v23; // xmm1_4
  int v24; // xmm2_4
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // xmm2_4
  int v28; // xmm0_4
  int v29; // xmm1_4
  int v30; // eax
  int v31; // xmm1_4
  __int64 v32; // rcx
  int v33; // eax
  int v34; // xmm1_4
  int v35; // xmm2_4
  int v36; // xmm3_4
  int v37; // xmm1_4
  int v38; // xmm2_4
  int v39; // xmm3_4
  CScrollScaleKeyframeAnimation *v40; // rcx
  float v41; // xmm7_4
  float LastKeyframeValueForScale; // xmm6_4
  float ScaleVelocity; // xmm0_4
  int v44; // xmm1_4
  int v45; // xmm1_4
  int v46; // xmm1_4
  int v47; // xmm2_4
  int v48; // xmm3_4
  int v49; // xmm1_4
  int v50; // [rsp+20h] [rbp-50h] BYREF
  int v51; // [rsp+24h] [rbp-4Ch]
  int v52; // [rsp+28h] [rbp-48h]
  int v53; // [rsp+30h] [rbp-40h] BYREF
  int v54; // [rsp+34h] [rbp-3Ch]
  int v55; // [rsp+38h] [rbp-38h]
  int v56; // [rsp+40h] [rbp-30h] BYREF
  int v57; // [rsp+44h] [rbp-2Ch]
  int v58; // [rsp+48h] [rbp-28h]

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
  {
    HasImpulse = CInteractionTracker::HasImpulse(v4);
    v6 = a1[42];
    *(_BYTE *)(a2 + 53) = HasImpulse;
    InertiaStartVelocity = CScrollAnimation::GetInertiaStartVelocity(v6);
    v8 = CScrollAnimation::GetInertiaStartVelocity(a1[43]);
    *(float *)a2 = InertiaStartVelocity;
    *(float *)(a2 + 4) = v8;
    *(_DWORD *)(a2 + 8) = 0;
    v9 = CScrollAnimation::GetInertiaStartVelocity(a1[41]);
    v10 = a1[42];
    *(float *)(a2 + 12) = v9;
    NaturalEndpoint = CScrollAnimation::GetNaturalEndpoint(v10);
    v12 = CScrollAnimation::GetNaturalEndpoint(a1[43]);
    *(float *)(a2 + 16) = NaturalEndpoint;
    *(float *)(a2 + 20) = v12;
    *(_DWORD *)(a2 + 24) = 0;
    v13 = CScrollAnimation::GetNaturalEndpoint(a1[41]);
    v14 = a1[42];
    *(float *)(a2 + 28) = v13;
    ModifiedRestingValue = CScrollAnimation::GetModifiedRestingValue(v14);
    v16 = CScrollAnimation::GetModifiedRestingValue(a1[43]);
    *(float *)(a2 + 32) = ModifiedRestingValue;
    *(float *)(a2 + 36) = v16;
    *(_DWORD *)(a2 + 40) = 0;
    v17 = CScrollAnimation::GetModifiedRestingValue(a1[41]);
    v18 = a1[42];
    *(float *)(a2 + 48) = v17;
    v19 = CScrollAnimation::CanDetermineModifiedRestingValue(v18)
       && CScrollAnimation::CanDetermineModifiedRestingValue(a1[43]);
    v20 = a1[41];
    *(_BYTE *)(a2 + 44) = v19;
    *(_BYTE *)(a2 + 52) = CScrollAnimation::CanDetermineModifiedRestingValue(v20);
  }
  else
  {
    v22 = *((_DWORD *)v4 + 22);
    v23 = *((_DWORD *)v4 + 23);
    v24 = *((_DWORD *)v4 + 24);
    if ( CInteractionTracker::HasDefaultAnimations(v4) )
    {
      *(_WORD *)(v25 + 52) = 257;
      *(_BYTE *)(v25 + 44) = 1;
      *(_DWORD *)(v25 + 16) = v22;
      *(_DWORD *)(v25 + 20) = v23;
      *(_DWORD *)(v25 + 24) = v24;
      v31 = *(_DWORD *)(v26 + 144);
      v32 = *(_QWORD *)(v26 + 464);
      v33 = *(_DWORD *)(v25 + 24);
      *(_QWORD *)(v25 + 32) = *(_QWORD *)(v25 + 16);
      *(_DWORD *)(v25 + 28) = v31;
      *(_DWORD *)(v25 + 48) = v31;
      *(_DWORD *)(v25 + 40) = v33;
      if ( v32 )
      {
        CScrollPositionKeyframeAnimation::GetNaturalEndpoint(v32, &v56);
        CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(a1[58], (__int64)&v53);
        CScrollPositionKeyframeAnimation::GetPositionVelocity(a1[58], &v50);
        v34 = v51;
        v35 = v52;
        *(_DWORD *)a2 = v50;
        *(_DWORD *)(a2 + 4) = v34;
        *(_DWORD *)(a2 + 8) = v35;
        v36 = v54;
        v37 = v55;
        *(_DWORD *)(a2 + 32) = v53;
        *(_DWORD *)(a2 + 36) = v36;
        *(_DWORD *)(a2 + 40) = v37;
        v38 = v57;
        v39 = v58;
        *(_DWORD *)(a2 + 16) = v56;
        *(_DWORD *)(a2 + 20) = v38;
        *(_DWORD *)(a2 + 24) = v39;
      }
      v40 = a1[59];
      if ( v40 )
      {
        v41 = CScrollScaleKeyframeAnimation::GetNaturalEndpoint(v40);
        LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(a1[59]);
        ScaleVelocity = CScrollScaleKeyframeAnimation::GetScaleVelocity(a1[59]);
        v44 = *(_DWORD *)(a2 + 36);
        *(float *)(a2 + 12) = ScaleVelocity;
        v56 = *(_DWORD *)(a2 + 32);
        v58 = *(_DWORD *)(a2 + 40);
        *(float *)(a2 + 48) = LastKeyframeValueForScale;
        *(float *)(a2 + 28) = v41;
        v57 = v44;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v53, &v56);
        v45 = *(_DWORD *)(a2 + 20);
        v56 = *(_DWORD *)(a2 + 16);
        v58 = *(_DWORD *)(a2 + 24);
        v57 = v45;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v50, &v56);
        v46 = v54;
        v47 = v55;
        *(_DWORD *)(a2 + 32) = v53;
        *(_DWORD *)(a2 + 36) = v46;
        *(_DWORD *)(a2 + 40) = v47;
        v48 = v51;
        v49 = v52;
        *(_DWORD *)(a2 + 16) = v50;
        *(_DWORD *)(a2 + 20) = v48;
        *(_DWORD *)(a2 + 24) = v49;
      }
    }
    else
    {
      *(_DWORD *)(v25 + 32) = v22;
      *(_DWORD *)(v25 + 36) = v23;
      *(_DWORD *)(v25 + 40) = v24;
      v27 = *(_DWORD *)(v26 + 144);
      v28 = *(_DWORD *)(v26 + 92);
      v29 = *(_DWORD *)(v26 + 96);
      v30 = *(_DWORD *)(v26 + 88);
      *(_DWORD *)(v25 + 48) = v27;
      *(_DWORD *)(v25 + 16) = v30;
      *(_DWORD *)(v25 + 20) = v28;
      *(_DWORD *)(v25 + 24) = v29;
      *(_DWORD *)(v25 + 28) = v27;
      *(_DWORD *)v25 = 0;
      *(_DWORD *)(v25 + 4) = 0;
      *(_DWORD *)(v25 + 8) = 0;
      *(_DWORD *)(v25 + 12) = 0;
    }
  }
  return a2;
}
