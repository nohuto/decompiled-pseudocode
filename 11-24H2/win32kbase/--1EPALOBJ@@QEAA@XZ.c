/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x140035800
 * Callers:
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x140038680 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140087E70 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401C5D14 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CDF18 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     bInitPALOBJ @ 0x1402E2008 (bInitPALOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall EPALOBJ::~EPALOBJ(struct _BASEOBJECT **this)
{
  struct _BASEOBJECT *v1; // rcx

  v1 = *this;
  if ( v1 )
    HmgDecrementShareReferenceCountEx(v1, 0LL);
}
