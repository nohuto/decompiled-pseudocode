/*
 * XREFs of MiUnmapSinglePage @ 0x1404CA48C
 * Callers:
 *     MiFreeForkMappingPte @ 0x1406FBF5C (MiFreeForkMappingPte.c)
 * Callees:
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_140E37568, (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 1u);
}
