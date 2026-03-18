/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x140453EC0
 * Callers:
 *     AdtpPackageParameters @ 0x1404534B8 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
