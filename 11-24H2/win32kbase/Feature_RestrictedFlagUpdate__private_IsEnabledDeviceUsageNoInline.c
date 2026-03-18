/*
 * XREFs of Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401A922C
 * Callers:
 *     ValidateHandleSecure @ 0x140099530 (ValidateHandleSecure.c)
 *     ValidateHwndEx @ 0x1400B7530 (ValidateHwndEx.c)
 *     Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401A9B8C (Win32JobObject--_anonymous_namespace_--ConfigureProcessRestrictions.c)
 * Callees:
 *     Feature_RestrictedFlagUpdate__private_IsEnabledFallback @ 0x1401A9264 (Feature_RestrictedFlagUpdate__private_IsEnabledFallback.c)
 */

__int64 Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RestrictedFlagUpdate__private_featureState & 0x10) != 0 )
    return Feature_RestrictedFlagUpdate__private_featureState & 1;
  else
    return Feature_RestrictedFlagUpdate__private_IsEnabledFallback(
             (unsigned int)Feature_RestrictedFlagUpdate__private_featureState,
             3LL);
}
