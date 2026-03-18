/*
 * XREFs of ??1?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@UEAA@XZ @ 0x1802177DC
 * Callers:
 *     ??_ECMeshGeometry2D@@UEAAPEAXI@Z @ 0x180217790 (--_ECMeshGeometry2D@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::~CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>(
        CGeometry2D *this)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 20) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  v3 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 17) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  v4 = (_QWORD *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 4 * ((__int64)(*((_QWORD *)this + 14) - (_QWORD)v4) >> 2));
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  CGeometry2D::~CGeometry2D(this);
}
