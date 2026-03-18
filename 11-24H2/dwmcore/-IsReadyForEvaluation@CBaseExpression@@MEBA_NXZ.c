/*
 * XREFs of ?IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ @ 0x1801EB2D0
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180015A70 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x18023D200 (-IsReadyForEvaluation@CExpression@@MEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseExpression::IsReadyForEvaluation(CBaseExpression *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 224);
  return (v1 & 2) != 0 && (v1 & 4) == 0;
}
