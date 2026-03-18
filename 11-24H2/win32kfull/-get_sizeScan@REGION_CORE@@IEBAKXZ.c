/*
 * XREFs of ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400CE8CC
 * Callers:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14001666C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x14004EFA0 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1400CE13C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400CE3D8 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bRectl@RGNOBJ@@QEBAHXZ @ 0x1400CE7DC (-bRectl@RGNOBJ@@QEBAHXZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400CEC24 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400CF118 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400CFC34 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1401C8740 (NtGdiOffsetClipRgn.c)
 * Callees:
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x140063310 (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 */

__int64 __fastcall REGION_CORE::get_sizeScan(REGION_CORE *this)
{
  const struct REGION_CORE *v2; // rdx

  if ( GetBaseRustGlobals() )
    return Win32kRS::RegionCore_get_sizeScan(this, v2);
  else
    return *((unsigned int *)this + 4);
}
