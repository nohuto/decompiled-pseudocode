/*
 * XREFs of ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x1800E712C
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1800E5684 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z @ 0x1800E70D0 (-PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801E05CC (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::IsOutOfBounds(CInteractionTracker *this)
{
  float v1; // xmm1_4
  bool result; // al
  float v3; // xmm1_4
  float v4; // xmm1_4

  v1 = *((float *)this + 22);
  result = 1;
  if ( v1 <= *((float *)this + 28) && *((float *)this + 25) <= v1 )
  {
    v3 = *((float *)this + 23);
    if ( v3 <= *((float *)this + 29) && *((float *)this + 26) <= v3 )
    {
      v4 = *((float *)this + 36);
      if ( *((float *)this + 37) <= v4 && v4 <= *((float *)this + 38) )
        return 0;
    }
  }
  return result;
}
