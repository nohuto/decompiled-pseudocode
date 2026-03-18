/*
 * XREFs of RtlStringCbCopyW @ 0x140436640
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x140435DDC (RtlpAllowsLowBoxAccess.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BCD2C (SeSetLearningModeObjectInformation.c)
 *     PopIdleWakeNotifyWakeSource @ 0x1405D6224 (PopIdleWakeNotifyWakeSource.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1405E17B4 (RtlpGetNameFromLangInfoNode.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14071BA00 (PiDcResetChildDeviceContainerCallback.c)
 *     PfSnParametersRead @ 0x14073BCB0 (PfSnParametersRead.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x140773248 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     SepRmFetchGlobalSacl @ 0x14078520C (SepRmFetchGlobalSacl.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x1407915A4 (PerfDiagpStartPerfDiagLogger.c)
 *     WmipAddMofResource @ 0x1407964D8 (WmipAddMofResource.c)
 *     WmipGenerateBinaryMofNotification @ 0x140796698 (WmipGenerateBinaryMofNotification.c)
 *     PiSwIrpInterfaceRegister @ 0x14095D5E8 (PiSwIrpInterfaceRegister.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14096D434 (PiDcHandleCustomDeviceEvent.c)
 *     PiSwFindSwDevice @ 0x1409A1B58 (PiSwFindSwDevice.c)
 *     PiSwCompleteCreate @ 0x1409A3A80 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 *     WmipIncludeStaticNames @ 0x1409B318C (WmipIncludeStaticNames.c)
 *     WmipInsertStaticNames @ 0x1409B622C (WmipInsertStaticNames.c)
 *     DbgkSendSystemDllMessages @ 0x1409B9DBC (DbgkSendSystemDllMessages.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PipMakeGloballyUniqueId @ 0x140A5491C (PipMakeGloballyUniqueId.c)
 *     WmipEnumerateMofResources @ 0x140A79990 (WmipEnumerateMofResources.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140A9CEE8 (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpressionConvertToString @ 0x140ABABFC (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x140BFACB0 (MfgInitSystem.c)
 *     PfSnParametersSetDefaults @ 0x140C1BB5C (PfSnParametersSetDefaults.c)
 *     ViMakeVerifierSettings @ 0x140C2B190 (ViMakeVerifierSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  size_t v4; // r9
  signed __int64 v5; // r10
  wchar_t v6; // ax
  NTSTRSAFE_PWSTR v7; // rax
  NTSTATUS result; // eax

  v3 = cbDest >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v4 = 2147483646 - v3;
    v5 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v4 + v3) )
        break;
      v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
      if ( !v6 )
        break;
      *pszDest++ = v6;
      --v3;
    }
    while ( v3 );
    v7 = pszDest - 1;
    if ( v3 )
      v7 = pszDest;
    *v7 = 0;
    return v3 == 0 ? 0x80000005 : 0;
  }
  return result;
}
