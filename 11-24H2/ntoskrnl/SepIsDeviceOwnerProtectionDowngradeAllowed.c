/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x140608F38
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14078FD1C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}
