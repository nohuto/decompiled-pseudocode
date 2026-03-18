/*
 * XREFs of RtlNumberOfClearBitsEx @ 0x1405E8150
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x1404181F0 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall RtlNumberOfClearBitsEx(__int64 *a1)
{
  return *a1 - RtlNumberOfSetBitsEx(a1);
}
