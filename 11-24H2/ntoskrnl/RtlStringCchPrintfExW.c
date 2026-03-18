/*
 * XREFs of RtlStringCchPrintfExW @ 0x140424CB0
 * Callers:
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140424BD0 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1405D54B4 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140719F50 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14071A024 (PipHardwareConfigClearStartOverrides.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071D300 (IoReportRootDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x14073136C (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x140733190 (IopCreateLegacyDeviceIds.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x14081D55C (_CmGetDevicePanelRegKeyPath.c)
 *     DrvDbCreateDatabaseNode @ 0x140823A00 (DrvDbCreateDatabaseNode.c)
 *     _PnpStringFromGuid @ 0x1408B754C (_PnpStringFromGuid.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1408B7A4C (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C6A30 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C7EF0 (_PnpGetGenericStoreProperty.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1408CA010 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408CA360 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CD660 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegKeyPath @ 0x140909220 (_CmGetDeviceRegKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1409095F0 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x140909918 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceControlKeyPath @ 0x1409099D0 (_CmGetDeviceControlKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x140909A88 (_CmGetDeviceHardwareKeyPath.c)
 *     _PnpDeletePropertyWorker @ 0x140991470 (_PnpDeletePropertyWorker.c)
 *     _PnpSetPropertyWorker @ 0x14099197C (_PnpSetPropertyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x1409937F0 (_PnpOpenPropertiesKey.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x140993E1C (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1409944D8 (_PnpGetGenericStorePropertyLocales.c)
 *     PiFindDevInstMatch @ 0x1409C9A9C (PiFindDevInstMatch.c)
 *     PiProcessDriverInstance @ 0x1409C9F40 (PiProcessDriverInstance.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1409D4C30 (PiDmObjectGetCachedCmProperty.c)
 *     PipMakeGloballyUniqueId @ 0x140A582C0 (PipMakeGloballyUniqueId.c)
 *     RtlFormatMessageEx @ 0x140A6F178 (RtlFormatMessageEx.c)
 *     PiRearrangeDeviceInstances @ 0x140A708CC (PiRearrangeDeviceInstances.c)
 *     PnpDriverLoadingFailed @ 0x140AA1408 (PnpDriverLoadingFailed.c)
 *     _CmBuildDevicePanelId @ 0x140AAC200 (_CmBuildDevicePanelId.c)
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     PipInitComputerIds @ 0x140C63B74 (PipInitComputerIds.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x14041DE80 (StringExHandleOtherFlagsW.c)
 *     _vsnwprintf @ 0x1404FD260 (_vsnwprintf.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1405A3F94 (RtlStringExHandleFillBehindNullW.c)
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
