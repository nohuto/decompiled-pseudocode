/*
 * XREFs of ??_EFxUsbDeviceControlContext@@UEAAPEAXI@Z @ 0x140062D70
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x140062DA8 (--1FxUsbDeviceControlContext@@UEAA@XZ.c)
 */

FxUsbDeviceControlContext *__fastcall FxUsbDeviceControlContext::`vector deleting destructor'(
        FxUsbDeviceControlContext *this,
        char a2)
{
  FxUsbDeviceControlContext::~FxUsbDeviceControlContext(this);
  if ( (a2 & 1) != 0 )
    FxStump::operator delete(this);
  return this;
}
