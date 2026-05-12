/*
 * XREFs of Feature_SteelixLbaSizeFix__private_IsEnabledDeviceUsageNoInline @ 0x140090490
 * Callers:
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 * Callees:
 *     Feature_SteelixLbaSizeFix__private_IsEnabledFallback @ 0x1400904C8 (Feature_SteelixLbaSizeFix__private_IsEnabledFallback.c)
 */

__int64 Feature_SteelixLbaSizeFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SteelixLbaSizeFix__private_featureState & 0x10) != 0 )
    return Feature_SteelixLbaSizeFix__private_featureState & 1;
  else
    return Feature_SteelixLbaSizeFix__private_IsEnabledFallback(
             (unsigned int)Feature_SteelixLbaSizeFix__private_featureState,
             3LL);
}
