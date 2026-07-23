/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x1404BB750
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1406F7B64 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlQueryAllFeatureConfigurations @ 0x140781BC0 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
