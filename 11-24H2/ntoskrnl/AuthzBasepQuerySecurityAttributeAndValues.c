/*
 * XREFs of AuthzBasepQuerySecurityAttributeAndValues @ 0x140323790
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x140323590 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x140325324 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepGetNextValue @ 0x140326B8C (AuthzBasepGetNextValue.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140473DD0 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 * Callees:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1403239D8 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B88F4 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403B8930 (AuthzBasepEqualUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x1409F02BC (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributeAndValues(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  _QWORD *v4; // rdi
  __int64 *v5; // r14
  char v6; // r15
  __int64 *v7; // rdi
  __int64 *v8; // rbp
  __int64 *v9; // rcx
  __int64 result; // rax
  const UNICODE_STRING *v11; // rcx
  const UNICODE_STRING *v12; // rdx
  BOOLEAN v13; // al
  __int64 v14; // rdx

  if ( *(_DWORD *)a1 == 6 )
    return AuthzBasepQueryTokenAttributeAndValues();
  if ( *(_DWORD *)a1 == 7 )
    return AuthzBasepQuerySystemSecurityAttributeAndValues();
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    v14 = **(_QWORD **)(a1 + 64);
    if ( v14 == v2 + 72 )
      return 2147483674LL;
LABEL_19:
    *(_QWORD *)(a1 + 48) = v14 + 40;
    result = 0LL;
    *(_QWORD *)(a1 + 64) = v14;
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
      v5 = v4;
      v11 = (const UNICODE_STRING *)(v4 + 4);
      v12 = (const UNICODE_STRING *)(a1 + 16);
      if ( KeGetCurrentIrql() >= 2u )
        v13 = AuthzBasepEqualUnicodeStringCaseSensitive(v11, v12);
      else
        v13 = RtlEqualUnicodeString(v11, v12, 1u);
      if ( v13 )
      {
LABEL_21:
        v6 = 1;
        goto LABEL_9;
      }
      v4 = (_QWORD *)*v4;
    }
    v7 = *(__int64 **)(v3 + 32);
    v8 = (__int64 *)(v3 + 32);
    while ( v7 != v8 )
    {
      v5 = v7 - 2;
      if ( (v7[5] & 1) == 0 && (unsigned __int8)AuthzBasepEqualUnicodeString(v5 + 4, a1 + 16) )
        goto LABEL_21;
      v7 = (__int64 *)*v7;
    }
LABEL_9:
    v9 = 0LL;
    if ( v6 )
      v9 = v5;
    if ( v9 )
    {
      v14 = v9[9];
      *(_DWORD *)(a1 + 40) = *((_DWORD *)v9 + 15);
      *(_WORD *)(a1 + 32) = *((_WORD *)v9 + 24);
      *(_DWORD *)(a1 + 36) = *((_DWORD *)v9 + 13);
      *(_QWORD *)(a1 + 56) = v9;
      goto LABEL_19;
    }
  }
  return 3221226021LL;
}
