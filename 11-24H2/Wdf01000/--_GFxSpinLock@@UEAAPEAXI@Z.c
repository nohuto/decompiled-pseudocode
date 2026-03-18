/*
 * XREFs of ??_GFxSpinLock@@UEAAPEAXI@Z @ 0x1400527B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140052A60 (--1FxObject@@UEAA@XZ.c)
 */

FxSpinLock *__fastcall FxSpinLock::`scalar deleting destructor'(FxSpinLock *this, char a2)
{
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
