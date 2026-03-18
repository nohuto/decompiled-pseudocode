/*
 * XREFs of ?EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x1802B53C0
 * Callers:
 *     <none>
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18003D910 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

void __fastcall CScrollScaleKeyframeAnimation::EnsureChainingConfigUpdated(
        float **this,
        struct CExpressionValueStack *a2)
{
  float *v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // r9d

  v3 = (float *)CExpressionValueStack::PeekStackValue(a2, 0);
  v4 = CInteractionTracker::BoundaryFromValue(this[68], *v3, 2);
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges((__int64)this, v5, v4);
}
