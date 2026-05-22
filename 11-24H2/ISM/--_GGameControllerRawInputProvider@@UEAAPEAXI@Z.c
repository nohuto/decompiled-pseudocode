/*
 * XREFs of ??_GGameControllerRawInputProvider@@UEAAPEAXI@Z @ 0x1800CD9D0
 * Callers:
 *     ??_EGameControllerRawInputProvider@@WCA@EAAPEAXI@Z @ 0x1800CD9C0 (--_EGameControllerRawInputProvider@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800CD814 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 */

GameControllerRawInputProvider *__fastcall GameControllerRawInputProvider::`scalar deleting destructor'(
        GameControllerRawInputProvider *this,
        char a2)
{
  GameControllerRawInputProvider::~GameControllerRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xB8);
    else
      free(this);
  }
  return this;
}
