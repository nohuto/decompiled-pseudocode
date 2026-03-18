/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1400852A6
 * Callers:
 *     mbtowc @ 0x1400850E4 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
