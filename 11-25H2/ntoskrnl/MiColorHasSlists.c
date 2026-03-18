/*
 * XREFs of MiColorHasSlists @ 0x14022B2E0
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x14022A544 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiRemovePageAnyColor @ 0x14022B30C (MiRemovePageAnyColor.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiPageFreeToZero @ 0x1403478B0 (MiPageFreeToZero.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiColorHasSlists(int a1)
{
  return (a1 & 0x30000) == 0x30000 && (a1 & 0xC0000) == 0x40000;
}
