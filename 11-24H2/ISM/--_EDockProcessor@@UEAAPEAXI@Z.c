/*
 * XREFs of ??_EDockProcessor@@UEAAPEAXI@Z @ 0x1801B7BE0
 * Callers:
 *     ??_EDockProcessor@@WBA@EAAPEAXI@Z @ 0x1801B7BD0 (--_EDockProcessor@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DockProcessor@@UEAA@XZ @ 0x1801B7B70 (--1DockProcessor@@UEAA@XZ.c)
 */

DockProcessor *__fastcall DockProcessor::`vector deleting destructor'(DockProcessor *this, char a2)
{
  DockProcessor::~DockProcessor(this);
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
