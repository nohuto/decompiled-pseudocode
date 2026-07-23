/*
 * XREFs of BgpFwReservePoolSwap @ 0x140BA1828
 * Callers:
 *     ResFwFreeContext @ 0x140BA34C4 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x140BA5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x140BA1634 (BgpFwInitializeReservePool.c)
 */

void __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140E64BC0 = qword_140E64BC8;
      *(_QWORD *)&qword_140E3EAF0 = qword_140E3EAE8;
      BitMapHeader = (_RTL_BITMAP)xmmword_140E64BE8;
    }
  }
  else
  {
    qword_140E3EAE8 = *(_QWORD *)&qword_140E3EAF0;
    qword_140E64BC8 = qword_140E64BC0;
    xmmword_140E64BE8 = (__int128)BitMapHeader;
    BgpFwInitializeReservePool(a2, a3, a4);
  }
}
