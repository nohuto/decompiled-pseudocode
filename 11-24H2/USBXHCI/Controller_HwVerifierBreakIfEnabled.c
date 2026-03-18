/*
 * XREFs of Controller_HwVerifierBreakIfEnabled @ 0x1400049B4
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x140001110 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x140001D68 (UsbDevice_DisableCompletion.c)
 *     Endpoint_TransferEventHandler @ 0x140002700 (Endpoint_TransferEventHandler.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1400038CC (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1400042A0 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Control_ProcessTransferEventWithED1 @ 0x140005EE0 (Control_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1400077FC (Control_ProcessTransferEventWithED0.c)
 *     Endpoint_OnCancelStopCompletion @ 0x140007D60 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x140008250 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1400085E0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x140008B60 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1400091E0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14000A09C (Command_HandleCommandRingStoppedEvent.c)
 *     Command_HandleCommandCompletionEvent @ 0x14000B740 (Command_HandleCommandCompletionEvent.c)
 *     Controller_CheckHealth @ 0x14000CDC4 (Controller_CheckHealth.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140011400 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x140011E20 (Isoch_ProcessTransferEventWithED0.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x14002CE60 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x14002F8B0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x14002FC80 (UsbDevice_EnableCompletion.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400370B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1400379B0 (Controller_WdfEvtDeviceD0Exit.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x140039910 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Controller_SetControllerGone @ 0x14003C400 (Controller_SetControllerGone.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D690 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 *     Controller_LogDiagnosticsOnD0Exit @ 0x1400410B4 (Controller_LogDiagnosticsOnD0Exit.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x140041408 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x140047B88 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Controller_ConfigureS0IdleSettings @ 0x140074818 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_UpdateIdleTimeout @ 0x140081F88 (Controller_UpdateIdleTimeout.c)
 * Callees:
 *     McTemplateK0pppxsb16b16_EtwWriteTransfer @ 0x140030FF4 (McTemplateK0pppxsb16b16_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_s @ 0x1400339F8 (WPP_RECORDER_SF_s.c)
 */

char __fastcall Controller_HwVerifierBreakIfEnabled(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        const char *a5,
        __int128 *a6,
        __int128 *a7)
{
  _UNKNOWN **v11; // rax
  __int128 *v12; // rcx
  __int128 *v13; // rax
  __int128 v15; // [rsp+50h] [rbp-18h] BYREF

  v11 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LOBYTE(v11) = WPP_RECORDER_SF_s(*(_QWORD *)(a1 + 72), a2, a3, a4);
  if ( (a4 & *(_QWORD *)(a1 + 848)) != 0 && !*(_BYTE *)(a1 + 797) )
  {
    DbgPrint("xHCI Hardware Verifier Break: %s\n", a5);
    LOBYTE(v11) = KdRefreshDebuggerNotPresent();
    if ( !(_BYTE)v11 )
      __debugbreak();
  }
  v15 = 0LL;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x10) != 0 )
  {
    v12 = &v15;
    v13 = &v15;
    if ( a7 )
      v12 = a7;
    if ( a6 )
      v13 = a6;
    LOBYTE(v11) = McTemplateK0pppxsb16b16_EtwWriteTransfer(
                    (_DWORD)v12,
                    a2,
                    a3,
                    *(_QWORD *)(a1 + 8),
                    a2,
                    a3,
                    a4,
                    (__int64)a5,
                    (__int64)v13,
                    (__int64)v12);
  }
  return (char)v11;
}
