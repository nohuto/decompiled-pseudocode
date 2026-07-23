/*
 * XREFs of RtlStringCbCopyW @ 0x140425B00
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x14042492C (RtlpAllowsLowBoxAccess.c)
 *     SeSetLearningModeObjectInformation @ 0x1404B6F50 (SeSetLearningModeObjectInformation.c)
 *     PopIdleWakeNotifyWakeSource @ 0x1405D7FC4 (PopIdleWakeNotifyWakeSource.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1405EB0CC (RtlpGetNameFromLangInfoNode.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140725510 (PiDcResetChildDeviceContainerCallback.c)
 *     PfSnParametersRead @ 0x140745FC0 (PfSnParametersRead.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x140782428 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     SepRmFetchGlobalSacl @ 0x1407946EC (SepRmFetchGlobalSacl.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x1407A0A84 (PerfDiagpStartPerfDiagLogger.c)
 *     WmipAddMofResource @ 0x1407A59E8 (WmipAddMofResource.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407A5BA8 (WmipGenerateBinaryMofNotification.c)
 *     PiSwIrpInterfaceRegister @ 0x1408AFE78 (PiSwIrpInterfaceRegister.c)
 *     DbgkSendSystemDllMessages @ 0x1408F541C (DbgkSendSystemDllMessages.c)
 *     WmipIncludeStaticNames @ 0x1409B1C2C (WmipIncludeStaticNames.c)
 *     WmipInsertStaticNames @ 0x1409B3544 (WmipInsertStaticNames.c)
 *     PiSwFindSwDevice @ 0x1409BF560 (PiSwFindSwDevice.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EC964 (PiDcHandleCustomDeviceEvent.c)
 *     PiSwCompleteCreate @ 0x1409F0EA8 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     PipMakeGloballyUniqueId @ 0x140A4FA70 (PipMakeGloballyUniqueId.c)
 *     WmipEnumerateMofResources @ 0x140A75B00 (WmipEnumerateMofResources.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140A9DA78 (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpressionConvertToString @ 0x140AB9C18 (ExpressionConvertToString.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     MfgInitSystem @ 0x140C0DCB0 (MfgInitSystem.c)
 *     PfSnParametersSetDefaults @ 0x140C2ED7C (PfSnParametersSetDefaults.c)
 *     ViMakeVerifierSettings @ 0x140C3E5C8 (ViMakeVerifierSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  size_t v4; // r9
  NTSTATUS v5; // r11d
  signed __int64 v6; // r8
  wchar_t v7; // ax
  NTSTATUS result; // eax

  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v4 = 2147483646 - v3;
    v5 = 0;
    v6 = (char *)pszSrc - (char *)pszDest;
    while ( v4 + v3 )
    {
      v7 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v6);
      if ( !v7 )
      {
        if ( !v3 )
        {
LABEL_6:
          --pszDest;
          v5 = -2147483643;
          break;
        }
        break;
      }
      *pszDest++ = v7;
      if ( !--v3 )
        goto LABEL_6;
    }
    result = v5;
    goto LABEL_9;
  }
  result = -1073741811;
  if ( v3 )
LABEL_9:
    *pszDest = 0;
  return result;
}
