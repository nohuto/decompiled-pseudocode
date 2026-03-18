/*
 * XREFs of ??1FxRegKey@@UEAA@XZ @ 0x140056678
 * Callers:
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x140056640 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1400566BC (--1FxPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxRegKey::~FxRegKey(FxRegKey *this)
{
  void *m_Key; // rcx

  this->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
  m_Key = this->m_Key;
  if ( m_Key )
  {
    ZwClose(m_Key);
    this->m_Key = 0LL;
  }
  FxPagedObject::~FxPagedObject(this);
}
