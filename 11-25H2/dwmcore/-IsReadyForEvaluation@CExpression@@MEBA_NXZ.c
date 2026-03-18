/*
 * XREFs of ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x180060D00
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800604F0 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ?IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ @ 0x1801F88A0 (-IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ.c)
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
