/*
 * XREFs of Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x1405E56E0
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140356A00 (SepVerifyDesktopAppxImage.c)
 *     MiInitializeCreateSectionPacket @ 0x1409413D0 (MiInitializeCreateSectionPacket.c)
 *     MiCreateNewSection @ 0x1409433C0 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x140943A54 (MiValidateExistingImage.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 *     MmCreateSpecialImageSection @ 0x140AE6B20 (MmCreateSpecialImageSection.c)
 * Callees:
 *     Feature_TrustedLaunchHosts__private_IsEnabledFallback @ 0x1405E5718 (Feature_TrustedLaunchHosts__private_IsEnabledFallback.c)
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
