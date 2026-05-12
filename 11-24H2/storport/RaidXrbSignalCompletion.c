/*
 * XREFs of RaidXrbSignalCompletion @ 0x140035D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall RaidXrbSignalCompletion(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(a1 + 664), 0, 0);
}
