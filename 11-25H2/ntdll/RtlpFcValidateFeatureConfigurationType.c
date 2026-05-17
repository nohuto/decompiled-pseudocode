/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x1800F9B94
 * Callers:
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18017360C (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x180173730 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
