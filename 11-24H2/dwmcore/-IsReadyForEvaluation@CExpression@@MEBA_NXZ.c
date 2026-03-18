/*
 * XREFs of ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x18023D200
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180015A70 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ?IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ @ 0x1801EB2D0 (-IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ.c)
 */

char __fastcall CExpression::IsReadyForEvaluation(CExpression *this)
{
  bool IsReadyForEvaluation; // al
  char v3; // dl

  IsReadyForEvaluation = CBaseExpression::IsReadyForEvaluation(this);
  v3 = 0;
  if ( IsReadyForEvaluation )
    return *((_QWORD *)this + 41) != 0LL;
  return v3;
}
