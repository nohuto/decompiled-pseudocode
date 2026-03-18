/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x140036A58
 * Callers:
 *     ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x14000C4A0 (-GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x14000C950 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     bDfbSurfacesMigrated @ 0x14000CB70 (bDfbSurfacesMigrated.c)
 *     GreCreatePatternBrushInternal @ 0x14000DD70 (GreCreatePatternBrushInternal.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1400146F8 (-vCleanupSurfaces@@YAXK@Z.c)
 *     GreSetBitmapOwner @ 0x140036530 (GreSetBitmapOwner.c)
 *     bDeleteSurface @ 0x1400365C0 (bDeleteSurface.c)
 *     EngLockSurface @ 0x140036810 (EngLockSurface.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x140038400 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x14003D870 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x14003E0F8 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1400848F4 (bMigrateSurfaceForConversion.c)
 *     EngAssociateSurface @ 0x1400C6970 (EngAssociateSurface.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x1401044E0 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 *     EngModifySurface @ 0x140104550 (EngModifySurface.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x140152F18 (--1SURFREFGC@@QEAA@XZ.c)
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x14019B948 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     _SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1401C2980 (_SURFREF--vTryDeleteSurface_--_8_--_lambda_1_--_lambda_invoker_cdecl_.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401C320C (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1401C3E10 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1401CD320 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CDFF8 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     bInitBMOBJ @ 0x1402E2494 (bInitBMOBJ.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall SURFREF::~SURFREF(SURFREF *this)
{
  struct _BASEOBJECT *v2; // rcx

  v2 = (struct _BASEOBJECT *)*((_QWORD *)this + 4);
  if ( v2 )
    HmgDecrementShareReferenceCountEx(v2, 0LL);
  PopThreadGuardedObject(this);
}
