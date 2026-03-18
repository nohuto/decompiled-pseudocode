/*
 * XREFs of Controller_IsControllerAccessible @ 0x1400086E0
 * Callers:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     Controller_Start @ 0x14000B894 (Controller_Start.c)
 *     Register_ControllerStop @ 0x14000C7B8 (Register_ControllerStop.c)
 *     DeviceSlot_Initialize @ 0x14000D658 (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x14000D7CC (Command_Initialize.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x140024440 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1400252D0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1400269B0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x140027D64 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x140028710 (RootHub_UcxEvtClearPortFeature.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x14002A6A8 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x14002C4C8 (XilDeviceSlot_SetDeviceContext.c)
 *     Register_ControllerReset @ 0x14002D87C (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x14002E138 (Register_WaitForControllerReady.c)
 *     UsbDevice_UcxEvtReset @ 0x14002E880 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtDisable @ 0x14002F190 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x14002FFD0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtAddress @ 0x140031660 (UsbDevice_UcxEvtAddress.c)
 *     Interrupter_D0Entry @ 0x140032140 (Interrupter_D0Entry.c)
 *     Control_EP_Disable @ 0x140033180 (Control_EP_Disable.c)
 *     Bulk_EP_Disable @ 0x140034980 (Bulk_EP_Disable.c)
 *     Isoch_EP_Disable @ 0x1400349D0 (Isoch_EP_Disable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x14003B420 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003B5F0 (UsbDevice_UcxEvtUpdate.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D7A0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_InternalReset @ 0x140040D9C (Controller_InternalReset.c)
 *     Controller_UcxEvtReset @ 0x140043090 (Controller_UcxEvtReset.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x14004AB10 (RootHub_UcxEvtGetPortErrorCount.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 */

char __fastcall Controller_IsControllerAccessible(__int64 a1)
{
  char v2; // cl
  char *v3; // rax
  _UNKNOWN **v5; // rdx

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL);
  v3 = (char *)(a1 + 797);
  if ( v2 && !*v3 )
    return 1;
  v5 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a1 + 72),
      (_DWORD)v5,
      4,
      245,
      (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
      v2,
      *v3);
  }
  return 0;
}
