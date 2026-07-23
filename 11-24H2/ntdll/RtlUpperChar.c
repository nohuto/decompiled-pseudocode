/*
 * XREFs of RtlUpperChar @ 0x18008D1D0
 * Callers:
 *     RtlPrefixString @ 0x1800D9C40 (RtlPrefixString.c)
 *     RtlEqualString @ 0x1800DD800 (RtlEqualString.c)
 *     RtlCompareString @ 0x1800DF860 (RtlCompareString.c)
 *     RtlUpperString @ 0x18013A880 (RtlUpperString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x18008D5B0 (RtlpIsUtf8Process.c)
 */

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  CHAR v1; // cl

  RtlpIsUtf8Process(Character);
  if ( (unsigned __int8)(v1 - 97) <= 0x19u )
    return v1 ^ 0x20;
  return v1;
}
