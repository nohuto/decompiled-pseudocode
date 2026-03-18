/*
 * XREFs of AuthzBasepFindSecurityAttribute @ 0x14035FB50
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x14035F840 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x14035F908 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x140800BAC (AuthzBasepCompareSecurityAttributesInformation.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140A193E8 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x14035FA50 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14035FC14 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 */

const UNICODE_STRING *__fastcall AuthzBasepFindSecurityAttribute(__int64 a1, const UNICODE_STRING *a2)
{
  const UNICODE_STRING *v2; // rbx
  const UNICODE_STRING *v3; // rdi
  __int64 v4; // rsi
  const UNICODE_STRING *v6; // rbp
  char v7; // r15
  __int64 *i; // rdi
  const UNICODE_STRING *v11; // rcx
  BOOLEAN v12; // al

  v2 = *(const UNICODE_STRING **)(a1 + 8);
  v3 = (const UNICODE_STRING *)(a1 + 8);
  v4 = 0LL;
  v6 = 0LL;
  v7 = 0;
  while ( v2 != v3 )
  {
    v6 = v2;
    v11 = v2 + 2;
    if ( KeGetCurrentIrql() >= 2u )
      v12 = AuthzBasepEqualUnicodeStringCaseSensitive(v11, a2);
    else
      v12 = RtlEqualUnicodeString(v11, a2, 1u);
    if ( v12 )
    {
LABEL_12:
      v7 = 1;
      goto LABEL_5;
    }
    v2 = *(const UNICODE_STRING **)&v2->Length;
  }
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    v6 = (const UNICODE_STRING *)(i - 2);
    if ( (i[5] & 1) == 0 && AuthzBasepEqualUnicodeString(v6 + 2, a2) )
      goto LABEL_12;
  }
LABEL_5:
  if ( v7 )
    return v6;
  return (const UNICODE_STRING *)v4;
}
