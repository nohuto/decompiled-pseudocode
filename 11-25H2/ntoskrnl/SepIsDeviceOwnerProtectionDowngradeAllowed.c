/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x1405FCAA8
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x140780A5C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}
