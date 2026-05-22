/*
 * XREFs of ??_GPnpDevice@@UEAAPEAXI@Z @ 0x18006CDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PnpDevice@@UEAA@XZ @ 0x18006CE40 (--1PnpDevice@@UEAA@XZ.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

PnpDevice *__fastcall PnpDevice::`scalar deleting destructor'(PnpDevice *this, char a2)
{
  PnpDevice::~PnpDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x98);
    else
      free(this);
  }
  return this;
}
