/*
 * XREFs of ??_GInputRedirectionTarget@@MEAAPEAXI@Z @ 0x1801A87F0
 * Callers:
 *     ??_EInputRedirectionTarget@@OBA@EAAPEAXI@Z @ 0x1801A87E0 (--_EInputRedirectionTarget@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1InputRedirectionTarget@@MEAA@XZ @ 0x1801A8758 (--1InputRedirectionTarget@@MEAA@XZ.c)
 */

InputRedirectionTarget *__fastcall InputRedirectionTarget::`scalar deleting destructor'(
        InputRedirectionTarget *this,
        char a2)
{
  InputRedirectionTarget::~InputRedirectionTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x78);
    else
      free(this);
  }
  return this;
}
