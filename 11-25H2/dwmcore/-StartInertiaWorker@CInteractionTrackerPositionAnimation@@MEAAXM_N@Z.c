/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x1800F0B80
 * Callers:
 *     <none>
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800EFB8C (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x1800F11BC (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1800F27E0 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800F3D68 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1800F41E8 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1800F46B4 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 *     ?GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ @ 0x18023430C (-GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18025B1AC (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::StartInertiaWorker(
        CInteractionTrackerPositionAnimation *this,
        float a2,
        bool a3)
{
  struct CInteractionTracker *InteractionTracker; // rbx
  int v6; // eax
  int v7; // xmm7_4
  float Velocity; // xmm8_4
  float BoundedEndpoint; // xmm6_4
  unsigned int v10; // r11d
  char IsInertiaEnabledForAxis; // r14
  double InertiaDecayRate; // xmm0_8
  float v13; // xmm10_4
  CInteractionTracker *v14; // rcx
  float ForceEngineCurrentValue; // xmm0_4
  void *retaddr; // [rsp+88h] [rbp+0h]

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v6 = *((_DWORD *)this + 81);
  if ( v6 )
  {
    if ( v6 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v7 = *((_DWORD *)InteractionTracker + 44);
  }
  else
  {
    v7 = *((_DWORD *)InteractionTracker + 43);
  }
  Velocity = CScrollAnimation::GetVelocity(this);
  BoundedEndpoint = 0.0;
  if ( a3 && (*((_BYTE *)this + 328) & 1) != 0 )
    Velocity = 0.0;
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis(
                              (char *)InteractionTracker + 208,
                              *((unsigned int *)this + 81));
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate(InteractionTracker, v10);
  v13 = *(float *)&InertiaDecayRate;
  if ( CInteractionTracker::AreInteractionAnimationsAlive(v14) )
    BoundedEndpoint = CScrollAnimation::GetBoundedEndpoint(*((CScrollAnimation **)InteractionTracker + 41));
  if ( CInteractionTracker::AreInteractionAnimationsAlive(InteractionTracker)
    && CScrollAnimation::HasActiveInertiaForce(*((CScrollAnimation **)InteractionTracker + 41)) )
  {
    ForceEngineCurrentValue = CScrollAnimation::GetForceEngineCurrentValue(*((CScrollAnimation **)InteractionTracker + 41));
  }
  else
  {
    ForceEngineCurrentValue = *((float *)InteractionTracker + 36);
  }
  *((_DWORD *)this + 143) = 0;
  *((_DWORD *)this + 137) = 0;
  *((float *)this + 127) = a2;
  *((float *)this + 144) = a2;
  *((float *)this + 138) = ForceEngineCurrentValue;
  *((float *)this + 145) = ForceEngineCurrentValue;
  *((float *)this + 141) = BoundedEndpoint;
  *((_DWORD *)this + 140) = v7;
  CMotion::StartInertia(
    (CInteractionTrackerPositionAnimation *)((char *)this + 440),
    Velocity,
    v13,
    IsInertiaEnabledForAxis,
    a3);
  *((_BYTE *)this + 328) &= ~1u;
}
