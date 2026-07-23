/*
 * XREFs of RtlNumberOfClearBitsEx @ 0x18013BBB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x1801082D0 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall RtlNumberOfClearBitsEx(__int64 *a1)
{
  return *a1 - RtlNumberOfSetBitsEx(a1);
}
