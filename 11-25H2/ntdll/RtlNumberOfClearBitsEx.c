/*
 * XREFs of RtlNumberOfClearBitsEx @ 0x18013F0F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x18010FE20 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall RtlNumberOfClearBitsEx(__int64 *a1)
{
  return *a1 - RtlNumberOfSetBitsEx(a1);
}
