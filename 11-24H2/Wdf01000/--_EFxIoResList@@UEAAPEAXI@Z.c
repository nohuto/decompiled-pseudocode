/*
 * XREFs of ??_EFxIoResList@@UEAAPEAXI@Z @ 0x14003F720
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x1400400F8 (--1FxCollection@@UEAA@XZ.c)
 */

FxCollection *__fastcall FxIoResList::`vector deleting destructor'(FxCollection *this, char a2)
{
  FxCollection::~FxCollection(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
