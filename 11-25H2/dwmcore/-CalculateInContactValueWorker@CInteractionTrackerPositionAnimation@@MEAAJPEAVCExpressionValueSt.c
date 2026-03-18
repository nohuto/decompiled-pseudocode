/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1800F35B0
 * Callers:
 *     <none>
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18003D910 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800EFB8C (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1800F3724 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800F3D68 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x1800F3DB8 (-CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x1800F4090 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1800F40F4 (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1800F46B4 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInContactValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float *a5)
{
  struct CInteractionTracker *InteractionTracker; // rbx
  float MostRecentCenterPoint; // xmm7_4
  float ForceEngineCurrentValue; // xmm3_4
  int v10; // r11d
  float ActiveManipulationVelocity; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  double updated; // xmm0_8
  int v20; // r11d

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint(
                            InteractionTracker,
                            1LL,
                            *((unsigned int *)this + 81));
  if ( CInteractionTracker::AreInteractionAnimationsAlive(InteractionTracker)
    && CScrollAnimation::HasActiveInertiaForce(*((CScrollAnimation **)InteractionTracker + 41)) )
  {
    ForceEngineCurrentValue = CScrollAnimation::GetForceEngineCurrentValue(*((CScrollAnimation **)InteractionTracker + 41));
  }
  else
  {
    ForceEngineCurrentValue = *((float *)InteractionTracker + 36);
  }
  ActiveManipulationVelocity = InteractionSourceManager::GetActiveManipulationVelocity(
                                 (char *)InteractionTracker + 208,
                                 *((unsigned int *)this + 81));
  v12 = 0.0;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v13 = *((float *)InteractionTracker + 29);
LABEL_7:
      v12 = *((float *)InteractionTracker + 26);
      goto LABEL_10;
    }
    if ( v10 == 2 )
    {
      v13 = *((float *)InteractionTracker + 38);
    }
    else
    {
      v13 = 0.0;
      v20 = v10 - 1;
      if ( !v20 )
        goto LABEL_7;
      if ( v20 != 1 )
        goto LABEL_10;
    }
    v12 = *((float *)InteractionTracker + 37);
    goto LABEL_10;
  }
  v13 = *((float *)InteractionTracker + 28);
  v12 = *((float *)InteractionTracker + 25);
LABEL_10:
  v14 = CPositionMotion::CalculateInContactValue(
          (CInteractionTrackerPositionAnimation *)((char *)this + 440),
          v12,
          v13,
          a4,
          ActiveManipulationVelocity,
          ForceEngineCurrentValue,
          MostRecentCenterPoint);
  v15 = CInteractionTracker::BoundaryFromValue((float *)InteractionTracker, v14, *((_DWORD *)this + 81));
  updated = CScrollAnimation::UpdateValueWithChaining(this, v16, v17, v15);
  *a5 = *(float *)&updated;
  return 0LL;
}
