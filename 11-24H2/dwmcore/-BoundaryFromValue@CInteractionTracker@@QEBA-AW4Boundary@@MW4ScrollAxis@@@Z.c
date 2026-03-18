/*
 * XREFs of ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x1800E3ACC
 * Callers:
 *     _lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_::operator() @ 0x1800E3954 (_lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_--operator().c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1800E45B0 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x180228B8C (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 *     ?EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x1802AB7D0 (-EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker::BoundaryFromValue(float *a1, float a2, int a3)
{
  unsigned int v3; // edx
  float v4; // xmm0_4
  float v5; // xmm2_4
  int v6; // r8d
  __int64 result; // rax

  v3 = 0;
  v4 = 0.0;
  v5 = 0.0;
  if ( a3 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v4 = a1[37];
        v5 = a1[38];
      }
    }
    else
    {
      v4 = a1[26];
      v5 = a1[29];
    }
  }
  else
  {
    v4 = a1[25];
    v5 = a1[28];
  }
  if ( v4 >= a2 )
    v3 = 1;
  result = v3 + 2;
  if ( a2 < v5 )
    return v3;
  return result;
}
