/*
 * XREFs of AuthzBasepCompareUnicodeStringOperands @ 0x140325368
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x140324EE0 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x140325148 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1403255E4 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     RtlIsNameInExpression @ 0x140325F30 (RtlIsNameInExpression.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B88F4 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1409343D0 (RtlCompareUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepCompareUnicodeStringOperands(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  int v5; // r12d
  wchar_t **p_Buffer; // rax
  __int64 v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // rax
  char v10; // cl
  unsigned __int8 CurrentIrql; // al
  bool v12; // r15
  int v13; // r13d
  UNICODE_STRING *i; // rdx
  int v15; // eax
  UNICODE_STRING *p_Name; // rdx
  UNICODE_STRING *p_Expression; // rcx
  int IsNameInExpression; // ecx
  unsigned int v19; // r13d
  __int64 v20; // rdi
  wchar_t **v21; // rsi
  BOOLEAN v23; // al
  wchar_t *Buffer; // rcx
  unsigned __int16 Length; // ax
  wchar_t *v26; // r8
  int v27; // edx
  int v28; // eax
  LONG v29; // ecx
  BOOL v30; // eax
  UNICODE_STRING *v31; // [rsp+20h] [rbp-58h]
  UNICODE_STRING Name; // [rsp+28h] [rbp-50h] BYREF
  UNICODE_STRING Expression; // [rsp+38h] [rbp-40h] BYREF
  __int16 v34; // [rsp+88h] [rbp+10h] BYREF
  _DWORD *v35; // [rsp+90h] [rbp+18h]
  int v36; // [rsp+98h] [rbp+20h]

  v35 = a3;
  v5 = a1;
  v34 = 0;
  p_Buffer = &Name.Buffer;
  v7 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v7;
  }
  while ( v7 );
  *a3 = 0;
  v8 = (__int64 *)(a2 + 16);
  if ( *(_DWORD *)(a2 + 12) == 1 )
  {
    v9 = *(_QWORD *)(a2 + 56);
LABEL_5:
    v10 = *(_BYTE *)(v9 + 36) & 2;
    goto LABEL_6;
  }
  v9 = *v8;
  if ( *(_DWORD *)(a2 + 52) == 1 )
    goto LABEL_5;
  v10 = (*(_DWORD *)(v9 + 36) & 2) != 0 || (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 36LL) & 2) != 0;
LABEL_6:
  CurrentIrql = KeGetCurrentIrql();
  v12 = v10 || CurrentIrql >= 2u;
  v13 = 0;
  v36 = 0;
  for ( i = &Name; ; ++i )
  {
    v31 = i;
    if ( v13 >= 2 )
      break;
    if ( *((_DWORD *)v8 - 1) == 1 || !v12 )
    {
      LOBYTE(i) = !v12;
      v15 = AuthzBasepUnicodeStringFromOperandValue(a2 + 40LL * v13, i, &Name + v13, (char *)&v34 + v13);
      v36 = v15;
      if ( v15 < 0 )
      {
        *a3 = -1;
        v19 = v15;
        goto LABEL_25;
      }
      i = v31;
    }
    else
    {
      *i = *(UNICODE_STRING *)*(_QWORD *)(*v8 + 48);
    }
    ++v13;
    v8 += 5;
  }
  if ( v5 != 128 && v5 != 129 )
  {
    if ( v12 )
    {
      Buffer = Name.Buffer;
      Length = Name.Length;
      if ( Name.Length >= Expression.Length )
        Length = Expression.Length;
      v26 = (wchar_t *)((char *)Name.Buffer + Length);
      while ( Buffer < v26 )
      {
        v27 = *Buffer;
        v28 = *(wchar_t *)((char *)Buffer + (char *)Expression.Buffer - (char *)Name.Buffer);
        if ( (_WORD)v27 != (_WORD)v28 )
        {
          v29 = v27 - v28;
          goto LABEL_53;
        }
        ++Buffer;
      }
      v29 = Name.Length - Expression.Length;
    }
    else
    {
      v29 = RtlCompareUnicodeString(&Name, &Expression, 1u);
    }
LABEL_53:
    *a3 = v29;
    if ( (_BYTE)v5 != 0x82 )
    {
      if ( (_BYTE)v5 == 0x83 )
      {
        v30 = v29 <= 0;
LABEL_59:
        *a3 = v30;
        goto LABEL_62;
      }
      if ( (_BYTE)v5 == 0x84 )
      {
        v30 = v29 > 0;
        goto LABEL_59;
      }
      if ( (_BYTE)v5 != 0x85 )
        goto LABEL_62;
      v29 = ~v29;
    }
    *a3 = (unsigned int)v29 >> 31;
LABEL_62:
    v19 = v36;
    goto LABEL_25;
  }
  if ( *(_DWORD *)(a2 + 12) == 2 || *(_DWORD *)(a2 + 52) == 2 )
  {
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      p_Name = &Name;
      p_Expression = &Expression;
    }
    else
    {
      p_Name = &Expression;
      p_Expression = &Name;
    }
    IsNameInExpression = RtlIsNameInExpression(p_Expression, p_Name, !v12, 0LL);
    *a3 = IsNameInExpression;
  }
  else
  {
    if ( v12 )
      v23 = AuthzBasepEqualUnicodeStringCaseSensitive(&Name, &Expression);
    else
      v23 = RtlEqualUnicodeString(&Name, &Expression, 1u);
    IsNameInExpression = v23;
    *a3 = v23;
  }
  v19 = v36;
  if ( (_BYTE)v5 == 0x81 )
    *a3 = IsNameInExpression != 1;
LABEL_25:
  v20 = 0LL;
  v21 = &Name.Buffer;
  do
  {
    if ( *((_BYTE *)&v34 + v20) )
      ExFreePoolWithTag(*v21, 0);
    ++v20;
    v21 += 2;
  }
  while ( v20 < 2 );
  return v19;
}
