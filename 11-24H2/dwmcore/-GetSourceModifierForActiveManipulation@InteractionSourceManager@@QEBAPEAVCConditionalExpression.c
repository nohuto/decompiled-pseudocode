/*
 * XREFs of ?GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1800E408C
 * Callers:
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800E34EC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1800E3F48 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1800E42C4 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1800E4A24 (-GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAx.c)
 */

__int64 __fastcall InteractionSourceManager::GetSourceModifierForActiveManipulation(InteractionSourceManager *a1)
{
  char HasActiveManipulation; // al
  InteractionSourceManager *v2; // rcx
  __int64 v3; // r8
  struct CManipulation *ActiveManipulation; // rax
  unsigned int v5; // r10d

  HasActiveManipulation = InteractionSourceManager::HasActiveManipulation(a1);
  v3 = 0LL;
  if ( HasActiveManipulation )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v2);
    return CManipulation::GetSourceModifierConditionalAnimation(ActiveManipulation, v5);
  }
  return v3;
}
