/*
 * XREFs of MmMapMemoryDumpMdl @ 0x14049BAF0
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x14049BB2C (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return MiMapMemoryDumpMdl(qword_140E300B8 << 25 >> 16, a2, a1, 0LL);
}
