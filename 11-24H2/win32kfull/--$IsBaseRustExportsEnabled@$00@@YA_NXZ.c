/*
 * XREFs of ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400CFC10
 * Callers:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14001666C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A345C (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?bContain@RGNCOREOBJ@@QEBA_NAEAU_RECTL@@@Z @ 0x1400A4ED8 (-bContain@RGNCOREOBJ@@QEBA_NAEAU_RECTL@@@Z.c)
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400CF118 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400CFC34 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x1401AA1FC (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     W32kCddClipRegion @ 0x140325AA0 (W32kCddClipRegion.c)
 * Callees:
 *     <none>
 */

bool IsBaseRustExportsEnabled<1>()
{
  return GetBaseRustGlobals() != 0LL;
}
