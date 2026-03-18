/*
 * XREFs of ??1FxPagedObject@@UEAA@XZ @ 0x1400526CC
 * Callers:
 *     ??1FxRegKey@@UEAA@XZ @ 0x140052688 (--1FxRegKey@@UEAA@XZ.c)
 *     ??_GFxPagedObject@@UEAAPEAXI@Z @ 0x140099ED0 (--_GFxPagedObject@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140052A60 (--1FxObject@@UEAA@XZ.c)
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
