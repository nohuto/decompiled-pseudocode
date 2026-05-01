/*
 * XREFs of ?IsTaskGroupsComponentEnabled@@YA_NXZ @ 0x1803EC3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsTaskGroupsComponentEnabled(void)
{
  return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_1807A1D90);
}
