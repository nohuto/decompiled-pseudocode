/*
 * XREFs of AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140A17DEC
 * Callers:
 *     SeCompareTokens @ 0x140A179B8 (SeCompareTokens.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1403B8830 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x140A17EB0 (AuthzBasepIsCompareRelevantAttribute.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x140A17EE4 (AuthzBasepCompareSecurityAttribute.c)
 */

bool __fastcall AuthzBasepCompareLegacySecurityAttributesInformation(int *a1, _DWORD *a2)
{
  int v2; // ebp
  char v3; // bl
  int v4; // edi
  __int64 *v6; // r15
  const UNICODE_STRING *i; // rsi
  __int64 *SecurityAttribute; // rax
  _QWORD **v10; // r14
  _QWORD *v11; // rsi
  char IsCompareRelevantAttribute; // al
  int v13; // ecx

  v2 = *a1;
  v3 = 0;
  v4 = *a2;
  if ( !*a1 && !v4 )
    return 1;
  v6 = (__int64 *)(a1 + 2);
  for ( i = (const UNICODE_STRING *)*((_QWORD *)a1 + 1);
        i != (const UNICODE_STRING *)v6;
        i = *(const UNICODE_STRING **)&i->Length )
  {
    if ( (unsigned __int8)AuthzBasepIsCompareRelevantAttribute(i) )
    {
      SecurityAttribute = AuthzBasepFindSecurityAttribute((__int64)a2, i + 2);
      if ( !SecurityAttribute || !(unsigned __int8)AuthzBasepCompareSecurityAttribute(i, SecurityAttribute) )
        return v3;
    }
    else
    {
      --v2;
    }
  }
  v10 = (_QWORD **)(a2 + 2);
  v11 = *v10;
  while ( v11 != v10 )
  {
    IsCompareRelevantAttribute = AuthzBasepIsCompareRelevantAttribute(v11);
    v11 = (_QWORD *)*v11;
    v13 = v4 - 1;
    if ( IsCompareRelevantAttribute )
      v13 = v4;
    v4 = v13;
  }
  return v2 == v4;
}
