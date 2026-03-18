/*
 * XREFs of ?IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ @ 0x180060BB0
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800604F0 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CKeyframeAnimation::IsReadyForEvaluation(CKeyframeAnimation *this)
{
  char v1; // dl
  char result; // al

  v1 = *((_BYTE *)this + 224);
  result = 0;
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
  {
    if ( *((_QWORD *)this + 44) )
      return 1;
  }
  return result;
}
