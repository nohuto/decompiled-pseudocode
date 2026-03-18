/*
 * XREFs of ??_EFxObject@@UEAAPEAXI@Z @ 0x1400565B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140056A50 (--1FxObject@@UEAA@XZ.c)
 */

FxWaitLock *__fastcall FxObject::`vector deleting destructor'(FxWaitLock *this, char a2)
{
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
