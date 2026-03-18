/*
 * XREFs of RtlStringCchPrintfW @ 0x140476998
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x1405EF1AC (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x1405EF2F4 (RtlpEtcIsValidFeatureId.c)
 *     CarLiveDumpCallBack @ 0x140619C10 (CarLiveDumpCallBack.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14069C160 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IopCopyBootLogRegistryToFile @ 0x140711E7C (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14072B770 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14072C050 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x140733190 (IopCreateLegacyDeviceIds.c)
 *     PiDrvDbRegisterNode @ 0x140738408 (PiDrvDbRegisterNode.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407388B0 (PiDrvDbRegisterNodeCallback.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407624E0 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x14076298C (PopAdaptiveStandbyTraceSessionSettings.c)
 *     PspShutdownCsrProcess @ 0x140772FB4 (PspShutdownCsrProcess.c)
 *     PspSessionObjectCreate @ 0x14077BDCC (PspSessionObjectCreate.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407814C0 (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1407952E0 (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x1407C1EAC (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C27E0 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14080314C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x14080824C (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x14080FADC (AslpFileQueryVersionString.c)
 *     _SysCtxOpenControlSet @ 0x1408201E0 (_SysCtxOpenControlSet.c)
 *     EncloseSubCondition @ 0x1408608AC (EncloseSubCondition.c)
 *     LocalpGetStringForCondition @ 0x140861744 (LocalpGetStringForCondition.c)
 *     GetPrintableOperandValue @ 0x140861C7C (GetPrintableOperandValue.c)
 *     SepValidateReferencedCachedHandles @ 0x1408F2790 (SepValidateReferencedCachedHandles.c)
 *     EtwpPsProvTraceProcess @ 0x14094D000 (EtwpPsProvTraceProcess.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140995494 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IoCreateDevice @ 0x1409A3530 (IoCreateDevice.c)
 *     IoWMIOpenBlock @ 0x1409CD120 (IoWMIOpenBlock.c)
 *     RtlpInitNlsSectionName @ 0x140A093D0 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x140A0949C (RtlpInitNlsFileName.c)
 *     PipMakeGloballyUniqueId @ 0x140A582C0 (PipMakeGloballyUniqueId.c)
 *     IopCreateArcName @ 0x140A75840 (IopCreateArcName.c)
 *     IopBootLog @ 0x140A785F8 (IopBootLog.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A91630 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140A98C04 (PiDevCfgLogDeviceConfigured.c)
 *     AslGuidToString @ 0x140AA4DBC (AslGuidToString.c)
 *     IoCreateDriver @ 0x140AB1C90 (IoCreateDriver.c)
 *     IopCreateArcNamesDisk @ 0x140C1C364 (IopCreateArcNamesDisk.c)
 *     IopReassignSystemRoot @ 0x140C1CFA0 (IopReassignSystemRoot.c)
 *     PipInitComputerIds @ 0x140C63B74 (PipInitComputerIds.c)
 * Callees:
 *     _vsnwprintf @ 0x1404FD260 (_vsnwprintf.c)
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
