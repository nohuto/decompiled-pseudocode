/*
 * XREFs of ??_GSystemControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800DBD90
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800DBD58 (--1SystemControlDeviceCollection@@UEAA@XZ.c)
 */

SystemControlDeviceCollection *__fastcall SystemControlDeviceCollection::`scalar deleting destructor'(
        SystemControlDeviceCollection *this,
        char a2)
{
  SystemControlDeviceCollection::~SystemControlDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xB08);
    else
      free(this);
  }
  return this;
}
