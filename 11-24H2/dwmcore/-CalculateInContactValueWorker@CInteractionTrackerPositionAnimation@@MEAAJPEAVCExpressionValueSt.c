/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1800E45B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800DE724 (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1800E2EDC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x1800E3ACC (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1800E3B2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800E42A8 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x1800E4724 (-CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z.c)
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1800E4A58 (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x1800E53AC (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1800E54A8 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInContactValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float *a5)
{
  struct CInteractionTracker *InteractionTracker; // rbx
  double MostRecentCenterPoint; // xmm0_8
  float v9; // xmm7_4
  float ForceEngineCurrentValue; // xmm3_4
  int v11; // r11d
  float v12; // xmm1_4
  float v13; // xmm2_4
  unsigned int v14; // eax
  int v16; // r11d

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint(
                            InteractionTracker,
                            1LL,
                            *((unsigned int *)this + 81));
  v9 = *(float *)&MostRecentCenterPoint;
  if ( CInteractionTracker::AreInteractionAnimationsAlive(InteractionTracker)
    && CScrollAnimation::HasActiveInertiaForce(*((CScrollAnimation **)InteractionTracker + 41)) )
  {
    ForceEngineCurrentValue = CScrollAnimation::GetForceEngineCurrentValue(*((CScrollAnimation **)InteractionTracker + 41));
  }
  else
  {
    ForceEngineCurrentValue = *((float *)InteractionTracker + 36);
  }
  *(float *)&MostRecentCenterPoint = InteractionSourceManager::GetActiveManipulationVelocity(
                                       (char *)InteractionTracker + 208,
                                       *((unsigned int *)this + 81));
  v12 = 0.0;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v13 = *((float *)InteractionTracker + 29);
LABEL_7:
      v12 = *((float *)InteractionTracker + 26);
      goto LABEL_10;
    }
    if ( v11 == 2 )
    {
      v13 = *((float *)InteractionTracker + 38);
    }
    else
    {
      v13 = 0.0;
      v16 = v11 - 1;
      if ( !v16 )
        goto LABEL_7;
      if ( v16 != 1 )
        goto LABEL_10;
    }
    v12 = *((float *)InteractionTracker + 37);
    goto LABEL_10;
  }
  v13 = *((float *)InteractionTracker + 28);
  v12 = *((float *)InteractionTracker + 25);
LABEL_10:
  *(float *)&MostRecentCenterPoint = CPositionMotion::CalculateInContactValue(
                                       (CInteractionTrackerPositionAnimation *)((char *)this + 440),
                                       v12,
                                       v13,
                                       a4,
                                       *(float *)&MostRecentCenterPoint,
                                       ForceEngineCurrentValue,
                                       v9);
  v14 = CInteractionTracker::BoundaryFromValue(
          (float *)InteractionTracker,
          *(float *)&MostRecentCenterPoint,
          *((_DWORD *)this + 81));
  *(_DWORD *)a5 = CScrollAnimation::UpdateValueWithChaining(
                    (__int64)this,
                    MostRecentCenterPoint,
                    *(float *)&MostRecentCenterPoint - *((float *)this + 127),
                    v14).m128_u32[0];
  return 0LL;
}
