/*
 * XREFs of RtlNumberOfClearBitsEx @ 0x1405E5740
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140407FA0 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall RtlNumberOfClearBitsEx(__int64 *a1)
{
  return *a1 - RtlNumberOfSetBitsEx(a1);
}
