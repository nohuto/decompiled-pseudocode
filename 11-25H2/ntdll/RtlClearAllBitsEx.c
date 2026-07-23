/*
 * XREFs of RtlClearAllBitsEx @ 0x18013DE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlClearAllBitsEx(PRTL_BITMAP_EX BitMapHeader)
{
  memset_thunk_772440563353939046(
    BitMapHeader->Buffer,
    0,
    4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
