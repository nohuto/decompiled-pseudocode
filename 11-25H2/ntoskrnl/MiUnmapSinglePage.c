/*
 * XREFs of MiUnmapSinglePage @ 0x1404CA490
 * Callers:
 *     MiFreeForkMappingPte @ 0x1406F0174 (MiFreeForkMappingPte.c)
 * Callees:
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 */

char __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes(
           (__int64)&qword_140E37328,
           (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           1u);
}
