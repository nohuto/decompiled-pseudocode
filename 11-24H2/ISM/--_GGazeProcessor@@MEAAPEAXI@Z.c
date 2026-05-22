/*
 * XREFs of ??_GGazeProcessor@@MEAAPEAXI@Z @ 0x1801B8230
 * Callers:
 *     ??_EGazeProcessor@@OCI@EAAPEAXI@Z @ 0x1801B8220 (--_EGazeProcessor@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1GazeProcessor@@MEAA@XZ @ 0x1801B80BC (--1GazeProcessor@@MEAA@XZ.c)
 */

GazeProcessor *__fastcall GazeProcessor::`scalar deleting destructor'(GazeProcessor *this, char a2)
{
  GazeProcessor::~GazeProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x170);
    else
      free(this);
  }
  return this;
}
