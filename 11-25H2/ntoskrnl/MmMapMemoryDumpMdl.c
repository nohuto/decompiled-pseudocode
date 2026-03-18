/*
 * XREFs of MmMapMemoryDumpMdl @ 0x14049C420
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x14049C45C (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return MiMapMemoryDumpMdl(qword_140E2FE78 << 25 >> 16, a2, a1, 0LL);
}
