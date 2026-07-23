/*
 * XREFs of PspGetRateControlSize @ 0x140977900
 * Callers:
 *     PspFreeRateControl @ 0x14097782C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140977878 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1404A79C0 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
