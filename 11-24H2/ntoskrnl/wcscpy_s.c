/*
 * XREFs of wcscpy_s @ 0x1405020A0
 * Callers:
 *     HalpQueryProfileSourceList @ 0x140371748 (HalpQueryProfileSourceList.c)
 *     HalSetEnvironmentVariableEx @ 0x1404395E0 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140439830 (HalGetEnvironmentVariableEx.c)
 *     PnprGetPluginDriverImagePath @ 0x14072D5C8 (PnprGetPluginDriverImagePath.c)
 *     ExpWatchLicenseInfoWork @ 0x1407B7800 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1407BB954 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1407BBD5C (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407BBE54 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1407BC01C (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1407BC358 (ExpParseArcPathName.c)
 *     CmDeleteKeyRecursive @ 0x1407D2908 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407D3D50 (CmpCreateHwProfileFriendlyName.c)
 *     AslPathToNetworkPathNt @ 0x14080A554 (AslPathToNetworkPathNt.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140812F0C (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiCreateFileDeviceElement @ 0x1408139E0 (BiCreateFileDeviceElement.c)
 *     LocalConvertAclToString @ 0x140864F2C (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408673C8 (LocalConvertSDToStringSD_Rev1.c)
 *     RtlConvertSidToUnicodeString @ 0x140869960 (RtlConvertSidToUnicodeString.c)
 *     NtLockProductActivationKeys @ 0x140A32230 (NtLockProductActivationKeys.c)
 *     LocalGetStringForControl @ 0x140A3A444 (LocalGetStringForControl.c)
 *     BcdGetSystemStorePath @ 0x140A57798 (BcdGetSystemStorePath.c)
 *     ExpTranslateEfiPath @ 0x140A5C19C (ExpTranslateEfiPath.c)
 *     ExpCreateOutputNT @ 0x140A5C754 (ExpCreateOutputNT.c)
 *     LocalGetStringForSid @ 0x140A66038 (LocalGetStringForSid.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A94D38 (BiConvertNtDeviceToBootEnvironment.c)
 *     HalpQueryDebuggerInformation @ 0x140B77B70 (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x140B77C94 (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x140BAFD70 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140C4381C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( Src )
    {
      v5 = (char *)Dst - (char *)Src;
      while ( 1 )
      {
        v6 = *Src;
        *(const wchar_t *)((char *)Src + v5) = *Src;
        ++Src;
        if ( !v6 )
          return 0;
        if ( !--SizeInWords )
        {
          v4 = 34;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v4 = 22;
LABEL_9:
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
