/*
 * XREFs of Feature_PLDRFixes__private_IsEnabledDeviceUsageNoInline @ 0x140019F80
 * Callers:
 *     NVMeControllerPreparePLDR @ 0x14001D3BC (NVMeControllerPreparePLDR.c)
 * Callees:
 *     Feature_PLDRFixes__private_IsEnabledFallback @ 0x140019FB8 (Feature_PLDRFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_PLDRFixes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PLDRFixes__private_featureState & 0x10) != 0 )
    return Feature_PLDRFixes__private_featureState & 1;
  else
    return Feature_PLDRFixes__private_IsEnabledFallback((unsigned int)Feature_PLDRFixes__private_featureState, 3LL);
}
