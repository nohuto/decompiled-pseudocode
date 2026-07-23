/*
 * XREFs of towlower @ 0x1404FD4D0
 * Callers:
 *     ExpParseArcPathName @ 0x1407BC358 (ExpParseArcPathName.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1407BD590 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1407BD684 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1407BD804 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1407BD8A0 (ExpTranslateHexStringToULONGLONG.c)
 *     ExpTranslateBootEntryNameToId @ 0x14094E3A8 (ExpTranslateBootEntryNameToId.c)
 *     EtwpCovSampCheckForSegments @ 0x1409F8664 (EtwpCovSampCheckForSegments.c)
 * Callees:
 *     iswctype @ 0x1404FE4F0 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
