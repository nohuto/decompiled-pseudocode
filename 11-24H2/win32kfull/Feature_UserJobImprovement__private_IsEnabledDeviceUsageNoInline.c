/*
 * XREFs of Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1402808EC
 * Callers:
 *     PrepareForLogoff @ 0x14020FBCC (PrepareForLogoff.c)
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14023843C (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EditionCreateDesktopEntryPoint @ 0x1402406E0 (EditionCreateDesktopEntryPoint.c)
 *     NtUserAutoRotateScreen @ 0x1402408F0 (NtUserAutoRotateScreen.c)
 *     NtUserGetClipboardData @ 0x1402418A0 (NtUserGetClipboardData.c)
 *     NtUserGetDCEx @ 0x140242280 (NtUserGetDCEx.c)
 *     NtUserSetClipboardData @ 0x1402459F0 (NtUserSetClipboardData.c)
 *     NtUserSwitchDesktop @ 0x140247830 (NtUserSwitchDesktop.c)
 *     NtUserUserHandleGrantAccess @ 0x140247B90 (NtUserUserHandleGrantAccess.c)
 * Callees:
 *     Feature_UserJobImprovement__private_IsEnabledFallback @ 0x140280924 (Feature_UserJobImprovement__private_IsEnabledFallback.c)
 */

__int64 Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UserJobImprovement__private_featureState & 0x10) != 0 )
    return Feature_UserJobImprovement__private_featureState & 1;
  else
    return Feature_UserJobImprovement__private_IsEnabledFallback(
             (unsigned int)Feature_UserJobImprovement__private_featureState,
             3LL);
}
