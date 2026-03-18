/*
 * XREFs of IsImmersiveBand @ 0x1C00AD2EC
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00AD39C (IsNonImmersiveBand.c)
 */

_BOOL8 __fastcall IsImmersiveBand(__int64 a1, __int64 a2, __int64 a3)
{
  return (unsigned int)IsNonImmersiveBand(a1, a2, a3) == 0;
}
