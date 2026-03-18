/*
 * XREFs of Feature_Bugfix_58554964__private_IsEnabledDeviceUsageNoInline @ 0x1401B756C
 * Callers:
 *     NtUserGetKeyboardInputThreadId @ 0x1401BAD90 (NtUserGetKeyboardInputThreadId.c)
 * Callees:
 *     Feature_Bugfix_58554964__private_IsEnabledFallback @ 0x1401B75A4 (Feature_Bugfix_58554964__private_IsEnabledFallback.c)
 */

__int64 Feature_Bugfix_58554964__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Bugfix_58554964__private_featureState & 0x10) != 0 )
    return Feature_Bugfix_58554964__private_featureState & 1;
  else
    return Feature_Bugfix_58554964__private_IsEnabledFallback(
             (unsigned int)Feature_Bugfix_58554964__private_featureState,
             3LL);
}
