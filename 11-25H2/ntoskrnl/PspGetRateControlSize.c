/*
 * XREFs of PspGetRateControlSize @ 0x14091C604
 * Callers:
 *     PspFreeRateControl @ 0x14091C530 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14091C57C (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1404ABE8C (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
