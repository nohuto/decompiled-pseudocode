/*
 * XREFs of ??_EInputRedirectionProcessor@@UEAAPEAXI@Z @ 0x1801AF730
 * Callers:
 *     ??_EInputRedirectionProcessor@@WBI@EAAPEAXI@Z @ 0x1801AF720 (--_EInputRedirectionProcessor@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1InputRedirectionProcessor@@UEAA@XZ @ 0x1801AF6B0 (--1InputRedirectionProcessor@@UEAA@XZ.c)
 */

InputRedirectionProcessor *__fastcall InputRedirectionProcessor::`vector deleting destructor'(
        InputRedirectionProcessor *this,
        char a2)
{
  InputRedirectionProcessor::~InputRedirectionProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x68);
    else
      free(this);
  }
  return this;
}
