/*
 * XREFs of RaidUnitPowerCycleCheck @ 0x140078EE0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitAdaptiveIdleTimeout @ 0x14001DAA4 (RaidUnitAdaptiveIdleTimeout.c)
 */

void __fastcall RaidUnitPowerCycleCheck(__int64 a1, __int64 a2)
{
  RaidUnitAdaptiveIdleTimeout(a2);
}
