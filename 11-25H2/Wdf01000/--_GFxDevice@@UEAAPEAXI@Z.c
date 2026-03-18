/*
 * XREFs of ??_GFxDevice@@UEAAPEAXI@Z @ 0x14004D0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x14004D4A8 (--1FxDevice@@UEAA@XZ.c)
 */

FxDevice *__fastcall FxDevice::`scalar deleting destructor'(FxDevice *this, char a2)
{
  FxDevice::~FxDevice(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
