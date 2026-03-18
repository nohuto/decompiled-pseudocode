/*
 * XREFs of BgpFwLibraryDestroy @ 0x140BB1678
 * Callers:
 *     BgkDestroy @ 0x140BB0170 (BgkDestroy.c)
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 *     BgpFwInitializeReservePool @ 0x140BB1634 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x140BB1724 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x140BB273C (BgpFoDestroy.c)
 *     ResFwBackgroundTransition @ 0x140BB5D28 (ResFwBackgroundTransition.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140EF00F8 )
  {
    BgpFoDestroy(qword_140EF00F8);
    if ( *(_QWORD *)qword_140EF00F8 && (*(_DWORD *)(qword_140EF00F8 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140EF00F8);
    BgpFwFreeMemory(qword_140EF00F8);
    qword_140EF00F8 = 0LL;
  }
  if ( qword_140EF0080 )
  {
    BgpFwFreeMemory(qword_140EF0080);
    qword_140EF0080 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140EF0100 = 0LL;
    qword_140EF0118 = 0LL;
    qword_140EF0110 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2LL);
  dword_140EF0050 = 0;
  return 0LL;
}
