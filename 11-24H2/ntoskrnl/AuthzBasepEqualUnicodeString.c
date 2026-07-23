/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x1403B8930
 * Callers:
 *     SeSecurityAttributePresent @ 0x140322DA0 (SeSecurityAttributePresent.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140323790 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1403239D8 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B7C30 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1403B7FB0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepSecurityAttributePresent @ 0x1403B8760 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1403B8830 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403BAA7C (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x1409F0340 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B88F4 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const void **a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive(a1, (__int64)a2);
  else
    return RtlEqualUnicodeString((PCUNICODE_STRING)a1, a2, 1u);
}
