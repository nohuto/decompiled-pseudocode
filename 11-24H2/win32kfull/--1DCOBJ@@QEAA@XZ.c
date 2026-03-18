/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0
 * Callers:
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreSetTextAlign @ 0x140038C8C (GreSetTextAlign.c)
 *     GreGetTextMetricsW @ 0x14007CF54 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x14007E5DC (GreGetTextExtentW.c)
 *     GreGetCharSet @ 0x1400BB178 (GreGetCharSet.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     NtGdiResizePalette @ 0x14010EC60 (NtGdiResizePalette.c)
 *     UntrapAppContainerRenderingWrap @ 0x140147F00 (UntrapAppContainerRenderingWrap.c)
 *     GreGetTextAlign @ 0x1401F1C90 (GreGetTextAlign.c)
 *     NtGdiQueryFontAssocInfo @ 0x14025B490 (NtGdiQueryFontAssocInfo.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x14025C360 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     NtGdiMakeObjectUnXferable @ 0x14025D1E0 (NtGdiMakeObjectUnXferable.c)
 *     NtGdiFontIsLinked @ 0x14025F5D0 (NtGdiFontIsLinked.c)
 *     GreRealizePalette @ 0x140266580 (GreRealizePalette.c)
 *     ?bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z @ 0x140268328 (-bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z.c)
 *     GreGetAspectRatioFilter @ 0x140303D00 (GreGetAspectRatioFilter.c)
 *     GreGetTextCharsetInfo @ 0x140303DBC (GreGetTextCharsetInfo.c)
 *     GreGetTextCharacterExtra @ 0x140310A74 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x140310ABC (GreSetTextCharacterExtra.c)
 *     NtGdiSetTextJustification @ 0x140310B20 (NtGdiSetTextJustification.c)
 *     ??1XFERDCOBJ@@QEAA@XZ @ 0x140325ECC (--1XFERDCOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1401541FC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
  PopThreadGuardedObject((char *)this + 40);
}
