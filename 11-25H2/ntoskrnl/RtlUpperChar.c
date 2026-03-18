/*
 * XREFs of RtlUpperChar @ 0x1408E6D10
 * Callers:
 *     RtlCompareString @ 0x1408E8980 (RtlCompareString.c)
 *     MiSnapThunk @ 0x140A12C8C (MiSnapThunk.c)
 *     RtlPrefixString @ 0x140A51520 (RtlPrefixString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1408E7140 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process(0LL);
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
