/*
 * XREFs of HUBMISC_VerifierDbgBreak @ 0x140033D80
 * Callers:
 *     HUBHTX_CheckAndSelectIfAny20PortChangeSet @ 0x140002B80 (HUBHTX_CheckAndSelectIfAny20PortChangeSet.c)
 *     HUBHTX_CheckAndSelectIfAny30PortChangeSet @ 0x140002CE8 (HUBHTX_CheckAndSelectIfAny30PortChangeSet.c)
 *     HUBHTX_Get20PortChangeEvent @ 0x140003710 (HUBHTX_Get20PortChangeEvent.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x140003AE0 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x140004800 (HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset.c)
 *     HUBHTX_GetPortLostChangeEvent @ 0x140004AE8 (HUBHTX_GetPortLostChangeEvent.c)
 *     HUBHTX_HubControlTransferComplete @ 0x140005370 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_PortControlTransferComplete @ 0x140005550 (HUBHTX_PortControlTransferComplete.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x140005F60 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x140008090 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBHSM_CheckIfThereIsAValidHubChange @ 0x1400088D0 (HUBHSM_CheckIfThereIsAValidHubChange.c)
 *     HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x140008B40 (HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x14000EFF4 (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016B00 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x140018680 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x14001C038 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x140021140 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 *     HUBUCX_UCXIoctlComplete @ 0x140028CB0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBDTX_ControlTransferComplete @ 0x14002A300 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability @ 0x14002DDAC (HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x140030494 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x140030D30 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBMISC_LogDescriptorValidationWarningForDevice @ 0x140030E20 (HUBMISC_LogDescriptorValidationWarningForDevice.c)
 *     HUBMISC_LogDeviceReEnumeration @ 0x140030F04 (HUBMISC_LogDeviceReEnumeration.c)
 *     HUBMISC_LogResetTimeout @ 0x140030F9C (HUBMISC_LogResetTimeout.c)
 *     HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x140031044 (HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode.c)
 *     FWUPDATE_HubVendorControlTransferComplete @ 0x1400418E0 (FWUPDATE_HubVendorControlTransferComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_sq @ 0x140034B3C (WPP_RECORDER_SF_sq.c)
 */

BOOLEAN __fastcall HUBMISC_VerifierDbgBreak(const char *a1, __int64 a2)
{
  int v3; // edx
  int v4; // eax
  BOOLEAN result; // al

  DbgPrint("USB Hardware Verifier Break for %s\n", a1);
  v4 = *(_DWORD *)(a2 + 984);
  switch ( v4 )
  {
    case 2000:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 2528LL), v3, 3, 87);
      DbgPrint("Run !rcdrlogdump usbhub3 -a 0x%p, !hub_info 0x%p\n", *(_QWORD *)(*(_QWORD *)(a2 + 960) + 2528LL));
      break;
    case 3000:
LABEL_5:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 1432LL), v3, 4, 88);
      DbgPrint("Run !rcdrlogdump usbhub3 -a 0x%p, !port_info 0x%p\n", *(_QWORD *)(*(_QWORD *)(a2 + 960) + 1432LL));
      break;
    case 4000:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 8LL) + 1432LL), v3, 4, 89);
      DbgPrint(
        "Run !rcdrlogdump usbhub3 -a 0x%p, !device_info 0x%p\n",
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 8LL) + 1432LL));
      break;
    case 5000:
      goto LABEL_5;
    default:
      break;
  }
  result = KdRefreshDebuggerNotPresent();
  if ( !result )
    __debugbreak();
  return result;
}
