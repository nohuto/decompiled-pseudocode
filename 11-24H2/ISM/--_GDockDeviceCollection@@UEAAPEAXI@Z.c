/*
 * XREFs of ??_GDockDeviceCollection@@UEAAPEAXI@Z @ 0x1800DD220
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DockDeviceCollection@@UEAA@XZ @ 0x1800DD1B0 (--1DockDeviceCollection@@UEAA@XZ.c)
 */

DockDeviceCollection *__fastcall DockDeviceCollection::`scalar deleting destructor'(
        DockDeviceCollection *this,
        char a2)
{
  DockDeviceCollection::~DockDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xB20);
    else
      free(this);
  }
  return this;
}
