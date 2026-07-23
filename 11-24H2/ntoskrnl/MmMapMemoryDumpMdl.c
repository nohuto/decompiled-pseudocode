/*
 * XREFs of MmMapMemoryDumpMdl @ 0x140496620
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x14049665C (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return MiMapMemoryDumpMdl(qword_140E301F8 << 25 >> 16, a2, a1, 0LL);
}
