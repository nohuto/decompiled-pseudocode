/*
 * XREFs of MiColorBaseToNode @ 0x1404514C4
 * Callers:
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiColorBaseToNode(__int64 a1)
{
  return (*(_DWORD *)(a1 + 8) >> 9) & 0x3F;
}
