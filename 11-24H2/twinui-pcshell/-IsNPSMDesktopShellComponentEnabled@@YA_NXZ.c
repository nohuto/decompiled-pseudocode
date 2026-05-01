/*
 * XREFs of ?IsNPSMDesktopShellComponentEnabled@@YA_NXZ @ 0x1803EC380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsNPSMDesktopShellComponentEnabled(void)
{
  return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_1807A1C60);
}
