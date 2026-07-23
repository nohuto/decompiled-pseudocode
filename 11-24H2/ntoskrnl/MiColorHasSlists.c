/*
 * XREFs of MiColorHasSlists @ 0x14033EEA0
 * Callers:
 *     MiPageFreeToZero @ 0x140220160 (MiPageFreeToZero.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiRemovePageAnyColor @ 0x14033E6B4 (MiRemovePageAnyColor.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiColorHasSlists(int a1)
{
  return (a1 & 0x30000) == 0x30000 && (a1 & 0xC0000) == 0x40000;
}
