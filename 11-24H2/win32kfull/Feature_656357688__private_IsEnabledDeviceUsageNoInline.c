/*
 * XREFs of Feature_656357688__private_IsEnabledDeviceUsageNoInline @ 0x140292480
 * Callers:
 *     NtUserSetWindowsHookAW @ 0x14029F6E0 (NtUserSetWindowsHookAW.c)
 *     NtUserSetWindowsHookEx @ 0x14029F7A0 (NtUserSetWindowsHookEx.c)
 * Callees:
 *     Feature_656357688__private_IsEnabledFallback @ 0x1402924B8 (Feature_656357688__private_IsEnabledFallback.c)
 */

__int64 Feature_656357688__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_656357688__private_featureState & 0x10) != 0 )
    return Feature_656357688__private_featureState & 1;
  else
    return Feature_656357688__private_IsEnabledFallback((unsigned int)Feature_656357688__private_featureState, 3LL);
}
