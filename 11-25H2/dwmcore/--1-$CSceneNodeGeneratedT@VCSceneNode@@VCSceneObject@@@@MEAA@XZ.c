/*
 * XREFs of ??1?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@MEAA@XZ @ 0x1802AF0D4
 * Callers:
 *     ??1CSceneNode@@MEAA@XZ @ 0x1802AF17C (--1CSceneNode@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x180077040 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 */

void __fastcall CSceneNodeGeneratedT<CSceneNode,CSceneObject>::~CSceneNodeGeneratedT<CSceneNode,CSceneObject>(
        CResource *this)
{
  _QWORD **v2; // rbx

  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  v2 = (_QWORD **)((char *)this + 80);
  CResource::UnRegisterNotifiers<CSceneComponent>(this, (struct CResource ***)this + 10);
  CResource::UnRegisterNotifiers<CSceneComponent>(this, (struct CResource ***)this + 13);
  if ( *((_QWORD *)this + 13) )
  {
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 13),
      (*((_QWORD *)this + 15) - *((_QWORD *)this + 13)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( *v2 )
  {
    std::_Deallocate<16,0>(*v2, (*((_QWORD *)this + 12) - (_QWORD)*v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *v2 = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  CResource::~CResource(this);
}
