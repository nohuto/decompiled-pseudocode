/*
 * XREFs of ??_GPenHapticInterface@@UEAAPEAXI@Z @ 0x18018E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1PenHapticInterface@@UEAA@XZ @ 0x18018E91C (--1PenHapticInterface@@UEAA@XZ.c)
 */

PenHapticInterface *__fastcall PenHapticInterface::`scalar deleting destructor'(PenHapticInterface *this, char a2)
{
  PenHapticInterface::~PenHapticInterface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x110);
    else
      free(this);
  }
  return this;
}
