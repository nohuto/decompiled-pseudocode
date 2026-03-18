/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x140677E10
 * Callers:
 *     IopLiveDumpBufferDumpData @ 0x140599878 (IopLiveDumpBufferDumpData.c)
 *     PopCreateDumpMdl @ 0x140B5C7EC (PopCreateDumpMdl.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x14049BB2C (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225714LL;
  MiMapMemoryDumpMdl(a1, a2, a3, a4);
  return 0LL;
}
