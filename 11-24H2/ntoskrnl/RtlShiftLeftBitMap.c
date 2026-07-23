/*
 * XREFs of RtlShiftLeftBitMap @ 0x1405E5960
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     RtlExtractBitMap @ 0x1405E5470 (RtlExtractBitMap.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall RtlShiftLeftBitMap(PRTL_BITMAP BitMapHeader, ULONG NumberToClear)
{
  unsigned int SizeOfBitMap; // r9d
  int v3; // eax

  if ( NumberToClear )
  {
    SizeOfBitMap = BitMapHeader->SizeOfBitMap;
    v3 = 0;
    if ( NumberToClear < BitMapHeader->SizeOfBitMap )
    {
      RtlExtractBitMap(BitMapHeader, BitMapHeader, NumberToClear, SizeOfBitMap - NumberToClear);
      RtlClearBits(BitMapHeader, BitMapHeader->SizeOfBitMap - NumberToClear, NumberToClear);
    }
    else
    {
      LOBYTE(v3) = (SizeOfBitMap & 0x1F) != 0;
      memset_0(BitMapHeader->Buffer, 0, 4 * ((SizeOfBitMap >> 5) + v3));
    }
  }
}
