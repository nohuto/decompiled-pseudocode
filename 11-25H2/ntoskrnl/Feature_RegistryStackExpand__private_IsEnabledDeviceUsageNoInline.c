/*
 * XREFs of Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x14065BF30
 * Callers:
 *     NtCreateKey @ 0x140AD2A50 (NtCreateKey.c)
 *     NtCreateKeyTransacted @ 0x140AD2B50 (NtCreateKeyTransacted.c)
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 *     NtOpenKey @ 0x140AD33A0 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x140AD3490 (NtOpenKeyEx.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 * Callees:
 *     Feature_RegistryStackExpand__private_IsEnabledFallback @ 0x14065BF68 (Feature_RegistryStackExpand__private_IsEnabledFallback.c)
 */

__int64 Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RegistryStackExpand__private_featureState & 0x10) != 0 )
    return Feature_RegistryStackExpand__private_featureState & 1;
  else
    return Feature_RegistryStackExpand__private_IsEnabledFallback(
             (unsigned int)Feature_RegistryStackExpand__private_featureState,
             3LL);
}
