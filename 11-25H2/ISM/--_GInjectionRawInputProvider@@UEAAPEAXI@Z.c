/*
 * XREFs of ??_GInjectionRawInputProvider@@UEAAPEAXI@Z @ 0x1800DEE60
 * Callers:
 *     ??_EInjectionRawInputProvider@@W7EAAPEAXI@Z @ 0x1800DEE50 (--_EInjectionRawInputProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1InjectionRawInputProvider@@UEAA@XZ @ 0x1800DEDE8 (--1InjectionRawInputProvider@@UEAA@XZ.c)
 */

InjectionRawInputProvider *__fastcall InjectionRawInputProvider::`scalar deleting destructor'(
        InjectionRawInputProvider *this,
        char a2)
{
  InjectionRawInputProvider::~InjectionRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xA8);
    else
      free(this);
  }
  return this;
}
