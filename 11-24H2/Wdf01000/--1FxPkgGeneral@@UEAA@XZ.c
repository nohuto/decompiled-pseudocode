/*
 * XREFs of ??1FxPkgGeneral@@UEAA@XZ @ 0x14003FF84
 * Callers:
 *     ??_EFxPkgGeneral@@UEAAPEAXI@Z @ 0x14003FBF0 (--_EFxPkgGeneral@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x140040500 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxPkgGeneral::~FxPkgGeneral(FxPkgGeneral *this)
{
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // rbx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v4; // rax

  this->__vftable = (FxPkgGeneral_vtbl *)FxPkgGeneral::`vftable';
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  while ( 1 )
  {
    Flink = p_m_FileObjectInfoHeadList->Flink;
    if ( p_m_FileObjectInfoHeadList->Flink == p_m_FileObjectInfoHeadList )
      break;
    if ( Flink->Blink != p_m_FileObjectInfoHeadList || (v4 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_m_FileObjectInfoHeadList->Flink = v4;
    v4->Blink = p_m_FileObjectInfoHeadList;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    FxStump::operator delete(Flink);
  }
  FxNonPagedObject::~FxNonPagedObject(this);
}
