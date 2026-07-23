/*
 * XREFs of RtlStringCchPrintfW @ 0x140472F38
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x1405EC78C (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x1405EC8D4 (RtlpEtcIsValidFeatureId.c)
 *     CarLiveDumpCallBack @ 0x1406181D0 (CarLiveDumpCallBack.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14069D1E0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IopCopyBootLogRegistryToFile @ 0x14070FA0C (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140729760 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14072A040 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x1407310C4 (IopCreateLegacyDeviceIds.c)
 *     PiDrvDbRegisterNode @ 0x140736338 (PiDrvDbRegisterNode.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407367E0 (PiDrvDbRegisterNodeCallback.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x140761CB0 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x14076215C (PopAdaptiveStandbyTraceSessionSettings.c)
 *     PspShutdownCsrProcess @ 0x1407731D4 (PspShutdownCsrProcess.c)
 *     PspSessionObjectCreate @ 0x14077BC7C (PspSessionObjectCreate.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407813F0 (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1407953F0 (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x1407C30E0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C3A10 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14080388C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x14080898C (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x14081021C (AslpFileQueryVersionString.c)
 *     _SysCtxOpenControlSet @ 0x140820920 (_SysCtxOpenControlSet.c)
 *     EncloseSubCondition @ 0x140864EB8 (EncloseSubCondition.c)
 *     LocalpGetStringForCondition @ 0x140865D50 (LocalpGetStringForCondition.c)
 *     GetPrintableOperandValue @ 0x140866288 (GetPrintableOperandValue.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     EtwpPsProvTraceProcess @ 0x1408F1570 (EtwpPsProvTraceProcess.c)
 *     SepValidateReferencedCachedHandles @ 0x140913DDC (SepValidateReferencedCachedHandles.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1409804D4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IoWMIOpenBlock @ 0x1409B2400 (IoWMIOpenBlock.c)
 *     RtlpInitNlsSectionName @ 0x140A05900 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x140A059CC (RtlpInitNlsFileName.c)
 *     PipMakeGloballyUniqueId @ 0x140A4FA70 (PipMakeGloballyUniqueId.c)
 *     IopCreateArcName @ 0x140A6FCE0 (IopCreateArcName.c)
 *     IopBootLog @ 0x140A728F8 (IopBootLog.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A8DDE0 (PiDevCfgResolveVariableExpression.c)
 *     AslGuidToString @ 0x140AA00BC (AslGuidToString.c)
 *     IoCreateDriver @ 0x140AACC00 (IoCreateDriver.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 *     IopCreateArcNamesDisk @ 0x140C1E3A4 (IopCreateArcNamesDisk.c)
 *     IopReassignSystemRoot @ 0x140C1EFE0 (IopReassignSystemRoot.c)
 *     PipInitComputerIds @ 0x140C65CF0 (PipInitComputerIds.c)
 * Callees:
 *     _vsnwprintf @ 0x1404FAB20 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v4; // rsi
  NTSTATUS v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147483643;
    }
    else if ( v6 != v4 )
    {
      return v5;
    }
    pszDest[v4] = 0;
    return v5;
  }
  v5 = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return v5;
}
