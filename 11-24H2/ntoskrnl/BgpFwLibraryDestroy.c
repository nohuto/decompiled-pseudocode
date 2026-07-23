/*
 * XREFs of BgpFwLibraryDestroy @ 0x140BB3678
 * Callers:
 *     BgkDestroy @ 0x140BB2170 (BgkDestroy.c)
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwInitializeReservePool @ 0x140BB3634 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x140BB3724 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x140BB473C (BgpFoDestroy.c)
 *     ResFwBackgroundTransition @ 0x140BB7D28 (ResFwBackgroundTransition.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140EF0318 )
  {
    BgpFoDestroy(qword_140EF0318);
    if ( *(_QWORD *)qword_140EF0318 && (*(_DWORD *)(qword_140EF0318 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140EF0318);
    BgpFwFreeMemory(qword_140EF0318);
    qword_140EF0318 = 0LL;
  }
  if ( qword_140EF02A0 )
  {
    BgpFwFreeMemory(qword_140EF02A0);
    qword_140EF02A0 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140EF0320 = 0LL;
    qword_140EF0338 = 0LL;
    qword_140EF0330 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2LL);
  dword_140EF0270 = 0;
  return 0LL;
}
