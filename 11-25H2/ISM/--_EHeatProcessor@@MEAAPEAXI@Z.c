/*
 * XREFs of ??_EHeatProcessor@@MEAAPEAXI@Z @ 0x1801B1AB0
 * Callers:
 *     ??_EHeatProcessor@@OBI@EAAPEAXI@Z @ 0x1801B1AA0 (--_EHeatProcessor@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801B19B0 (--1HeatProcessor@@MEAA@XZ.c)
 */

HeatProcessor *__fastcall HeatProcessor::`vector deleting destructor'(
        HeatProcessor *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // di

  v4 = a2;
  HeatProcessor::~HeatProcessor(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x68);
    else
      free(this);
  }
  return this;
}
