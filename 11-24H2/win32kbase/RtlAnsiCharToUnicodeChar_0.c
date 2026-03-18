/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1401A22C8
 * Callers:
 *     toupper @ 0x1401A0788 (toupper.c)
 *     mbtowc @ 0x1401A2078 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
