/*
 * XREFs of RtlUpperChar @ 0x1408AF4C0
 * Callers:
 *     RtlCompareString @ 0x1408B0610 (RtlCompareString.c)
 *     RtlPrefixString @ 0x1408B12B0 (RtlPrefixString.c)
 *     MiSnapThunk @ 0x140A180B4 (MiSnapThunk.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1408AF8F0 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process(0LL);
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
