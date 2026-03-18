/*
 * XREFs of ??_GFxDeviceBase@@MEAAPEAXI@Z @ 0x1400940E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x14004D964 (--1FxDeviceBase@@MEAA@XZ.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::`scalar deleting destructor'(FxDeviceBase *this, char a2)
{
  FxDeviceBase::~FxDeviceBase(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
