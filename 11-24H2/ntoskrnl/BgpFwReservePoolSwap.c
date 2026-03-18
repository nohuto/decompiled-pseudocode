/*
 * XREFs of BgpFwReservePoolSwap @ 0x140BB1828
 * Callers:
 *     ResFwFreeContext @ 0x140BB34C4 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x140BB1634 (BgpFwInitializeReservePool.c)
 */

void __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140E64E00 = qword_140E64E08;
      *(_QWORD *)&qword_140E3ED30 = qword_140E3ED28;
      BitMapHeader = (RTL_BITMAP)xmmword_140E64E28;
    }
  }
  else
  {
    qword_140E3ED28 = *(_QWORD *)&qword_140E3ED30;
    qword_140E64E08 = qword_140E64E00;
    xmmword_140E64E28 = (__int128)BitMapHeader;
    BgpFwInitializeReservePool(a2, a3, a4);
  }
}
