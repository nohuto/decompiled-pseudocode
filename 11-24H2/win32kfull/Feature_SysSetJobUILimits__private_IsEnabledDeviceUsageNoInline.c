/*
 * XREFs of Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline @ 0x1402926CC
 * Callers:
 *     NtUserSetJobUILimits @ 0x14029DD50 (NtUserSetJobUILimits.c)
 * Callees:
 *     Feature_SysSetJobUILimits__private_IsEnabledFallback @ 0x140292704 (Feature_SysSetJobUILimits__private_IsEnabledFallback.c)
 */

__int64 Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SysSetJobUILimits__private_featureState & 0x10) != 0 )
    return Feature_SysSetJobUILimits__private_featureState & 1;
  else
    return Feature_SysSetJobUILimits__private_IsEnabledFallback(
             (unsigned int)Feature_SysSetJobUILimits__private_featureState,
             3LL);
}
