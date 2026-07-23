/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1404A79C0
 * Callers:
 *     PspSessionObjectCreate @ 0x14077BC7C (PspSessionObjectCreate.c)
 *     PspGetRateControlSize @ 0x140977900 (PspGetRateControlSize.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(440 * KeMaximumProcessors + 128);
}
