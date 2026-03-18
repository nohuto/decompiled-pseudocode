/*
 * XREFs of BgpFwInitializeReservePool @ 0x140BB1634
 * Callers:
 *     BgpFwLibraryDestroy @ 0x140BB1678 (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x140BB1828 (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlClearAllBits @ 0x140448960 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_140E64E00 = a1;
  dword_140E3ED34 = a2;
  BitMapHeader.SizeOfBitMap = a2;
  BitMapHeader.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&BitMapHeader);
}
