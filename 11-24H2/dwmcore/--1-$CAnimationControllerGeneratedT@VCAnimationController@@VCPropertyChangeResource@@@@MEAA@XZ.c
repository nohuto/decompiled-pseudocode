/*
 * XREFs of ??1?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x180130C9C
 * Callers:
 *     ??1CAnimationController@@UEAA@XZ @ 0x1801D670C (--1CAnimationController@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x1801329D4 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 */

void __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::~CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>(
        CResource *this)
{
  char *v1; // rbx

  v1 = (char *)this + 88;
  CResource::UnRegisterNotifiers<CKeyframeAnimation>(this);
  if ( *(_QWORD *)v1 )
  {
    std::_Deallocate<16,0>(*(_QWORD **)v1, (*((_QWORD *)v1 + 2) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
  }
  CResource::~CResource(this);
}
