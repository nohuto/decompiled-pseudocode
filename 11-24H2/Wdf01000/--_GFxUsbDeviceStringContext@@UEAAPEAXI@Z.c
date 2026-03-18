/*
 * XREFs of ??_GFxUsbDeviceStringContext@@UEAAPEAXI@Z @ 0x14009E8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxUsbDeviceStringContext@@UEAA@XZ @ 0x14009E840 (--1FxUsbDeviceStringContext@@UEAA@XZ.c)
 */

FxUsbDeviceStringContext *__fastcall FxUsbDeviceStringContext::`scalar deleting destructor'(
        FxUsbDeviceStringContext *this,
        char a2)
{
  FxUsbDeviceStringContext::~FxUsbDeviceStringContext(this);
  if ( (a2 & 1) != 0 )
    FxStump::operator delete(this);
  return this;
}
