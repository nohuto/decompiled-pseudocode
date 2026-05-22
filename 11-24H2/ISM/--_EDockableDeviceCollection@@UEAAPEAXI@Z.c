/*
 * XREFs of ??_EDockableDeviceCollection@@UEAAPEAXI@Z @ 0x1800DE3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DockableDeviceCollection@@UEAA@XZ @ 0x1800DE1C4 (--1DockableDeviceCollection@@UEAA@XZ.c)
 */

DockableDeviceCollection *__fastcall DockableDeviceCollection::`vector deleting destructor'(
        DockableDeviceCollection *this,
        char a2)
{
  DockableDeviceCollection::~DockableDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xAE0);
    else
      free(this);
  }
  return this;
}
