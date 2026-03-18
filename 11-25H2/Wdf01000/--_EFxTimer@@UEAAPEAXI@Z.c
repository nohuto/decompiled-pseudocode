/*
 * XREFs of ??_EFxTimer@@UEAAPEAXI@Z @ 0x14004BF60
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x14004BF98 (--1FxTimer@@UEAA@XZ.c)
 */

FxTimer *__fastcall FxTimer::`vector deleting destructor'(FxTimer *this, char a2)
{
  FxTimer::~FxTimer(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
