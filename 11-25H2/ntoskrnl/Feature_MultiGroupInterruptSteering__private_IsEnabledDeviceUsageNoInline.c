/*
 * XREFs of Feature_MultiGroupInterruptSteering__private_IsEnabledDeviceUsageNoInline @ 0x1405BFFE0
 * Callers:
 *     KeIntSteerSnapPerf @ 0x1403AF950 (KeIntSteerSnapPerf.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140C18EEC (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     Feature_MultiGroupInterruptSteering__private_IsEnabledFallback @ 0x1405C0018 (Feature_MultiGroupInterruptSteering__private_IsEnabledFallback.c)
 */

__int64 Feature_MultiGroupInterruptSteering__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MultiGroupInterruptSteering__private_featureState & 0x10) != 0 )
    return Feature_MultiGroupInterruptSteering__private_featureState & 1;
  else
    return Feature_MultiGroupInterruptSteering__private_IsEnabledFallback(
             (unsigned int)Feature_MultiGroupInterruptSteering__private_featureState,
             3LL);
}
