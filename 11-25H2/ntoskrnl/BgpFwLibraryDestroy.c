/*
 * XREFs of BgpFwLibraryDestroy @ 0x140BA1678
 * Callers:
 *     BgkDestroy @ 0x140BA0170 (BgkDestroy.c)
 *     BgpFwLibraryInitialize @ 0x140BA5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 *     BgpFwInitializeReservePool @ 0x140BA1634 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x140BA1724 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x140BA273C (BgpFoDestroy.c)
 *     ResFwBackgroundTransition @ 0x140BA5D28 (ResFwBackgroundTransition.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140EEFE38 )
  {
    BgpFoDestroy(qword_140EEFE38);
    if ( *(_QWORD *)qword_140EEFE38 && (*(_DWORD *)(qword_140EEFE38 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140EEFE38);
    BgpFwFreeMemory(qword_140EEFE38);
    qword_140EEFE38 = 0LL;
  }
  if ( qword_140EEFDC0 )
  {
    BgpFwFreeMemory(qword_140EEFDC0);
    qword_140EEFDC0 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140EEFE40 = 0LL;
    qword_140EEFE58 = 0LL;
    qword_140EEFE50 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2LL);
  dword_140EEFD90 = 0;
  return 0LL;
}
