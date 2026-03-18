/*
 * XREFs of ??_EFxUsbDevice@@MEAAPEAXI@Z @ 0x14004A500
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x14004A92C (--1FxUsbDevice@@MEAA@XZ.c)
 */

FxUsbDevice *__fastcall FxUsbDevice::`vector deleting destructor'(FxUsbDevice *this, char a2)
{
  FxUsbDevice::~FxUsbDevice(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
