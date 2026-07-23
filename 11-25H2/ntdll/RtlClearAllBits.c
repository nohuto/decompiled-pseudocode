/*
 * XREFs of RtlClearAllBits @ 0x1800F2D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset_thunk_772440563353939046(
    BitMapHeader->Buffer,
    0,
    4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
