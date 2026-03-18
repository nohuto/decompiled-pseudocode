/*
 * XREFs of EtwpCancelStackWalkApc @ 0x1404AD330
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingStackwalkApc @ 0x14030A338 (EtwpFinalizePendingStackwalkApc.c)
 */

__int64 __fastcall EtwpCancelStackWalkApc(__int64 *a1, __int64 a2, char *a3)
{
  return EtwpFinalizePendingStackwalkApc(*a1, a2, *a3);
}
