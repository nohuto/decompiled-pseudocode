/*
 * XREFs of KiInitializeAntiStarvationPolicies @ 0x1405B43A4
 * Callers:
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     Feature_AntiStarvationReadyPeriodVariable__private_GetVariant @ 0x1405B1EEC (Feature_AntiStarvationReadyPeriodVariable__private_GetVariant.c)
 *     Feature_AntiStarvationReadyPeriodVariable__private_IsEnabledDeviceUsageNoInline @ 0x1405B1F2C (Feature_AntiStarvationReadyPeriodVariable__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AntiStarvationScanPeriodVariable__private_GetVariant @ 0x1405B1F80 (Feature_AntiStarvationScanPeriodVariable__private_GetVariant.c)
 *     Feature_AntiStarvationScanPeriodVariable__private_IsEnabledDeviceUsageNoInline @ 0x1405B1FC0 (Feature_AntiStarvationScanPeriodVariable__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AntiStarvationThreadBoostCountVariable__private_GetVariant @ 0x1405B2014 (Feature_AntiStarvationThreadBoostCountVariable__private_GetVariant.c)
 *     Feature_AntiStarvationThreadBoostCountVariable__private_IsEnabledDeviceUsageNoInline @ 0x1405B2054 (Feature_AntiStarvationThreadBoostCountVariable__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AntiStarvationThreadScanCountVariable__private_GetVariant @ 0x1405B20A8 (Feature_AntiStarvationThreadScanCountVariable__private_GetVariant.c)
 *     Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledDeviceUsageNoInline @ 0x1405B20E8 (Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 KiInitializeAntiStarvationPolicies()
{
  int v0; // eax
  int v1; // eax
  __int64 result; // rax

  if ( (unsigned int)Feature_AntiStarvationScanPeriodVariable__private_IsEnabledDeviceUsageNoInline() )
  {
    v0 = Feature_AntiStarvationScanPeriodVariable__private_GetVariant() - 1;
    if ( v0 )
    {
      if ( v0 == 1 )
        KiPriorityBoostScanLatencyTicks = (unsigned int)KiPriorityBoostScanLatencyTicks >> 2;
    }
    else
    {
      KiPriorityBoostScanLatencyTicks = (unsigned int)KiPriorityBoostScanLatencyTicks >> 1;
    }
  }
  if ( (unsigned int)Feature_AntiStarvationReadyPeriodVariable__private_IsEnabledDeviceUsageNoInline() )
  {
    v1 = Feature_AntiStarvationReadyPeriodVariable__private_GetVariant() - 1;
    if ( v1 )
    {
      if ( v1 == 1 )
        KiPriorityBoostReadyTimeTicks = (unsigned int)KiPriorityBoostReadyTimeTicks >> 2;
    }
    else
    {
      KiPriorityBoostReadyTimeTicks = (unsigned int)KiPriorityBoostReadyTimeTicks >> 1;
    }
  }
  if ( (unsigned int)Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledDeviceUsageNoInline()
    && (unsigned int)Feature_AntiStarvationThreadScanCountVariable__private_GetVariant() == 1 )
  {
    KiPriorityBoostMaximumThreadScanCount *= 2;
  }
  result = Feature_AntiStarvationThreadBoostCountVariable__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    result = Feature_AntiStarvationThreadBoostCountVariable__private_GetVariant();
    if ( (_DWORD)result == 1 )
    {
      result = (unsigned int)(2 * KiPriorityBoostMaximumThreadReadyCount);
      KiPriorityBoostMaximumThreadReadyCount *= 2;
    }
  }
  return result;
}
