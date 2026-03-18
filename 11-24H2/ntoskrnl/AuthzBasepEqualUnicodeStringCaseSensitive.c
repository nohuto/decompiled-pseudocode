/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140357F14
 * Callers:
 *     SeSecurityAttributePresent @ 0x1403438C0 (SeSecurityAttributePresent.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1403442B0 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403468F4 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepEqualUnicodeString @ 0x140357D50 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepSecurityAttributePresent @ 0x140357D80 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140357E50 (AuthzBasepFindSecurityAttribute.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140358240 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x140358820 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x140358BA0 (AuthzBasepCopyoutSecurityAttributes.c)
 * Callees:
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
