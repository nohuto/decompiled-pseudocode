/*
 * XREFs of AuthzBasepCompareFQBNOperands @ 0x14044CACC
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x140324EE0 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x140325148 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1403255E4 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     RtlIsNameInExpression @ 0x140325F30 (RtlIsNameInExpression.c)
 *     AuthzBasepGetConstantOperand @ 0x14044CD6C (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepGetOperandStringCaseForEvaluation @ 0x14044CE5C (AuthzBasepGetOperandStringCaseForEvaluation.c)
 *     AuthzBasepCompareUnsigned @ 0x14044CEB8 (AuthzBasepCompareUnsigned.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepCompareFQBNOperands(char a1, __int64 a2, BOOL *a3)
{
  wchar_t **p_Buffer; // rax
  __int64 v6; // r13
  __int64 v7; // rcx
  int OperandStringCaseForEvaluation; // r15d
  __int64 i; // rax
  __int64 v10; // rsi
  __int64 v11; // r12
  _QWORD *v12; // rcx
  UNICODE_STRING *p_Expression; // rdx
  UNICODE_STRING *p_Name; // rcx
  BOOLEAN IsNameInExpression; // al
  __int64 v16; // rcx
  BOOL v17; // eax
  _BYTE *v18; // rdi
  wchar_t **v19; // rsi
  __int64 v21; // rcx
  int v22; // eax
  _WORD v23[2]; // [rsp+24h] [rbp-94h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-90h] BYREF
  int v25; // [rsp+2Ch] [rbp-8Ch]
  __int64 v26; // [rsp+30h] [rbp-88h]
  __int64 v27; // [rsp+38h] [rbp-80h]
  _OWORD v28[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD *v29; // [rsp+60h] [rbp-58h]
  UNICODE_STRING Expression; // [rsp+68h] [rbp-50h] BYREF
  UNICODE_STRING Name; // [rsp+78h] [rbp-40h] BYREF
  char v33; // [rsp+D8h] [rbp+20h] BYREF

  v24 = 0;
  memset(v28, 0, sizeof(v28));
  LODWORD(v29) = 0;
  WORD2(v29) = 0;
  v26 = 0LL;
  v27 = 0LL;
  v23[0] = 0;
  v33 = 0;
  *a3 = 0;
  p_Buffer = &Expression.Buffer;
  v6 = 2LL;
  v7 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v7;
  }
  while ( v7 );
  OperandStringCaseForEvaluation = AuthzBasepGetOperandStringCaseForEvaluation(a2, &v33);
  if ( OperandStringCaseForEvaluation < 0 )
  {
LABEL_33:
    *a3 = -1;
  }
  else
  {
    for ( i = 0LL; ; i = (unsigned int)(v25 + 1) )
    {
      v25 = i;
      if ( (unsigned int)i >= 2 )
        break;
      v10 = (unsigned int)i;
      v11 = 5 * i;
      if ( *(_DWORD *)(a2 + 40 * i + 12) == 1 )
      {
        if ( !*(_BYTE *)(a2 + 40 * i + 4) )
        {
          OperandStringCaseForEvaluation = -1073741406;
          goto LABEL_33;
        }
        OperandStringCaseForEvaluation = AuthzBasepGetConstantOperand(
                                           *(_QWORD *)(a2 + 40 * i + 32),
                                           *(unsigned int *)(a2 + 40 * i + 24),
                                           v28,
                                           &v24);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_33;
        if ( LOWORD(v28[0]) != 3 )
          goto LABEL_33;
        OperandStringCaseForEvaluation = AuthzBasepUnicodeStringFromOperandValue(
                                           (__int64)v28,
                                           v33 == 0,
                                           &Expression.Length + 8 * (unsigned int)v10,
                                           (_BYTE *)v23 + v10);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_33;
        OperandStringCaseForEvaluation = AuthzBasepGetConstantOperand(
                                           *(_QWORD *)(a2 + 8 * v11 + 32) + v24,
                                           *(_DWORD *)(a2 + 8 * v11 + 24) - v24,
                                           v28,
                                           &v24);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_33;
        if ( LOWORD(v28[0]) != 2 )
          goto LABEL_33;
        v12 = v29;
        *(&v26 + v10) = *v29;
        if ( *((_BYTE *)v12 + 8) == 2 )
          goto LABEL_33;
      }
      else
      {
        v21 = *(_QWORD *)(*(_QWORD *)(a2 + 40 * i + 16) + 48LL);
        *(&v26 + (unsigned int)i) = *(_QWORD *)v21;
        *(&Expression + (unsigned int)i) = *(UNICODE_STRING *)(v21 + 8);
      }
    }
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      p_Expression = &Expression;
      p_Name = &Name;
    }
    else
    {
      p_Expression = &Name;
      p_Name = &Expression;
    }
    IsNameInExpression = RtlIsNameInExpression(p_Name, p_Expression, v33 == 0, 0LL);
    LOBYTE(v16) = IsNameInExpression;
    v17 = v26 == v27 && IsNameInExpression;
    *a3 = v17;
    if ( a1 == -127 )
    {
      v22 = !v17;
    }
    else
    {
      if ( a1 == (char)0x80 )
        goto LABEL_22;
      if ( !(_BYTE)v16 )
      {
        *a3 = 0;
        goto LABEL_22;
      }
      LOBYTE(v16) = a1;
      v22 = AuthzBasepCompareUnsigned(v16);
    }
    *a3 = v22;
  }
LABEL_22:
  v18 = v23;
  v19 = &Expression.Buffer;
  do
  {
    if ( *v18 )
      ExFreePoolWithTag(*v19, 0);
    ++v18;
    v19 += 2;
    --v6;
  }
  while ( v6 );
  return (unsigned int)OperandStringCaseForEvaluation;
}
