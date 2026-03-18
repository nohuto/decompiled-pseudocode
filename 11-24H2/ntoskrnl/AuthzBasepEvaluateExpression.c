/*
 * XREFs of AuthzBasepEvaluateExpression @ 0x14034646C
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1403450F0 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepOperandValueTypesCompatible @ 0x1403465FC (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepGetOperandTypeForEvaluation @ 0x1403466BC (AuthzBasepGetOperandTypeForEvaluation.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403468F4 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepEvaluateSetRelationship @ 0x140347DCC (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14045728C (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1404B3468 (AuthzBasepCompareOctetStringOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x140696DB4 (AuthzBasepCompareIntegerOperands.c)
 */

__int64 __fastcall AuthzBasepEvaluateExpression(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  int v3; // esi
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  int OperandTypeForEvaluation; // r15d
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax

  v3 = 0;
  v4 = a1;
  *a3 = 0;
  v5 = 0;
  OperandTypeForEvaluation = (unsigned __int16)AuthzBasepGetOperandTypeForEvaluation(a2);
  if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible() )
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
    v10 = AuthzBasepEvaluateSetRelationship(1LL, a2, a3);
    goto LABEL_10;
  }
  if ( v4 == 133 )
  {
LABEL_17:
    v11 = (unsigned int)(OperandTypeForEvaluation - 1);
    if ( OperandTypeForEvaluation == 1
      || (v11 = (unsigned int)(OperandTypeForEvaluation - 2), OperandTypeForEvaluation == 2) )
    {
      LOBYTE(v11) = v4;
      v15 = AuthzBasepCompareIntegerOperands(v11, a2);
    }
    else
    {
      v12 = (unsigned int)(OperandTypeForEvaluation - 3);
      if ( OperandTypeForEvaluation == 3 )
      {
        LODWORD(v12) = (unsigned __int8)v4;
        v10 = AuthzBasepCompareUnicodeStringOperands(v12, a2, a3);
LABEL_10:
        v5 = v10;
        if ( v10 >= 0 )
          return v5;
        goto LABEL_3;
      }
      v13 = (unsigned int)(OperandTypeForEvaluation - 4);
      if ( OperandTypeForEvaluation == 4 )
      {
        LODWORD(v13) = (unsigned __int8)v4;
        v10 = AuthzBasepCompareFQBNOperands(v13, a2, a3);
        goto LABEL_10;
      }
      v14 = (unsigned int)(OperandTypeForEvaluation - 5);
      if ( OperandTypeForEvaluation != 5 && OperandTypeForEvaluation != 16 )
      {
LABEL_2:
        v5 = -1073741406;
LABEL_3:
        *a3 = -1;
        return v5;
      }
      LOBYTE(v14) = v4;
      v15 = AuthzBasepCompareOctetStringOperands(v14, a2);
    }
    *a3 = v15;
    return v5;
  }
  if ( v4 == 128 || v4 == 129 )
  {
    v5 = AuthzBasepEvaluateSetRelationship(0LL, a2, a3);
    if ( (v5 & 0x80000000) != 0 )
      goto LABEL_3;
    if ( (_BYTE)v4 == 0x81 && *a3 != -1 )
    {
      LOBYTE(v3) = *a3 == 0;
      *a3 = v3;
    }
  }
  else if ( v4 == 130 || v4 - 131 <= 1 )
  {
    goto LABEL_17;
  }
  return v5;
}
