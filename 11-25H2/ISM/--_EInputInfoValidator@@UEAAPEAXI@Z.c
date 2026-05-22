/*
 * XREFs of ??_EInputInfoValidator@@UEAAPEAXI@Z @ 0x180194D90
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1InputInfoValidator@@UEAA@XZ @ 0x180194D58 (--1InputInfoValidator@@UEAA@XZ.c)
 */

InputInfoValidator *__fastcall InputInfoValidator::`vector deleting destructor'(InputInfoValidator *this, char a2)
{
  InputInfoValidator::~InputInfoValidator(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x50);
    else
      free(this);
  }
  return this;
}
