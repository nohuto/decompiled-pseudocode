/*
 * XREFs of ??_EInputConfigContextProvider@@EEAAPEAXI@Z @ 0x18010A460
 * Callers:
 *     ??_EInputConfigContextProvider@@G7EAAPEAXI@Z @ 0x18010A450 (--_EInputConfigContextProvider@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1InputConfigContextProvider@@EEAA@XZ @ 0x18010A3C8 (--1InputConfigContextProvider@@EEAA@XZ.c)
 */

InputConfigContextProvider *__fastcall InputConfigContextProvider::`vector deleting destructor'(
        InputConfigContextProvider *this,
        char a2)
{
  InputConfigContextProvider::~InputConfigContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x118);
    else
      free(this);
  }
  return this;
}
