/*
 * XREFs of RtlNumberOfClearBitsEx @ 0x18013D9C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x18010D3F0 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall RtlNumberOfClearBitsEx(__int64 *a1)
{
  return *a1 - RtlNumberOfSetBitsEx(a1);
}
