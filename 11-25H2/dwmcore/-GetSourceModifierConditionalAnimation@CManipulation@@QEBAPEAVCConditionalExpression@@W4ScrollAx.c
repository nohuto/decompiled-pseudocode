/*
 * XREFs of ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1800F3E20
 * Callers:
 *     ?GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1800F32D4 (-GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x1801E6D20 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulation::GetSourceModifierConditionalAnimation(_QWORD *a1, int a2)
{
  int v2; // edx

  if ( !a2 )
    return a1[64];
  v2 = a2 - 1;
  if ( !v2 )
    return a1[65];
  if ( v2 == 1 )
    return a1[66];
  return 0LL;
}
