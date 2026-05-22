/*
 * XREFs of ??_ECallControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800D8D80
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1CallControlDeviceCollection@@UEAA@XZ @ 0x1800D8D4C (--1CallControlDeviceCollection@@UEAA@XZ.c)
 */

CallControlDeviceCollection *__fastcall CallControlDeviceCollection::`vector deleting destructor'(
        CallControlDeviceCollection *this,
        char a2)
{
  CallControlDeviceCollection::~CallControlDeviceCollection(this);
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
