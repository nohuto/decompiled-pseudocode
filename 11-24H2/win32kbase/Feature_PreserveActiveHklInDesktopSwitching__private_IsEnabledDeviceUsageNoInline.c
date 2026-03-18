/*
 * XREFs of Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline @ 0x14020FBE8
 * Callers:
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x14020F940 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     CleanupKeyboardLayouts @ 0x14020FB14 (CleanupKeyboardLayouts.c)
 * Callees:
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledFallback @ 0x14020FC20 (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledFallback.c)
 */

__int64 Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PreserveActiveHklInDesktopSwitching__private_featureState & 0x10) != 0 )
    return Feature_PreserveActiveHklInDesktopSwitching__private_featureState & 1;
  else
    return Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledFallback(
             (unsigned int)Feature_PreserveActiveHklInDesktopSwitching__private_featureState,
             3LL);
}
