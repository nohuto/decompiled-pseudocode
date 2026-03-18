/*
 * XREFs of PspGetRateControlSize @ 0x14098CFE0
 * Callers:
 *     PspFreeRateControl @ 0x14098CF0C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14098CF58 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1404AD2E0 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
