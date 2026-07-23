/*
 * XREFs of BgpFwInitializeReservePool @ 0x140BB3634
 * Callers:
 *     BgpFwLibraryDestroy @ 0x140BB3678 (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x140BB3828 (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlClearAllBits @ 0x140441080 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_140E623C8 = a1;
  dword_140E3EE78 = a2;
  BitMapHeader.SizeOfBitMap = a2;
  BitMapHeader.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&BitMapHeader);
}
