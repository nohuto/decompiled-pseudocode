/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C005E508
 * Callers:
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1C00357E4 (-vCleanupSurfaces@@YAXK@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreCreatePatternBrushInternal @ 0x1C005E410 (GreCreatePatternBrushInternal.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0062100 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     _lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_ @ 0x1C00D2730 (_lambda_c42d5e148a0c8c495193b965072d0c08_--_lambda_invoker_cdecl_.c)
 *     ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x1C00D2930 (-GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C0150AE0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0150CA8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0159DB4 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     bDfbSurfacesMigrated @ 0x1C0159F10 (bDfbSurfacesMigrated.c)
 *     bMigrateSurfaceForConversion @ 0x1C015A180 (bMigrateSurfaceForConversion.c)
 *     bInitBMOBJ @ 0x1C02DE010 (bInitBMOBJ.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0042BA0 (HmgShareLockCheck.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00D1560 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  unsigned int v2; // ebx

  v2 = (unsigned int)a2;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  *((_QWORD *)this + 4) = HmgShareLockCheck(v2, 5);
  return this;
}
