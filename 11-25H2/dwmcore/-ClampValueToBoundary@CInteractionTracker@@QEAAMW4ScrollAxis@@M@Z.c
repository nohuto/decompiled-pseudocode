/*
 * XREFs of ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x180251868
 * Callers:
 *     ?CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z @ 0x1800F19F0 (-CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1800F20B0 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1800F3724 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z @ 0x1802A7214 (-CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall CInteractionTracker::ClampValueToBoundary(float *a1, int a2, double a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  int v5; // edx

  v3 = 0.0;
  v4 = 0.0;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v3 = a1[37];
        v4 = a1[38];
      }
    }
    else
    {
      v3 = a1[26];
      v4 = a1[29];
    }
  }
  else
  {
    v3 = a1[25];
    v4 = a1[28];
  }
  *(float *)&a3 = fminf(fmaxf(*(float *)&a3, v3), v4);
  return *(__m128 *)&a3;
}
