/*
 * XREFs of ??_GLampArrayRawInputProvider@@EEAAPEAXI@Z @ 0x1800E341C
 * Callers:
 *     ??_ELampArrayRawInputProvider@@GBI@EAAPEAXI@Z @ 0x1800E3320 (--_ELampArrayRawInputProvider@@GBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E2FB0 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 */

LampArrayRawInputProvider *__fastcall LampArrayRawInputProvider::`scalar deleting destructor'(
        LampArrayRawInputProvider *this,
        char a2)
{
  LampArrayRawInputProvider::~LampArrayRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x180);
    else
      free(this);
  }
  return this;
}
