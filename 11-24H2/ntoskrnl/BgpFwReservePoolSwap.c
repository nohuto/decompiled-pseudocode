/*
 * XREFs of BgpFwReservePoolSwap @ 0x140BB3828
 * Callers:
 *     ResFwFreeContext @ 0x140BB54C4 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x140BB3634 (BgpFwInitializeReservePool.c)
 */

void __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140E623C8 = qword_140E64F90;
      *(_QWORD *)&qword_140E3EE74 = qword_140E3EE6C;
      BitMapHeader = (_RTL_BITMAP)xmmword_140E64FB0;
    }
  }
  else
  {
    qword_140E3EE6C = *(_QWORD *)&qword_140E3EE74;
    qword_140E64F90 = qword_140E623C8;
    xmmword_140E64FB0 = (__int128)BitMapHeader;
    BgpFwInitializeReservePool(a2, a3, a4);
  }
}
