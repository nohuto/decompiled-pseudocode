/*
 * XREFs of ??_EFxDriver@@UEAAPEAXI@Z @ 0x14003E7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x14003EA28 (--1FxDriver@@UEAA@XZ.c)
 */

FxDriver *__fastcall FxDriver::`vector deleting destructor'(FxDriver *this, char a2)
{
  FxDriver::~FxDriver(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
