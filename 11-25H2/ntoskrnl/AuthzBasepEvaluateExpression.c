/*
 * XREFs of AuthzBasepEvaluateExpression @ 0x140369DA0
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403100CC (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x1403113F0 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x140369F30 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepGetOperandTypeForEvaluation @ 0x140369FF0 (AuthzBasepGetOperandTypeForEvaluation.c)
 *     AuthzBasepEvaluateSetRelationship @ 0x14036A228 (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1404B35A8 (AuthzBasepCompareOctetStringOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x14068BA64 (AuthzBasepCompareIntegerOperands.c)
 */

__int64 __fastcall AuthzBasepEvaluateExpression(unsigned __int8 a1, __int64 a2, BOOL *a3)
{
  BOOL v3; // esi
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  int OperandTypeForEvaluation; // r15d
  __int64 v9; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax

  v3 = 0;
  v4 = a1;
  *a3 = 0;
  v5 = 0;
  OperandTypeForEvaluation = (unsigned __int16)AuthzBasepGetOperandTypeForEvaluation(a2);
  if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible(v9) )
    goto LABEL_2;
  if ( v4 > 0x85 )
  {
    if ( v4 != 134 )
    {
      if ( v4 != 136 )
      {
        if ( v4 == 142 )
          goto LABEL_9;
        if ( v4 != 143 )
          return v5;
      }
      v5 = AuthzBasepEvaluateSetRelationship(2LL, a2, a3);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      goto LABEL_3;
    }
LABEL_9:
    v11 = AuthzBasepEvaluateSetRelationship(1LL, a2, a3);
    goto LABEL_10;
  }
  if ( v4 == 133 )
  {
LABEL_17:
    v12 = (unsigned int)(OperandTypeForEvaluation - 1);
    if ( OperandTypeForEvaluation == 1
      || (v12 = (unsigned int)(OperandTypeForEvaluation - 2), OperandTypeForEvaluation == 2) )
    {
      LOBYTE(v12) = v4;
      v14 = AuthzBasepCompareIntegerOperands(v12, a2);
    }
    else
    {
      if ( OperandTypeForEvaluation == 3 )
      {
        v11 = AuthzBasepCompareUnicodeStringOperands(v4, a2, a3);
LABEL_10:
        v5 = v11;
        if ( v11 >= 0 )
          return v5;
        goto LABEL_3;
      }
      if ( OperandTypeForEvaluation == 4 )
      {
        v11 = AuthzBasepCompareFQBNOperands(v4, a2, a3);
        goto LABEL_10;
      }
      v13 = (unsigned int)(OperandTypeForEvaluation - 5);
      if ( OperandTypeForEvaluation != 5 && OperandTypeForEvaluation != 16 )
      {
LABEL_2:
        v5 = -1073741406;
LABEL_3:
        *a3 = -1;
        return v5;
      }
      LOBYTE(v13) = v4;
      v14 = AuthzBasepCompareOctetStringOperands(v13, a2);
    }
    *a3 = v14;
    return v5;
  }
  if ( v4 == 128 || v4 == 129 )
  {
    v5 = AuthzBasepEvaluateSetRelationship(0LL, a2, a3);
    if ( (v5 & 0x80000000) != 0 )
      goto LABEL_3;
    if ( (_BYTE)v4 == 0x81 && *a3 != -1 )
    {
      LOBYTE(v3) = !*a3;
      *a3 = v3;
    }
  }
  else if ( v4 == 130 || v4 - 131 <= 1 )
  {
    goto LABEL_17;
  }
  return v5;
}
