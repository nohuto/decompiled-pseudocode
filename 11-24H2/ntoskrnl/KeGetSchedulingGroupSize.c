/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1404AD2E0
 * Callers:
 *     PspSessionObjectCreate @ 0x14077BDCC (PspSessionObjectCreate.c)
 *     PspGetRateControlSize @ 0x14098CFE0 (PspGetRateControlSize.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(440 * KeMaximumProcessors + 128);
}
