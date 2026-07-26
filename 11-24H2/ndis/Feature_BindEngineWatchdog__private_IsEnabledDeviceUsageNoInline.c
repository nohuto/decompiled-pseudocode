/*
 * XREFs of Feature_BindEngineWatchdog__private_IsEnabledDeviceUsageNoInline @ 0x1400C64A8
 * Callers:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 * Callees:
 *     Feature_BindEngineWatchdog__private_IsEnabledFallback @ 0x1400C64E0 (Feature_BindEngineWatchdog__private_IsEnabledFallback.c)
 */

__int64 Feature_BindEngineWatchdog__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_BindEngineWatchdog__private_featureState & 0x10) != 0 )
    return Feature_BindEngineWatchdog__private_featureState & 1;
  else
    return Feature_BindEngineWatchdog__private_IsEnabledFallback(
             (unsigned int)Feature_BindEngineWatchdog__private_featureState,
             3LL);
}
