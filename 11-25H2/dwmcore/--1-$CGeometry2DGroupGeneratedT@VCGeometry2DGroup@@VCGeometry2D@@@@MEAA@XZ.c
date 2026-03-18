/*
 * XREFs of ??1?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@MEAA@XZ @ 0x180076FE8
 * Callers:
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x1801F7DDC (--1CGeometry2DGroup@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x180077040 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 */

void __fastcall CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>::~CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>(
        CGeometry2D *this)
{
  char *v1; // rbx

  v1 = (char *)this + 88;
  CResource::UnRegisterNotifiers<CSceneComponent>(this);
  if ( *(_QWORD *)v1 )
  {
    std::_Deallocate<16,0>(*(_QWORD **)v1, (*((_QWORD *)v1 + 2) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
  }
  CGeometry2D::~CGeometry2D(this);
}
