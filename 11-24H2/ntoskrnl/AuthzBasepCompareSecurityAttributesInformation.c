/*
 * XREFs of AuthzBasepCompareSecurityAttributesInformation @ 0x140810E5C
 * Callers:
 *     SepCompareClaimAttributes @ 0x140A17C10 (SepCompareClaimAttributes.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1403B8830 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x140A17EE4 (AuthzBasepCompareSecurityAttribute.c)
 */

char __fastcall AuthzBasepCompareSecurityAttributesInformation(__int64 a1, _DWORD *a2)
{
  char v2; // bl
  __int64 *v4; // rsi
  const UNICODE_STRING *i; // rdi
  __int64 *SecurityAttribute; // rax

  v2 = 0;
  if ( *(_DWORD *)a1 == *a2 )
  {
    if ( *(_DWORD *)a1 )
    {
      v4 = (__int64 *)(a1 + 8);
      for ( i = *(const UNICODE_STRING **)(a1 + 8);
            i != (const UNICODE_STRING *)v4;
            i = *(const UNICODE_STRING **)&i->Length )
      {
        SecurityAttribute = AuthzBasepFindSecurityAttribute((__int64)a2, i + 2);
        if ( !SecurityAttribute || !(unsigned __int8)AuthzBasepCompareSecurityAttribute(i, SecurityAttribute) )
          return v2;
      }
    }
    return 1;
  }
  return v2;
}
