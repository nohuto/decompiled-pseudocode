/*
 * XREFs of ??1FxPagedObject@@UEAA@XZ @ 0x1400566BC
 * Callers:
 *     ??1FxRegKey@@UEAA@XZ @ 0x140056678 (--1FxRegKey@@UEAA@XZ.c)
 *     ??_GFxPagedObject@@UEAAPEAXI@Z @ 0x140099E90 (--_GFxPagedObject@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140056A50 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxPagedObject::~FxPagedObject(FxPagedObject *this)
{
  MxPagedLock *m_Lock; // rcx

  this->__vftable = (FxPagedObject_vtbl *)FxPagedObject::`vftable';
  m_Lock = this->m_Lock;
  if ( m_Lock )
  {
    FxPoolFree(m_Lock);
    this->m_Lock = 0LL;
  }
  FxObject::~FxObject(this);
}
