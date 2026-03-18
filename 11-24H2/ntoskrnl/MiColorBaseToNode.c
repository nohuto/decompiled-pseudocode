/*
 * XREFs of MiColorBaseToNode @ 0x14045C12C
 * Callers:
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiColorBaseToNode(__int64 a1)
{
  return (*(_DWORD *)(a1 + 8) >> 9) & 0x3F;
}
