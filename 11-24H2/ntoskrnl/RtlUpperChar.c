/*
 * XREFs of RtlUpperChar @ 0x140905720
 * Callers:
 *     RtlCompareString @ 0x140906870 (RtlCompareString.c)
 *     RtlPrefixString @ 0x140907510 (RtlPrefixString.c)
 *     MiSnapThunk @ 0x140A11224 (MiSnapThunk.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x140905B50 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process(0LL);
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
