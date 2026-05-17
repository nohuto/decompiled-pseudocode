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

char __fastcall RtlUpperChar(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // cl

  RtlpIsUtf8Process(a1, a2, a3);
  if ( (unsigned __int8)(v3 - 97) <= 0x19u )
    return v3 ^ 0x20;
  return v3;
}
