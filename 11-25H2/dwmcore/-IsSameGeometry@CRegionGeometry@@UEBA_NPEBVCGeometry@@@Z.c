/*
 * XREFs of ?IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x18012FAF0
 * Callers:
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18012F074 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 * Callees:
 *     ?IsOfType@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012FF20 (-IsOfType@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEBA_NW4MIL_RESOURCE_TYPE@.c)
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x180173774 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRegionGeometry::IsSameGeometry(CRegionGeometry *this, const struct CGeometry *a2)
{
  char v2; // di
  __int64 (__fastcall *v5)(const struct CGeometry *, __int64); // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rcx

  v2 = 0;
  if ( a2 )
  {
    v5 = *(__int64 (__fastcall **)(const struct CGeometry *, __int64))(*(_QWORD *)a2 + 64LL);
    if ( (char *)v5 == (char *)CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::IsOfType
       ? CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::IsOfType(a2, 129LL)
       : (unsigned __int8)v5(a2, 129LL) )
    {
      v7 = *((_QWORD *)this + 18);
      v8 = *((_QWORD *)this + 17);
      v9 = *((_QWORD *)a2 + 17);
      if ( *((_QWORD *)a2 + 18) - v9 == v7 - v8 )
      {
        v2 = 1;
        v10 = v9 - v8;
        while ( v8 != v7 )
        {
          if ( (unsigned __int8)operator!=(v8, v10 + v8) )
            return 0;
          v8 = v11 + 16;
        }
      }
    }
  }
  return v2;
}
