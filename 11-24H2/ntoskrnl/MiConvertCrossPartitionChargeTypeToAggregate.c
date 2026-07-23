/*
 * XREFs of MiConvertCrossPartitionChargeTypeToAggregate @ 0x1404C84F0
 * Callers:
 *     MiApplyCrossPartitionCharges @ 0x14026B298 (MiApplyCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharge @ 0x1404C8470 (MiReturnCrossPartitionCharge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiConvertCrossPartitionChargeTypeToAggregate(int a1)
{
  __int64 result; // rax

  if ( (a1 & 0xFFFFFFF9) != 0 )
    return 8LL;
  result = 7LL;
  if ( a1 == 4 )
    return 8LL;
  return result;
}
