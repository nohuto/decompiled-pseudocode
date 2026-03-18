/*
 * XREFs of wcscpy_s @ 0x1405047E0
 * Callers:
 *     HalpQueryProfileSourceList @ 0x1403B53B8 (HalpQueryProfileSourceList.c)
 *     HalSetEnvironmentVariableEx @ 0x140443B40 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140443D90 (HalGetEnvironmentVariableEx.c)
 *     PnprGetPluginDriverImagePath @ 0x14072F5B8 (PnprGetPluginDriverImagePath.c)
 *     ExpWatchLicenseInfoWork @ 0x1407B73B0 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1407BB504 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1407BB90C (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407BBA04 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1407BBBCC (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1407BBF08 (ExpParseArcPathName.c)
 *     CmDeleteKeyRecursive @ 0x1407D2418 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407D3860 (CmpCreateHwProfileFriendlyName.c)
 *     AslPathToNetworkPathNt @ 0x140809E14 (AslPathToNetworkPathNt.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1408127CC (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiCreateFileDeviceElement @ 0x1408132A0 (BiCreateFileDeviceElement.c)
 *     BcdGetSystemStorePath @ 0x14085F5F8 (BcdGetSystemStorePath.c)
 *     LocalConvertAclToString @ 0x140860920 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140862DB8 (LocalConvertSDToStringSD_Rev1.c)
 *     RtlConvertSidToUnicodeString @ 0x140865350 (RtlConvertSidToUnicodeString.c)
 *     NtLockProductActivationKeys @ 0x140A3C920 (NtLockProductActivationKeys.c)
 *     LocalGetStringForControl @ 0x140A44BB4 (LocalGetStringForControl.c)
 *     ExpTranslateEfiPath @ 0x140A6389C (ExpTranslateEfiPath.c)
 *     ExpCreateOutputNT @ 0x140A63E54 (ExpCreateOutputNT.c)
 *     LocalGetStringForSid @ 0x140A6C7F0 (LocalGetStringForSid.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A9857C (BiConvertNtDeviceToBootEnvironment.c)
 *     HalpQueryDebuggerInformation @ 0x140B75B70 (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x140B75C94 (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x140BADD70 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140C416CC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140493990 (xHalTimerWatchdogStop.c)
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
