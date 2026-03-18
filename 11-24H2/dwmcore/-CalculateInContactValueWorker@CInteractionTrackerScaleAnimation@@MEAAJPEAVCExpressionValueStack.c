/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1800E1630
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800DE724 (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1800E2EDC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1800E3B2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800E42A8 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1800E4A58 (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1800E54A8 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x18021E4EC (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::CalculateInContactValueWorker(
        CInteractionTrackerScaleAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float *a5)
{
  struct CInteractionTracker *InteractionTracker; // rbx
  __int64 v9; // rcx
  float ForceEngineCurrentValue; // xmm6_4
  __int64 v11; // rdx
  __int64 v12; // r8
  float v13; // xmm1_4
  __int64 v14; // r9
  double updated; // xmm0_8
  unsigned int v16; // ebx
  int v18; // eax

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  if ( CInteractionTracker::AreInteractionAnimationsAlive(InteractionTracker)
    && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v9 + 328)) )
  {
    ForceEngineCurrentValue = CScrollAnimation::GetForceEngineCurrentValue(*((CScrollAnimation **)InteractionTracker + 41));
  }
  else
  {
    ForceEngineCurrentValue = *((float *)InteractionTracker + 36);
  }
  *((float *)this + 123) = InteractionSourceManager::GetActiveManipulationVelocity(
                             (char *)InteractionTracker + 208,
                             2LL);
  v13 = a4 * *((float *)this + 136);
  *((float *)this + 136) = v13;
  v14 = *((float *)InteractionTracker + 37) >= v13;
  if ( v13 >= *((float *)InteractionTracker + 38) )
    v14 = (unsigned int)(*((float *)InteractionTracker + 37) >= v13) + 2;
  updated = CScrollAnimation::UpdateValueWithChaining(this, v11, v12, v14);
  if ( *(float *)&updated == ForceEngineCurrentValue
    || (v18 = CInteractionTracker::UpdateCenterPointForState(InteractionTracker, a2, a3, 1LL), v16 = v18, v18 >= 0) )
  {
    v16 = 0;
    *a5 = *(float *)&updated;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xE1u, 0LL);
  }
  return v16;
}
