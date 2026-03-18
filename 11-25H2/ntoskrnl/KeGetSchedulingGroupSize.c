/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1404ABE8C
 * Callers:
 *     PspSessionObjectCreate @ 0x14076C22C (PspSessionObjectCreate.c)
 *     PspGetRateControlSize @ 0x14091C604 (PspGetRateControlSize.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(440 * KeMaximumProcessors + 128);
}
