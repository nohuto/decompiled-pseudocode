/*
 * XREFs of RtlUpperChar @ 0x1800708F0
 * Callers:
 *     RtlPrefixString @ 0x1800DEAD0 (RtlPrefixString.c)
 *     RtlEqualString @ 0x1800E2230 (RtlEqualString.c)
 *     RtlCompareString @ 0x1800E3EE0 (RtlCompareString.c)
 *     RtlUpperString @ 0x18013C690 (RtlUpperString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180070CD0 (RtlpIsUtf8Process.c)
 */

char RtlUpperChar()
{
  char v0; // cl

  RtlpIsUtf8Process();
  if ( (unsigned __int8)(v0 - 97) <= 0x19u )
    return v0 ^ 0x20;
  return v0;
}
