/*
 * XREFs of RtlNumberOfClearBitsInRange @ 0x18013BBE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsInRange @ 0x18013BC10 (RtlNumberOfSetBitsInRange.c)
 */

ULONG __cdecl RtlNumberOfClearBitsInRange(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  ULONG v4; // eax
  ULONG v5; // ebx

  v4 = RtlNumberOfSetBitsInRange(BitMapHeader, StartingIndex, Length);
  v5 = Length - v4;
  if ( v4 == -1 )
    return -1;
  return v5;
}
