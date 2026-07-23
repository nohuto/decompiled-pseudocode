/*
 * XREFs of RtlStringCchPrintfExW @ 0x140418B60
 * Callers:
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140418A80 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1405D2AC8 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140717AE0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140717BB4 (PipHardwareConfigClearStartOverrides.c)
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071AE90 (IoReportRootDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x14072F37C (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x1407310C4 (IopCreateLegacyDeviceIds.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x14081DC9C (_CmGetDevicePanelRegKeyPath.c)
 *     DrvDbCreateDatabaseNode @ 0x140824140 (DrvDbCreateDatabaseNode.c)
 *     _PnpStringFromGuid @ 0x1408B4EBC (_PnpStringFromGuid.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1408B53BC (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C4460 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C5920 (_PnpGetGenericStoreProperty.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1408C7A40 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408C7D90 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegKeyPath @ 0x1408E0940 (_CmGetDeviceRegKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1408E0D10 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1408E1038 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceControlKeyPath @ 0x1408E10F0 (_CmGetDeviceControlKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1408E11A8 (_CmGetDeviceHardwareKeyPath.c)
 *     _PnpDeletePropertyWorker @ 0x14097C4B0 (_PnpDeletePropertyWorker.c)
 *     _PnpSetPropertyWorker @ 0x14097C9BC (_PnpSetPropertyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x14097E830 (_PnpOpenPropertiesKey.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x14097EE5C (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14097F518 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmBuildDevicePanelId @ 0x140981E58 (_CmBuildDevicePanelId.c)
 *     PiProcessDriverInstance @ 0x1409B69D0 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x1409B6CA8 (PiFindDevInstMatch.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1409C4A60 (PiDmObjectGetCachedCmProperty.c)
 *     PipMakeGloballyUniqueId @ 0x140A4FA70 (PipMakeGloballyUniqueId.c)
 *     RtlFormatMessageEx @ 0x140A685FC (RtlFormatMessageEx.c)
 *     PiRearrangeDeviceInstances @ 0x140A69D5C (PiRearrangeDeviceInstances.c)
 *     PnpDriverLoadingFailed @ 0x140A9C798 (PnpDriverLoadingFailed.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     PipInitComputerIds @ 0x140C65CF0 (PipInitComputerIds.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x140412250 (StringExHandleOtherFlagsW.c)
 *     _vsnwprintf @ 0x1404FAB20 (_vsnwprintf.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1405A0ED4 (RtlStringExHandleFillBehindNullW.c)
 */

NTSTATUS RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  NTSTATUS v9; // edx
  const wchar_t *v10; // r8
  NTSTRSAFE_PWSTR v11; // rbp
  size_t v12; // rdi
  NTSTATUS v13; // esi
  size_t v14; // r14
  int v15; // eax
  NTSTATUS result; // eax
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-58h] BYREF
  size_t v18[2]; // [rsp+38h] [rbp-50h] BYREF
  va_list Args; // [rsp+C0h] [rbp+38h] BYREF

  va_start(Args, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 )
  {
    v10 = pszFormat;
    v11 = pszDest;
    v12 = cchDest;
    ppszDestEnda = pszDest;
    v18[0] = cchDest;
    if ( (dwFlags & 0x100) != 0 && !pszFormat )
      v10 = &SourceString;
    v13 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v13 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      v14 = cchDest - 1;
      v18[0] = 0LL;
      v15 = vsnwprintf(pszDest, cchDest - 1, v10, Args);
      if ( v15 >= 0 && v15 <= v14 )
      {
        if ( v15 == v14 )
        {
          v11 = &pszDest[v14];
          *v11 = 0;
          v12 = 1LL;
        }
        else
        {
          v12 = cchDest - v15;
          v11 = &pszDest[v15];
        }
        v13 = 0;
        if ( (dwFlags & 0x200) != 0 && v12 > 1 )
          RtlStringExHandleFillBehindNullW(v11, 2 * v12, dwFlags);
        goto LABEL_13;
      }
      v11 = &pszDest[v14];
      v12 = 1LL;
      *v11 = 0;
      v18[0] = 1LL;
      v13 = -2147483643;
      ppszDestEnda = v11;
    }
    else
    {
      if ( !*v10 )
      {
LABEL_13:
        if ( ppszDestEnd )
          *ppszDestEnd = v11;
        result = v13;
        if ( pcchRemaining )
          *pcchRemaining = v12;
        return result;
      }
      v13 = -2147483643;
      if ( !pszDest )
        v13 = -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)v10, &ppszDestEnda, v18, dwFlags);
      v11 = ppszDestEnda;
      v12 = v18[0];
    }
    if ( (int)(v13 + 0x80000000) >= 0 && v13 != -2147483643 )
      return v13;
    goto LABEL_13;
  }
  if ( cchDest )
    *pszDest = 0;
  return v9;
}
