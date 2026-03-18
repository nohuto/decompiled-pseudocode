/*
 * XREFs of RtlStringCchPrintfW @ 0x140476E64
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x1405E2E98 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x1405E2FE0 (RtlpEtcIsValidFeatureId.c)
 *     CarLiveDumpCallBack @ 0x14060DC50 (CarLiveDumpCallBack.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140690E10 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IopCopyBootLogRegistryToFile @ 0x140705D7C (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14071F7F0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1407200D0 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x140726EF8 (IopCreateLegacyDeviceIds.c)
 *     PiDrvDbRegisterNode @ 0x14072C178 (PiDrvDbRegisterNode.c)
 *     PiDrvDbRegisterNodeCallback @ 0x14072C620 (PiDrvDbRegisterNodeCallback.c)
 *     PspShutdownCsrProcess @ 0x1407635E4 (PspShutdownCsrProcess.c)
 *     PspSessionObjectCreate @ 0x14076C22C (PspSessionObjectCreate.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140772270 (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x140785F10 (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x1407B39A0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407B42D0 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1407F329C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x1407F86DC (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x1407FFF6C (AslpFileQueryVersionString.c)
 *     _SysCtxOpenControlSet @ 0x1408102E0 (_SysCtxOpenControlSet.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14088F39C (PiDevCfgLogDeviceConfigured.c)
 *     RtlpInitNlsFileName @ 0x1408F95F4 (RtlpInitNlsFileName.c)
 *     RtlpInitNlsSectionName @ 0x1408FB570 (RtlpInitNlsSectionName.c)
 *     EtwpPsProvTraceProcess @ 0x140921388 (EtwpPsProvTraceProcess.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14094F0B4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     SepValidateReferencedCachedHandles @ 0x140983B48 (SepValidateReferencedCachedHandles.c)
 *     IoCreateDevice @ 0x14099E640 (IoCreateDevice.c)
 *     IoWMIOpenBlock @ 0x1409B4DC0 (IoWMIOpenBlock.c)
 *     EncloseSubCondition @ 0x1409E67F4 (EncloseSubCondition.c)
 *     LocalpGetStringForCondition @ 0x1409E765C (LocalpGetStringForCondition.c)
 *     GetPrintableOperandValue @ 0x1409E7B94 (GetPrintableOperandValue.c)
 *     PipMakeGloballyUniqueId @ 0x140A5491C (PipMakeGloballyUniqueId.c)
 *     IopCreateArcName @ 0x140A73568 (IopCreateArcName.c)
 *     IopBootLog @ 0x140A76824 (IopBootLog.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A8C530 (PiDevCfgResolveVariableExpression.c)
 *     AslGuidToString @ 0x140A9F59C (AslGuidToString.c)
 *     IoCreateDriver @ 0x140AACA20 (IoCreateDriver.c)
 *     IopCreateArcNamesDisk @ 0x140C0B190 (IopCreateArcNamesDisk.c)
 *     IopReassignSystemRoot @ 0x140C0BDD0 (IopReassignSystemRoot.c)
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 * Callees:
 *     _vsnwprintf @ 0x1404FAAE0 (_vsnwprintf.c)
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
