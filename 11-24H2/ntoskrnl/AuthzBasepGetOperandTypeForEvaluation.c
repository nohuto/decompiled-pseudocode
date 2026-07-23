/*
 * XREFs of AuthzBasepGetOperandTypeForEvaluation @ 0x140325130
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x140324EE0 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetOperandTypeForEvaluation(unsigned __int16 *a1)
{
  if ( *((_DWORD *)a1 + 3) == 1 )
    return a1[20];
  else
    return *a1;
}
