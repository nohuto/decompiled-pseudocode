/*
 * XREFs of ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0159DB4
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C015AC20 (pProcessDfbSurfacesInternal.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0160AF8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C004BD9C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C005E508 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C00A68A0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x1C02327B4 (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 */

void __fastcall vCleanupRedirectionSurface(HSURF *this, char a2)
{
  char v4; // si
  __int64 v5; // rdi
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _BYTE v9[32]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+70h] [rbp-18h]

  if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 && qword_1C02946C0 && (int)qword_1C02946C0() >= 0 )
  {
    SURFREF::SURFREF((SURFREF *)v9, this[4]);
    if ( v10 )
    {
      v4 = 0;
      v5 = 0LL;
      while ( 1 )
      {
        FirstLSurf = SURFACE::GetFirstLSurf((SURFACE *)this);
        if ( !FirstLSurf )
          break;
        if ( !v5 )
          v5 = *((_QWORD *)FirstLSurf + 33);
        v4 = 1;
        if ( qword_1C02946A8 )
          ((void (__fastcall *)(HSURF, struct SFMLOGICALSURFACE *, _QWORD))qword_1C02946A8)(this[6], FirstLSurf, 0LL);
      }
      if ( qword_1C02946C8 )
        qword_1C02946C8(v5);
      SURFREF::bDeleteSurface((SURFREF *)v9);
      v8 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
      if ( a2 && !v4 && !*(_BYTE *)(v8 + 6488) )
      {
        *(_BYTE *)(v8 + 6488) = 1;
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 20LL, this, this[6], 0LL, 0LL, 0LL, 0);
      }
    }
    SURFREF::~SURFREF((SURFREF *)v9);
  }
}
