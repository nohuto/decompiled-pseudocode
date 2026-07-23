/*
 * XREFs of MmMapMemoryDumpMdlEx2 @ 0x1404F6068
 * Callers:
 *     PopGetNextTable @ 0x1405D0B64 (PopGetNextTable.c)
 *     PopDecompressHiberBlocks @ 0x140B5E974 (PopDecompressHiberBlocks.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x14049665C (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx2(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  MiMapMemoryDumpMdl(a1, a2, a3, a4);
  return 0LL;
}
