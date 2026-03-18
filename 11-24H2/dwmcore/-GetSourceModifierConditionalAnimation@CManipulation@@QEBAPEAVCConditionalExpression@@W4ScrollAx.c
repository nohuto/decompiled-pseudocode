/*
 * XREFs of ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1800E4A24
 * Callers:
 *     ?GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1800E408C (-GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x1801DB7B4 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxi.c)
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
