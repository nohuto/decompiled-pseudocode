/*
 * XREFs of Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x1405E2D38
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x1404EC6F0 (SepVerifyDesktopAppxImage.c)
 *     MiInitializeCreateSectionPacket @ 0x14098B630 (MiInitializeCreateSectionPacket.c)
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x14098DCCC (MiValidateExistingImage.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 *     MmCreateSpecialImageSection @ 0x140AE8400 (MmCreateSpecialImageSection.c)
 * Callees:
 *     Feature_TrustedLaunchHosts__private_IsEnabledFallback @ 0x1405E2D70 (Feature_TrustedLaunchHosts__private_IsEnabledFallback.c)
 */

__int64 Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TrustedLaunchHosts__private_featureState & 0x10) != 0 )
    return Feature_TrustedLaunchHosts__private_featureState & 1;
  else
    return Feature_TrustedLaunchHosts__private_IsEnabledFallback(
             (unsigned int)Feature_TrustedLaunchHosts__private_featureState,
             3LL);
}
