/*
 * XREFs of MiColorBaseToNode @ 0x14046900C
 * Callers:
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiColorBaseToNode(__int64 a1)
{
  return (*(_DWORD *)(a1 + 8) >> 9) & 0x3F;
}
