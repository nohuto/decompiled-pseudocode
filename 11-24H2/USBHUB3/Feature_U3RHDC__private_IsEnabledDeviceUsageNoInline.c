/*
 * XREFs of Feature_U3RHDC__private_IsEnabledDeviceUsageNoInline @ 0x14000C95C
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007B820 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     Feature_U3RHDC__private_IsEnabledFallback @ 0x14000C994 (Feature_U3RHDC__private_IsEnabledFallback.c)
 */

__int64 Feature_U3RHDC__private_IsEnabledDeviceUsageNoInline()
{
  if ( ((__int64)WPP_MAIN_CB.SecurityDescriptor & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.SecurityDescriptor & 1;
  else
    return Feature_U3RHDC__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.SecurityDescriptor), 3LL);
}
