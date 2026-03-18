/*
 * XREFs of ??_EFxPkgGeneral@@UEAAPEAXI@Z @ 0x14004BA10
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxPkgGeneral@@UEAA@XZ @ 0x14004BDA4 (--1FxPkgGeneral@@UEAA@XZ.c)
 */

FxPkgGeneral *__fastcall FxPkgGeneral::`vector deleting destructor'(FxPkgGeneral *this, char a2)
{
  FxPkgGeneral::~FxPkgGeneral(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
