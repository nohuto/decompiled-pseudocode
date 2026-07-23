/*
 * XREFs of RtlQueryFeatureConfigurationChangeStamp @ 0x1800F46F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

RTL_FEATURE_CHANGE_STAMP RtlQueryFeatureConfigurationChangeStamp(void)
{
  return MEMORY[0x7FFE0720];
}
