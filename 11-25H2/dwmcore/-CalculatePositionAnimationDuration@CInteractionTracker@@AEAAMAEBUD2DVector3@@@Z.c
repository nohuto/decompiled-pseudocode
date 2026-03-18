/*
 * XREFs of ?CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z @ 0x1800F19F0
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1800F20B0 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x180251868 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

float __fastcall CInteractionTracker::CalculatePositionAnimationDuration(
        CInteractionTracker *this,
        const struct D2DVector3 *a2)
{
  unsigned __int64 v3; // rcx
  float v5; // xmm9_4
  bool v6; // cl
  float v7; // xmm8_4
  bool v8; // al
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm7_4
  double v12; // xmm0_8
  float v13; // xmm3_4
  __int64 v14; // rcx
  __int64 v15; // r8
  double v16; // xmm0_8
  __int64 v17; // r8

  v3 = *((_QWORD *)this + 11) - *(_QWORD *)a2;
  if ( !v3 )
    v3 = *((unsigned int *)this + 24) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( !v3 )
    return FLOAT_0_001;
  v5 = *(float *)a2;
  v6 = *(float *)a2 >= *((float *)this + 25) && *((float *)this + 28) >= v5;
  v7 = *((float *)a2 + 1);
  v8 = v7 >= *((float *)this + 26) && *((float *)this + 29) >= v7;
  if ( v6 && v8 )
    return *((float *)this + 34);
  v9 = v5 - *((float *)this + 22);
  v10 = v7 - *((float *)this + 23);
  v11 = *((float *)a2 + 2) - *((float *)this + 24);
  v12 = CInteractionTracker::ClampValueToBoundary(this, 0LL, a2);
  v13 = *(float *)&v12 - *((float *)this + 22);
  v16 = CInteractionTracker::ClampValueToBoundary(v14, 1LL, v15);
  *(float *)&v16 = sqrtf_0(
                     (float)((float)((float)(*(float *)&v16 - *((float *)this + 23))
                                   * (float)(*(float *)&v16 - *((float *)this + 23)))
                           + (float)(v13 * v13))
                   + (float)((float)(*(float *)(v17 + 8) - *((float *)this + 24))
                           * (float)(*(float *)(v17 + 8) - *((float *)this + 24))));
  return fmaxf(
           *(float *)&v16
         / (float)(sqrtf_0((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11)) / *((float *)this + 34)),
           0.001);
}
