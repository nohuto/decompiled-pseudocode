/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x1404C0220
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1406F9F24 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlQueryAllFeatureConfigurations @ 0x140781C90 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
