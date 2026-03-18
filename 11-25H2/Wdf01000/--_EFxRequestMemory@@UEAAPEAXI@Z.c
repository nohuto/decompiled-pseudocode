/*
 * XREFs of ??_EFxRequestMemory@@UEAAPEAXI@Z @ 0x140056860
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x140056898 (--1FxRequestMemory@@UEAA@XZ.c)
 */

FxRequestMemory *__fastcall FxRequestMemory::`vector deleting destructor'(FxRequestMemory *this, char a2)
{
  FxRequestMemory::~FxRequestMemory(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
