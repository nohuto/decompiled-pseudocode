/*
 * XREFs of KeKvaShadowingActive @ 0x1404A367C
 * Callers:
 *     sub_1405182C8 @ 0x1405182C8 (sub_1405182C8.c)
 *     KeQueryKvaShadowInformation @ 0x14073A8D0 (KeQueryKvaShadowInformation.c)
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409213E0 (PspDisablePrimaryTokenExchange.c)
 *     KeQuerySpeculationControlInformation @ 0x140AC167C (KeQuerySpeculationControlInformation.c)
 *     sub_140C0AE44 @ 0x140C0AE44 (sub_140C0AE44.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
