/*
 * XREFs of RtlNumberOfSetBitsUlongPtr @ 0x1800E1470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlNumberOfSetBitsUlongPtr(unsigned __int64 a1)
{
  return __popcnt(a1);
}
