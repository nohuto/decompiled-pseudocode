/*
 * XREFs of BgpFwInitializeReservePool @ 0x140BA1634
 * Callers:
 *     BgpFwLibraryDestroy @ 0x140BA1678 (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x140BA1828 (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x140BA5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlClearAllBits @ 0x14044A700 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_140E64BC0 = a1;
  dword_140E3EAF4 = a2;
  BitMapHeader.SizeOfBitMap = a2;
  BitMapHeader.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&BitMapHeader);
}
