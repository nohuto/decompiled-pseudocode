/*
 * XREFs of ??1?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@MEAA@XZ @ 0x1801EA8C4
 * Callers:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x1801F7E6C (--1CTransformGroup@@MEAA@XZ.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x1802B18C0 (--1CTransform3DGroup@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x180077040 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 */

void __fastcall CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::~CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>(
        struct CResource ***this)
{
  char *v1; // rbx

  v1 = (char *)(this + 20);
  CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, this + 20);
  if ( *(_QWORD *)v1 )
  {
    std::_Deallocate<16,0>(*(_QWORD **)v1, (*((_QWORD *)v1 + 2) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
