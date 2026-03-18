/*
 * XREFs of ??_EFxPkgIo@@UEAAPEAXI@Z @ 0x14003F760
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x14003F798 (--1FxPkgIo@@UEAA@XZ.c)
 */

FxPkgIo *__fastcall FxPkgIo::`vector deleting destructor'(FxPkgIo *this, char a2)
{
  FxPkgIo::~FxPkgIo(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
