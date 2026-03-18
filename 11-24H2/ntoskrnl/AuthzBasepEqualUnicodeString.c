/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x140357D50
 * Callers:
 *     SeSecurityAttributePresent @ 0x1403438C0 (SeSecurityAttributePresent.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1403442B0 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x14034606C (AuthzBasepQueryTokenAttributeAndValues.c)
 *     AuthzBasepSecurityAttributePresent @ 0x140357D80 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140357E50 (AuthzBasepFindSecurityAttribute.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140358240 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x140358820 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x140358BA0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403600AC (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x1409F79D0 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140357F14 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive(a1, a2);
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
