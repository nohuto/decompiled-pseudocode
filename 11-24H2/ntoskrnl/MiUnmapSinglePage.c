/*
 * XREFs of MiUnmapSinglePage @ 0x1404C39B0
 * Callers:
 *     MiFreeForkMappingPte @ 0x1406F9B9C (MiFreeForkMappingPte.c)
 * Callees:
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_140E376A8, (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 1u);
}
