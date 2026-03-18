/*
 * XREFs of AuthzBasepQuerySecurityAttributeAndValues @ 0x1403679D0
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x1403678D0 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x14036A1E4 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepGetNextValue @ 0x14036B02C (AuthzBasepGetNextValue.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140477BD0 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x14035FA50 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14035FC14 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x140368DE8 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x1409FCE1C (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributeAndValues(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  const UNICODE_STRING *v5; // r14
  char v6; // r15
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  const UNICODE_STRING *v9; // rcx
  __int64 result; // rax
  const void **v11; // rcx
  const UNICODE_STRING *v12; // rdx
  char v13; // al
  wchar_t *Buffer; // rdx

  if ( *(_DWORD *)a1 == 6 )
    return AuthzBasepQueryTokenAttributeAndValues();
  if ( *(_DWORD *)a1 == 7 )
    return AuthzBasepQuerySystemSecurityAttributeAndValues();
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    Buffer = **(wchar_t ***)(a1 + 64);
    if ( Buffer == (wchar_t *)(v2 + 72) )
      return 2147483674LL;
LABEL_22:
    *(_QWORD *)(a1 + 48) = Buffer + 20;
    result = 0LL;
    *(_QWORD *)(a1 + 64) = Buffer;
    return result;
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(_QWORD **)(v3 + 8);
    v5 = 0LL;
    v6 = 0;
    while ( v4 != (_QWORD *)(v3 + 8) )
    {
      v5 = (const UNICODE_STRING *)v4;
      v11 = (const void **)(v4 + 4);
      v12 = (const UNICODE_STRING *)(a1 + 16);
      if ( KeGetCurrentIrql() >= 2u )
        v13 = AuthzBasepEqualUnicodeStringCaseSensitive(v11, (__int64)v12);
      else
        v13 = RtlEqualUnicodeString((PCUNICODE_STRING)v11, v12, 1u);
      if ( v13 )
      {
LABEL_19:
        v6 = 1;
        goto LABEL_9;
      }
      v4 = (_QWORD *)*v4;
    }
    v7 = *(__int64 **)(v3 + 32);
    v8 = (__int64 *)(v3 + 32);
    while ( v7 != v8 )
    {
      v5 = (const UNICODE_STRING *)(v7 - 2);
      if ( (v7[5] & 1) == 0 && AuthzBasepEqualUnicodeString(v5 + 2, (const UNICODE_STRING *)(a1 + 16)) )
        goto LABEL_19;
      v7 = (__int64 *)*v7;
    }
LABEL_9:
    v9 = 0LL;
    if ( v6 )
      v9 = v5;
    if ( v9 )
    {
      Buffer = v9[4].Buffer;
      *(_DWORD *)(a1 + 40) = HIDWORD(v9[3].Buffer);
      *(_WORD *)(a1 + 32) = v9[3].Length;
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(&v9[3].MaximumLength + 1);
      *(_QWORD *)(a1 + 56) = v9;
      goto LABEL_22;
    }
  }
  return 3221226021LL;
}
