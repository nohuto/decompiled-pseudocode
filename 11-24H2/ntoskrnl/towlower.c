/*
 * XREFs of towlower @ 0x1404FFC10
 * Callers:
 *     ExpParseArcPathName @ 0x1407BBF08 (ExpParseArcPathName.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1407BD140 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1407BD234 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1407BD3B4 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1407BD450 (ExpTranslateHexStringToULONGLONG.c)
 *     ExpTranslateBootEntryNameToId @ 0x140965918 (ExpTranslateBootEntryNameToId.c)
 *     EtwpCovSampCheckForSegments @ 0x1409FF71C (EtwpCovSampCheckForSegments.c)
 * Callees:
 *     iswctype @ 0x140500C30 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
