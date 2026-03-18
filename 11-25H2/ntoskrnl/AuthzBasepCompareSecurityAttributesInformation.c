/*
 * XREFs of AuthzBasepCompareSecurityAttributesInformation @ 0x140800BAC
 * Callers:
 *     SepCompareClaimAttributes @ 0x140A19210 (SepCompareClaimAttributes.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14035FB50 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x140A194E0 (AuthzBasepCompareSecurityAttribute.c)
 */

char __fastcall AuthzBasepCompareSecurityAttributesInformation(__int64 a1, _DWORD *a2)
{
  char v2; // bl
  __int64 *v4; // rsi
  const UNICODE_STRING *i; // rdi
  const UNICODE_STRING *SecurityAttribute; // rax

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
