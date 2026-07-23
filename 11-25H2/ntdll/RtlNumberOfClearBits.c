/*
 * XREFs of RtlNumberOfClearBits @ 0x1800F4A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x1800F4AC0 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
