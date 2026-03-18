/*
 * XREFs of RtlStringCchPrintfExW @ 0x14042CC40
 * Callers:
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14042CB60 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1405D0B54 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14070DE50 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14070DF24 (PipHardwareConfigClearStartOverrides.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140711200 (IoReportRootDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140725150 (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x140726EF8 (IopCreateLegacyDeviceIds.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x14080D65C (_CmGetDevicePanelRegKeyPath.c)
 *     DrvDbCreateDatabaseNode @ 0x140813BD8 (DrvDbCreateDatabaseNode.c)
 *     _CmGetDeviceRegKeyPath @ 0x14083D4A0 (_CmGetDeviceRegKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x14083D860 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x14083DB88 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceControlKeyPath @ 0x14083DC40 (_CmGetDeviceControlKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x14083DCF8 (_CmGetDeviceHardwareKeyPath.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C8BA0 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C9F80 (_PnpGetGenericStoreProperty.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CAF60 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14094E664 (_PnpStringFromGuid.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14094FF80 (PiDmObjectGetCachedCmProperty.c)
 *     _PnpDeletePropertyWorker @ 0x1409502E0 (_PnpDeletePropertyWorker.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1409518B0 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _PnpOpenPropertiesKey @ 0x140953450 (_PnpOpenPropertiesKey.c)
 *     _PnpSetPropertyWorker @ 0x140953DFC (_PnpSetPropertyWorker.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140958F10 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140959250 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x14095B1CC (_CmGetDeviceContainerRegKeyPath.c)
 *     PiFindDevInstMatch @ 0x1409B1728 (PiFindDevInstMatch.c)
 *     PiProcessDriverInstance @ 0x1409B1BC0 (PiProcessDriverInstance.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140A4A0E4 (_PnpGetGenericStorePropertyLocales.c)
 *     PipMakeGloballyUniqueId @ 0x140A5491C (PipMakeGloballyUniqueId.c)
 *     RtlFormatMessageEx @ 0x140A6CF24 (RtlFormatMessageEx.c)
 *     PiRearrangeDeviceInstances @ 0x140A6E6CC (PiRearrangeDeviceInstances.c)
 *     PnpDriverLoadingFailed @ 0x140A9BB78 (PnpDriverLoadingFailed.c)
 *     _CmBuildDevicePanelId @ 0x140AA6C40 (_CmBuildDevicePanelId.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x140420C10 (StringExHandleOtherFlagsW.c)
 *     _vsnwprintf @ 0x1404FAAE0 (_vsnwprintf.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1405A0824 (RtlStringExHandleFillBehindNullW.c)
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
