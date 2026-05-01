/*
 * XREFs of ?IsWirelessAppDiscoverabilityEnabled@@YA_NXZ @ 0x1803EC420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsWirelessAppDiscoverabilityEnabled(void)
{
  return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_1807A1F50);
}
