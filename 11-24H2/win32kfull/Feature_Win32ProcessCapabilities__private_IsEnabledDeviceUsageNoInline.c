/*
 * XREFs of Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14026E514
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     MagGetLensContextInformation @ 0x14022A370 (MagGetLensContextInformation.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14022FDC8 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxPrintWindow @ 0x14023A30C (xxxPrintWindow.c)
 *     EditionIsRIMInjectionBlocked @ 0x14023C1F0 (EditionIsRIMInjectionBlocked.c)
 *     NtUserPrintWindow @ 0x140244450 (NtUserPrintWindow.c)
 *     ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x140272DAC (-DoInputCheck@@YA-AW4InputCheckResult@@W4InputCheckRequest@@@Z.c)
 *     NtUserRegisterCoreMessagingEndPoint @ 0x14029AFA0 (NtUserRegisterCoreMessagingEndPoint.c)
 *     NtUserSetProcessWin32Capabilities @ 0x14029E3C0 (NtUserSetProcessWin32Capabilities.c)
 * Callees:
 *     Feature_Win32ProcessCapabilities__private_IsEnabledFallback @ 0x14026E54C (Feature_Win32ProcessCapabilities__private_IsEnabledFallback.c)
 */

__int64 Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Win32ProcessCapabilities__private_featureState & 0x10) != 0 )
    return Feature_Win32ProcessCapabilities__private_featureState & 1;
  else
    return Feature_Win32ProcessCapabilities__private_IsEnabledFallback(
             (unsigned int)Feature_Win32ProcessCapabilities__private_featureState,
             3LL);
}
