/*
 * XREFs of ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1800F4A00
 * Callers:
 *     <none>
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800EFB8C (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x1800F1550 (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800F3D68 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1800F46B4 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::CalculateInertiaValueWorker(
        CInteractionTrackerScaleAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float *a5)
{
  struct CInteractionTracker *InteractionTracker; // rbx
  __int64 v9; // rcx
  float ForceEngineCurrentValue; // xmm6_4
  double v11; // xmm0_8
  int updated; // eax
  unsigned int v13; // ebx

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
  v11 = (**((double (__fastcall ***)(char *, struct CExpressionValueStack *, __int64))this + 55))(
          (char *)this + 440,
          a2,
          a3);
  if ( *(float *)&v11 == ForceEngineCurrentValue
    || (updated = CInteractionTracker::UpdateCenterPointForState((__int64)InteractionTracker, (__int64)a2, a3, 2),
        v13 = updated,
        updated >= 0) )
  {
    v13 = 0;
    *a5 = *(float *)&v11;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x11Cu, 0LL);
  }
  return v13;
}
