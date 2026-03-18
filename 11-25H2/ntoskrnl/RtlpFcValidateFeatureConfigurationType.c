/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x1404C1BC0
 * Callers:
 *     RtlQueryAllFeatureConfigurations @ 0x140772A40 (RtlQueryAllFeatureConfigurations.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140AC8970 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
