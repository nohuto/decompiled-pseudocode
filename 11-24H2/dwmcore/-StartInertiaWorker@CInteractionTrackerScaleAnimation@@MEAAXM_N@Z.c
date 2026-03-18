/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x1802AB9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800E42A8 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1800E5410 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1801EB514 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x1801EB738 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18024FC7C (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInertiaWorker(
        CInteractionTrackerScaleAnimation *this,
        float a2,
        char a3)
{
  struct CInteractionTracker *InteractionTracker; // rax
  char IsInertiaEnabledForAxis; // bl
  float *v7; // r11
  float InertiaDecayRate; // xmm6_4
  float Velocity; // xmm0_4
  int v10; // [rsp+20h] [rbp-38h]

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis((struct CInteractionTracker *)((char *)InteractionTracker + 208));
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate(v7, 2);
  Velocity = CScrollAnimation::GetVelocity(this);
  *((float *)this + 127) = a2;
  LOBYTE(v10) = a3;
  CMotion::StartInertia(
    (CInteractionTrackerScaleAnimation *)((char *)this + 440),
    Velocity,
    InertiaDecayRate,
    IsInertiaEnabledForAxis,
    v10);
}
