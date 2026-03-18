/*
 * XREFs of ??_EInkDevice@@UEAAPEAXI@Z @ 0x1402EA710
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x14026BC78 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1402EA9B8 (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 *     ??_EInkDevice@@WCA@EAAPEAXI@Z @ 0x1402ED1E0 (--_EInkDevice@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1InkDevice@@UEAA@XZ @ 0x1402ED184 (--1InkDevice@@UEAA@XZ.c)
 */

InkDevice *__fastcall InkDevice::`vector deleting destructor'(InkDevice *this, char a2)
{
  InkDevice::~InkDevice(this);
  if ( (a2 & 1) != 0 && this )
    Win32FreePool(this);
  return this;
}
