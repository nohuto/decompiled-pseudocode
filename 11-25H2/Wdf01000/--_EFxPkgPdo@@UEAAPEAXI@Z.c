/*
 * XREFs of ??_EFxPkgPdo@@UEAAPEAXI@Z @ 0x14004B900
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x14004B938 (--1FxPkgPdo@@UEAA@XZ.c)
 */

FxPkgPdo *__fastcall FxPkgPdo::`vector deleting destructor'(FxPkgPdo *this, char a2)
{
  FxPkgPdo::~FxPkgPdo(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
