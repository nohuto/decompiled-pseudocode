/*
 * XREFs of ??_EFxPkgIo@@UEAAPEAXI@Z @ 0x14004B580
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x14004B5B8 (--1FxPkgIo@@UEAA@XZ.c)
 */

FxPkgIo *__fastcall FxPkgIo::`vector deleting destructor'(FxPkgIo *this, char a2)
{
  FxPkgIo::~FxPkgIo(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
