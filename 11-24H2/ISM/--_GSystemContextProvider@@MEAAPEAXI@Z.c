/*
 * XREFs of ??_GSystemContextProvider@@MEAAPEAXI@Z @ 0x18010AAC0
 * Callers:
 *     ??_ESystemContextProvider@@O7EAAPEAXI@Z @ 0x18010AAB0 (--_ESystemContextProvider@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1SystemContextProvider@@MEAA@XZ @ 0x18010AA58 (--1SystemContextProvider@@MEAA@XZ.c)
 */

SystemContextProvider *__fastcall SystemContextProvider::`scalar deleting destructor'(
        SystemContextProvider *this,
        char a2)
{
  SystemContextProvider::~SystemContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x58);
    else
      free(this);
  }
  return this;
}
