/*
 * XREFs of ?IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180132160
 * Callers:
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180133470 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x180068578 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?IsOfType@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180130D00 (-IsOfType@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEBA_NW4MIL_RESOURCE_TYPE@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRegionGeometry::IsSameGeometry(CRegionGeometry *this, const struct CGeometry *a2)
{
  char v2; // di
  char (__fastcall *v5)(__int64, int); // rax
  char *v7; // r9
  char *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rcx

  v2 = 0;
  if ( a2 )
  {
    v5 = *(char (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 64LL);
    if ( v5 == CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::IsOfType
       ? CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::IsOfType((__int64)a2, 130)
       : v5((__int64)a2, 130) )
    {
      v7 = (char *)*((_QWORD *)this + 18);
      v8 = (char *)*((_QWORD *)this + 17);
      v9 = *((_QWORD *)a2 + 17);
      if ( *((_QWORD *)a2 + 18) - v9 == v7 - v8 )
      {
        v2 = 1;
        v10 = v9 - (_QWORD)v8;
        while ( v8 != v7 )
        {
          if ( operator!=(v8, &v8[v10]) )
            return 0;
          v8 = (char *)(v11 + 16);
        }
      }
    }
  }
  return v2;
}
