/*
 * XREFs of Controller_IsControllerAccessible @ 0x14000BE64
 * Callers:
 *     XilDeviceSlot_SetDeviceContext @ 0x140001348 (XilDeviceSlot_SetDeviceContext.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x140018AD4 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Register_WaitForControllerReady @ 0x140019340 (Register_WaitForControllerReady.c)
 *     Interrupter_D0Entry @ 0x1400197B4 (Interrupter_D0Entry.c)
 *     DeviceSlot_Initialize @ 0x140019DCC (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x140019F40 (Command_Initialize.c)
 *     Register_ControllerStop @ 0x14001A214 (Register_ControllerStop.c)
 *     Controller_Start @ 0x14001B1F0 (Controller_Start.c)
 *     Register_ControllerReset @ 0x14001C654 (Register_ControllerReset.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x140024160 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1400251A0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140026440 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1400277B0 (RootHub_UcxEvtClearPortFeature.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x140029C68 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_UcxEvtReset @ 0x14002DE50 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtDisable @ 0x14002E4E0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x14002EFF0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtAddress @ 0x140030810 (UsbDevice_UcxEvtAddress.c)
 *     Control_EP_Disable @ 0x140031C40 (Control_EP_Disable.c)
 *     Isoch_EP_Disable @ 0x140032E40 (Isoch_EP_Disable.c)
 *     Bulk_EP_Disable @ 0x140038BD0 (Bulk_EP_Disable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x14003B530 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003B700 (UsbDevice_UcxEvtUpdate.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D690 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 *     Controller_UcxEvtReset @ 0x140042BE0 (Controller_UcxEvtReset.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x14004A220 (RootHub_UcxEvtGetPortErrorCount.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
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
      (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      v2,
      *v3);
  }
  return 0;
}
