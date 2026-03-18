/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x140085296
 * Callers:
 *     mbtowc @ 0x1400850D4 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
