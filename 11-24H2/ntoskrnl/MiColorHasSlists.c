/*
 * XREFs of MiColorHasSlists @ 0x1402F6D90
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiPageFreeToZero @ 0x14026ABD0 (MiPageFreeToZero.c)
 *     MiRemovePageAnyColor @ 0x1402F65A4 (MiRemovePageAnyColor.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiColorHasSlists(int a1)
{
  return (a1 & 0x30000) == 0x30000 && (a1 & 0xC0000) == 0x40000;
}
