/*
 * XREFs of ??1FxNPagedLookasideListFromPool@@MEAA@XZ @ 0x140095650
 * Callers:
 *     ??_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x140095700 (--_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x140056A50 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxNPagedLookasideListFromPool::~FxNPagedLookasideListFromPool(FxNPagedLookasideListFromPool *this)
{
  bool v1; // zf

  v1 = this->m_MemoryObjectSize == 0;
  this->__vftable = (FxNPagedLookasideListFromPool_vtbl *)FxNPagedLookasideListFromPool::`vftable';
  if ( !v1 )
    ExDeleteNPagedLookasideList(&this->m_ObjectLookaside);
  if ( this->m_BufferSize )
    ExDeleteNPagedLookasideList(&this->m_PoolLookaside);
  this->__vftable = (FxNPagedLookasideListFromPool_vtbl *)FxLookasideList::`vftable';
  FxObject::~FxObject(this);
}
