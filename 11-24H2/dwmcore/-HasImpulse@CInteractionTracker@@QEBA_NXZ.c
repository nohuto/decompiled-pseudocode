/*
 * XREFs of ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1800DF65C
 * Callers:
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1800DED50 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1800DF384 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801E05CC (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x1800DF790 (-HasImpulse@CScrollAnimation@@QEBA_NXZ.c)
 */

char __fastcall CInteractionTracker::HasImpulse(CInteractionTracker *this)
{
  CScrollAnimation *v2; // rcx
  char v3; // bl
  CScrollAnimation *v5; // rcx
  CScrollAnimation *v6; // rcx

  if ( (*((_BYTE *)this + 540) & 0x10) != 0 )
    return 1;
  v2 = (CScrollAnimation *)*((_QWORD *)this + 42);
  v3 = 0;
  if ( v2 )
  {
    if ( CScrollAnimation::HasImpulse(v2) )
      return 1;
  }
  v5 = (CScrollAnimation *)*((_QWORD *)this + 43);
  if ( v5 )
  {
    if ( CScrollAnimation::HasImpulse(v5) )
      return 1;
  }
  v6 = (CScrollAnimation *)*((_QWORD *)this + 41);
  if ( v6 )
  {
    if ( CScrollAnimation::HasImpulse(v6) )
      return 1;
  }
  return v3;
}
