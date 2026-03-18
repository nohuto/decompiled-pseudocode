/*
 * XREFs of ??1?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEAA@XZ @ 0x18020342C
 * Callers:
 *     ??_GCRegionGeometry@@UEAAPEAXI@Z @ 0x1802033E0 (--_GCRegionGeometry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::~CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>(
        CGeometry *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 19) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  CGeometry::~CGeometry((struct CResource **)this);
}
