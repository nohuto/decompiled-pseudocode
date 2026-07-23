/*
 * XREFs of Feature_692318521__private_IsEnabledDeviceUsageNoInline @ 0x14065C550
 * Callers:
 *     WheapLogInitEvent @ 0x1407C8808 (WheapLogInitEvent.c)
 * Callees:
 *     Feature_692318521__private_IsEnabledFallback @ 0x14065C588 (Feature_692318521__private_IsEnabledFallback.c)
 */

__int64 Feature_692318521__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_692318521__private_featureState & 0x10) != 0 )
    return Feature_692318521__private_featureState & 1;
  else
    return Feature_692318521__private_IsEnabledFallback((unsigned int)Feature_692318521__private_featureState, 3LL);
}
