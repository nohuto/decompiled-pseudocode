/*
 * XREFs of RtlStringCbCopyW @ 0x140433420
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x1404323F0 (RtlpAllowsLowBoxAccess.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BBE8C (SeSetLearningModeObjectInformation.c)
 *     PopIdleWakeNotifyWakeSource @ 0x1405DACA4 (PopIdleWakeNotifyWakeSource.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1405EDAE4 (RtlpGetNameFromLangInfoNode.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140727980 (PiDcResetChildDeviceContainerCallback.c)
 *     PfSnParametersRead @ 0x140747CD0 (PfSnParametersRead.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1407824F8 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     SepRmFetchGlobalSacl @ 0x1407945DC (SepRmFetchGlobalSacl.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x1407A0974 (PerfDiagpStartPerfDiagLogger.c)
 *     WmipAddMofResource @ 0x1407A58A8 (WmipAddMofResource.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407A5A68 (WmipGenerateBinaryMofNotification.c)
 *     PiSwIrpInterfaceRegister @ 0x1408B2584 (PiSwIrpInterfaceRegister.c)
 *     DbgkSendSystemDllMessages @ 0x140939F18 (DbgkSendSystemDllMessages.c)
 *     WmipIncludeStaticNames @ 0x1409CB50C (WmipIncludeStaticNames.c)
 *     WmipInsertStaticNames @ 0x1409CE570 (WmipInsertStaticNames.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EEF24 (PiDcHandleCustomDeviceEvent.c)
 *     PiSwCompleteCreate @ 0x1409F8538 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F8A64 (PiSwIrpStartCreateWorker.c)
 *     PiSwFindSwDevice @ 0x140A11150 (PiSwFindSwDevice.c)
 *     PipMakeGloballyUniqueId @ 0x140A582C0 (PipMakeGloballyUniqueId.c)
 *     WmipEnumerateMofResources @ 0x140A7B800 (WmipEnumerateMofResources.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140AA26E8 (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpressionConvertToString @ 0x140ABEBA8 (ExpressionConvertToString.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     MfgInitSystem @ 0x140C0BCB0 (MfgInitSystem.c)
 *     PfSnParametersSetDefaults @ 0x140C2CC5C (PfSnParametersSetDefaults.c)
 *     ViMakeVerifierSettings @ 0x140C3C470 (ViMakeVerifierSettings.c)
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
