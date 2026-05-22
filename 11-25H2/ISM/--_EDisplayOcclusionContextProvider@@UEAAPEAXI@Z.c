/*
 * XREFs of ??_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z @ 0x18019A5E0
 * Callers:
 *     ??_EDisplayOcclusionContextProvider@@W7EAAPEAXI@Z @ 0x18019A5D0 (--_EDisplayOcclusionContextProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DisplayOcclusionContextProvider@@UEAA@XZ @ 0x18019A560 (--1DisplayOcclusionContextProvider@@UEAA@XZ.c)
 */

DisplayOcclusionContextProvider *__fastcall DisplayOcclusionContextProvider::`vector deleting destructor'(
        DisplayOcclusionContextProvider *this,
        char a2)
{
  DisplayOcclusionContextProvider::~DisplayOcclusionContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x70);
    else
      free(this);
  }
  return this;
}
