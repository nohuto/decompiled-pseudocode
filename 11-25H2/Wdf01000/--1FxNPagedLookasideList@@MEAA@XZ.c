/*
 * XREFs of ??1FxNPagedLookasideList@@MEAA@XZ @ 0x140056558
 * Callers:
 *     ??_EFxNPagedLookasideList@@MEAAPEAXI@Z @ 0x1400956C0 (--_EFxNPagedLookasideList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x140056A50 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxNPagedLookasideList::~FxNPagedLookasideList(FxNPagedLookasideList *this)
{
  bool v1; // zf

  v1 = this->m_MemoryObjectSize == 0;
  this->__vftable = (FxNPagedLookasideList_vtbl *)FxNPagedLookasideList::`vftable';
  if ( !v1 )
    ExDeleteNPagedLookasideList(&this->m_ObjectLookaside);
  this->__vftable = (FxNPagedLookasideList_vtbl *)FxLookasideList::`vftable';
  FxObject::~FxObject(this);
}
