/*
 * XREFs of ?EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x1802283D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x180234354 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 */

void __fastcall CScrollPositionKeyframeAnimation::EnsureChainingConfigUpdated(
        CScrollPositionKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // xmm0_8
  float *v5; // rax
  __int64 v6; // r8

  v3 = 0;
  v4 = *(_QWORD *)CExpressionValueStack::PeekStackValue(a2, 0);
  v5 = (float *)*((_QWORD *)this + 68);
  v6 = v5[25] >= *(float *)&v4;
  if ( *(float *)&v4 >= v5[28] )
    v6 = (unsigned int)(v5[25] >= *(float *)&v4) + 2;
  if ( v5[26] >= *((float *)&v4 + 1) )
    v3 = 1;
  if ( *((float *)&v4 + 1) >= v5[29] )
    v3 = (v3 != 0) + 2;
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(this, 0LL, v6);
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(this, 1LL, v3);
}
