/*
 * XREFs of ??_EFxRelatedDevice@@UEAAPEAXI@Z @ 0x1400AC260
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxRelatedDevice@@UEAA@XZ @ 0x1400AC218 (--1FxRelatedDevice@@UEAA@XZ.c)
 */

FxRelatedDevice *__fastcall FxRelatedDevice::`vector deleting destructor'(FxRelatedDevice *this, char a2)
{
  FxRelatedDevice::~FxRelatedDevice(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
