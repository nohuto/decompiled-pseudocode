/*
 * XREFs of RtlNumberOfClearBits @ 0x1800ED810
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x1800ED840 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
