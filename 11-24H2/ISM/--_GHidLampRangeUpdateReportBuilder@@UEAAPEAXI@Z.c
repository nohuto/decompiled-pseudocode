/*
 * XREFs of ??_GHidLampRangeUpdateReportBuilder@@UEAAPEAXI@Z @ 0x180035450
 * Callers:
 *     <none>
 * Callees:
 *     ??1HidLampRangeUpdateReportBuilder@@UEAA@XZ @ 0x1800354A0 (--1HidLampRangeUpdateReportBuilder@@UEAA@XZ.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

HidLampRangeUpdateReportBuilder *__fastcall HidLampRangeUpdateReportBuilder::`scalar deleting destructor'(
        HidLampRangeUpdateReportBuilder *this,
        char a2)
{
  HidLampRangeUpdateReportBuilder::~HidLampRangeUpdateReportBuilder(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x30);
    else
      free(this);
  }
  return this;
}
