/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x1406067AC
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14078FCEC (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}
