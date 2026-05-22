/*
 * XREFs of ??_ELampArrayDevice@@UEAAPEAXI@Z @ 0x1800E4C70
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1LampArrayDevice@@UEAA@XZ @ 0x1800E4B24 (--1LampArrayDevice@@UEAA@XZ.c)
 */

LampArrayDevice *__fastcall LampArrayDevice::`vector deleting destructor'(LampArrayDevice *this, char a2)
{
  LampArrayDevice::~LampArrayDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xE8);
    else
      free(this);
  }
  return this;
}
