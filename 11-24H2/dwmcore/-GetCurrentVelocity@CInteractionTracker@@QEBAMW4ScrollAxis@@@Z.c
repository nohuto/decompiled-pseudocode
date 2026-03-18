/*
 * XREFs of ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1800E5A2C
 * Callers:
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1800DED50 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1800DE8A0 (-GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1800E3B2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1800E5410 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

float __fastcall CInteractionTracker::GetCurrentVelocity(CInteractionTracker *a1, int a2)
{
  float result; // xmm0_4
  int v3; // edx
  __int64 v4; // rcx
  CScrollAnimation *v5; // rcx
  CScrollScaleKeyframeAnimation *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  result = 0.0;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      if ( CInteractionTracker::AreInteractionAnimationsAlive(a1) )
      {
        v5 = *(CScrollAnimation **)(v4 + 328);
        return CScrollAnimation::GetVelocity(v5);
      }
      v6 = *(CScrollScaleKeyframeAnimation **)(v4 + 472);
      if ( v6 )
        return CScrollScaleKeyframeAnimation::GetScaleVelocity(v6);
    }
    else
    {
      if ( CInteractionTracker::AreInteractionAnimationsAlive(a1) )
      {
        v5 = *(CScrollAnimation **)(v7 + 344);
        return CScrollAnimation::GetVelocity(v5);
      }
      v9 = *(_QWORD *)(v7 + 464);
      if ( v9 )
        return *(float *)(CScrollPositionKeyframeAnimation::GetPositionVelocity(v9) + 4);
    }
  }
  else
  {
    if ( CInteractionTracker::AreInteractionAnimationsAlive(a1) )
    {
      v5 = *(CScrollAnimation **)(v8 + 336);
      return CScrollAnimation::GetVelocity(v5);
    }
    v10 = *(_QWORD *)(v8 + 464);
    if ( v10 )
      return *(float *)CScrollPositionKeyframeAnimation::GetPositionVelocity(v10);
  }
  return result;
}
