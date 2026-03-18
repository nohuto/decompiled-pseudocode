/*
 * XREFs of KeKvaShadowingActive @ 0x1404A82EC
 * Callers:
 *     sub_140518288 @ 0x140518288 (sub_140518288.c)
 *     KeQueryKvaShadowInformation @ 0x140730980 (KeQueryKvaShadowInformation.c)
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x14090B050 (PspDisablePrimaryTokenExchange.c)
 *     KeQuerySpeculationControlInformation @ 0x140AC0980 (KeQuerySpeculationControlInformation.c)
 *     sub_140BF7E44 @ 0x140BF7E44 (sub_140BF7E44.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
