/*
 * XREFs of ??_EFxPkgFdo@@MEAAPEAXI@Z @ 0x14003F460
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxPkgFdo@@MEAA@XZ @ 0x14003FA00 (--1FxPkgFdo@@MEAA@XZ.c)
 */

FxPkgFdo *__fastcall FxPkgFdo::`vector deleting destructor'(FxPkgFdo *this, char a2)
{
  FxPkgFdo::~FxPkgFdo(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
