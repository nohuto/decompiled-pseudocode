/*
 * XREFs of RtlUpperChar @ 0x1800714F0
 * Callers:
 *     RtlCompareString @ 0x180071090 (RtlCompareString.c)
 *     RtlPrefixString @ 0x1800DCAB0 (RtlPrefixString.c)
 *     RtlEqualString @ 0x1800DEF00 (RtlEqualString.c)
 *     RtlUpperString @ 0x18013DDC0 (RtlUpperString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1800718D0 (RtlpIsUtf8Process.c)
 */

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  CHAR v1; // cl

  RtlpIsUtf8Process(Character);
  if ( (unsigned __int8)(v1 - 97) <= 0x19u )
    return v1 ^ 0x20;
  return v1;
}
