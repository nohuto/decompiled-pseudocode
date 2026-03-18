/*
 * XREFs of ??_EUsb4HostRouterPoFxRefv2@DxgMonitor@@UEAAPEAXI@Z @ 0x140091720
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1Usb4HostRouterPoFxRefv2@DxgMonitor@@UEAA@XZ @ 0x140277524 (--1Usb4HostRouterPoFxRefv2@DxgMonitor@@UEAA@XZ.c)
 */

DxgMonitor::Usb4HostRouterPoFxRefv2 *__fastcall DxgMonitor::Usb4HostRouterPoFxRefv2::`vector deleting destructor'(
        DxgMonitor::Usb4HostRouterPoFxRefv2 *this,
        char a2)
{
  DxgMonitor::Usb4HostRouterPoFxRefv2::~Usb4HostRouterPoFxRefv2(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
