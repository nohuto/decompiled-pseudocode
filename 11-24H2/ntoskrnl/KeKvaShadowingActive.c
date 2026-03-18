/*
 * XREFs of KeKvaShadowingActive @ 0x1404A925C
 * Callers:
 *     sub_14051AA08 @ 0x14051AA08 (sub_14051AA08.c)
 *     KeQueryKvaShadowInformation @ 0x14073C9A0 (KeQueryKvaShadowInformation.c)
 *     PsCreateMinimalProcess @ 0x1407797C4 (PsCreateMinimalProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1408FEB00 (PspDisablePrimaryTokenExchange.c)
 *     KeQuerySpeculationControlInformation @ 0x140AC3E38 (KeQuerySpeculationControlInformation.c)
 *     sub_140C08E44 @ 0x140C08E44 (sub_140C08E44.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
