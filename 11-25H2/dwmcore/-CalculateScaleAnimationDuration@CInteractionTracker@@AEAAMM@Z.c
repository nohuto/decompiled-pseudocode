/*
 * XREFs of ?CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z @ 0x1802A7214
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1800F20B0 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x180251868 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 */

float __fastcall CInteractionTracker::CalculateScaleAnimationDuration(CInteractionTracker *this, double a2)
{
  float v3; // xmm0_4
  float v4; // xmm4_4
  __int64 v5; // rcx

  if ( *((float *)this + 36) == *(float *)&a2 )
    return FLOAT_0_001;
  if ( *(float *)&a2 >= *((float *)this + 37) && *((float *)this + 38) >= *(float *)&a2 )
    return *((float *)this + 34);
  v3 = CInteractionTracker::ClampValueToBoundary((float *)this, 2, a2).m128_f32[0];
  return fmaxf(
           COERCE_FLOAT(COERCE_UNSIGNED_INT(v3 - v4) & _xmm)
         / (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&a2 - v4) & _xmm) / *(float *)(v5 + 140)),
           0.001);
}
