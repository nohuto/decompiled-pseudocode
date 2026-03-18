/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C004BD9C
 * Callers:
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1C00357E4 (-vCleanupSurfaces@@YAXK@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0041980 (NtGdiDeleteObjectApp.c)
 *     bDeleteSurface @ 0x1C0062930 (bDeleteSurface.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1C00BBAF0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     _lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_ @ 0x1C00D2730 (_lambda_c42d5e148a0c8c495193b965072d0c08_--_lambda_invoker_cdecl_.c)
 *     ?vTryDeleteSurface@SURFREF@@QEAAXXZ @ 0x1C00D27A0 (-vTryDeleteSurface@SURFREF@@QEAAXXZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0155C5C (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0159DB4 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C015A180 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall SURFREF::bDeleteSurface(SURFREF *this)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*((_QWORD *)this + 4), 0, 0);
  if ( (_DWORD)result )
    *((_QWORD *)this + 4) = 0LL;
  return result;
}
