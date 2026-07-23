/*
 * XREFs of Feature_3388731705__private_IsEnabledDeviceUsageNoInline @ 0x14065C4FC
 * Callers:
 *     WheapLogInitEvent @ 0x1407C8808 (WheapLogInitEvent.c)
 * Callees:
 *     Feature_3388731705__private_IsEnabledFallback @ 0x14065C534 (Feature_3388731705__private_IsEnabledFallback.c)
 */

__int64 Feature_3388731705__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3388731705__private_featureState & 0x10) != 0 )
    return Feature_3388731705__private_featureState & 1;
  else
    return Feature_3388731705__private_IsEnabledFallback((unsigned int)Feature_3388731705__private_featureState, 3LL);
}
