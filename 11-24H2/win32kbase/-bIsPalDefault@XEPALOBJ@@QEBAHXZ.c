/*
 * XREFs of ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1400D81A0
 * Callers:
 *     ulGetNearestIndexFromColorref @ 0x14003B500 (ulGetNearestIndexFromColorref.c)
 *     ulGetMatchingIndexFromColorref @ 0x14003BF10 (ulGetMatchingIndexFromColorref.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x14003C0B0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400D7F78 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400D8054 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401C5D14 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XEPALOBJ::bIsPalDefault(XEPALOBJ *this)
{
  return *(_QWORD *)this == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(this) + 88) + 3768LL);
}
