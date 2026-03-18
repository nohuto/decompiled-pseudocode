/*
 * XREFs of ??1FxPagedLookasideListFromPool@@MEAA@XZ @ 0x140095878
 * Callers:
 *     ??_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x140095940 (--_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x140052A60 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxPagedLookasideListFromPool::~FxPagedLookasideListFromPool(FxPagedLookasideListFromPool *this)
{
  bool v1; // zf

  v1 = this->m_MemoryObjectSize == 0;
  this->__vftable = (FxPagedLookasideListFromPool_vtbl *)FxPagedLookasideListFromPool::`vftable';
  if ( !v1 )
    ExDeleteNPagedLookasideList(&this->m_ObjectLookaside);
  if ( this->m_RawBufferSize )
    ExDeletePagedLookasideList(&this->m_PoolLookaside);
  this->__vftable = (FxPagedLookasideListFromPool_vtbl *)FxLookasideList::`vftable';
  FxObject::~FxObject(this);
}
