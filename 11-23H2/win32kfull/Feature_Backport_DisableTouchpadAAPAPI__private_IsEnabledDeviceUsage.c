/*
 * XREFs of Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledDeviceUsage @ 0x1C013BCDC
 * Callers:
 *     NtUserSetMaxTouchpadSensitivity @ 0x1C013BE40 (NtUserSetMaxTouchpadSensitivity.c)
 * Callees:
 *     Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledFallback @ 0x1C013BD14 (Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledFallback.c)
 */

__int64 Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Backport_DisableTouchpadAAPAPI__private_featureState & 0x10) != 0 )
    return Feature_Backport_DisableTouchpadAAPAPI__private_featureState & 1;
  else
    return Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledFallback(
             (unsigned int)Feature_Backport_DisableTouchpadAAPAPI__private_featureState,
             3LL);
}
