/*
 * XREFs of ??_EDockProcessor@@UEAAPEAXI@Z @ 0x1801B0650
 * Callers:
 *     ??_EDockProcessor@@WBA@EAAPEAXI@Z @ 0x1801B0640 (--_EDockProcessor@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DockProcessor@@UEAA@XZ @ 0x1801B05E0 (--1DockProcessor@@UEAA@XZ.c)
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
