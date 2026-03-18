/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14035FC14
 * Callers:
 *     SeSecurityAttributePresent @ 0x1402940F0 (SeSecurityAttributePresent.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403100CC (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepEqualUnicodeString @ 0x14035FA50 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepSecurityAttributePresent @ 0x14035FA80 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14035FB50 (AuthzBasepFindSecurityAttribute.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x140360510 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x140360890 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1403679D0 (AuthzBasepQuerySecurityAttributeAndValues.c)
 * Callees:
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
