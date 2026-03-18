/*
 * XREFs of Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledDeviceUsageNoInline @ 0x140092318
 * Callers:
 *     ?GetBasicDisplayParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x140280A70 (-GetBasicDisplayParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayPa.c)
 * Callees:
 *     Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledFallback @ 0x140092350 (Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledFallback.c)
 */

__int64 Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixDisplayIDMonitorSizeCalculation__private_featureState & 0x10) != 0 )
    return Feature_FixDisplayIDMonitorSizeCalculation__private_featureState & 1;
  else
    return Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledFallback(
             (unsigned int)Feature_FixDisplayIDMonitorSizeCalculation__private_featureState,
             3LL);
}
