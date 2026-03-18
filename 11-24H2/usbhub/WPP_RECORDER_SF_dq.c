/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x14003DE14
 * Callers:
 *     Usbh_PCE_wRun_Action @ 0x140001010 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1400017C0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x140001FF0 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x140003220 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x140004574 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x140004BE4 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhPCE_Disable @ 0x140006878 (UsbhPCE_Disable.c)
 *     UsbhHubDispatchPortEvent @ 0x140007260 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubRunPortChangeQueue @ 0x1400083A0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessChangeWorker @ 0x14000F8C0 (UsbhHubProcessChangeWorker.c)
 *     Usbh_PCE_Disable_Action @ 0x140011580 (Usbh_PCE_Disable_Action.c)
 *     UsbhSS_PdoWakeWorker @ 0x14001FF70 (UsbhSS_PdoWakeWorker.c)
 *     UsbhBusConnectPdo @ 0x1400243D4 (UsbhBusConnectPdo.c)
 *     Usbh_PCE_wDone_Action @ 0x14002B050 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x140031BE0 (Usbh_PCE_Enable_Action.c)
 *     UsbhExceptionTrace @ 0x1400343AC (UsbhExceptionTrace.c)
 *     UsbhPCE_psSUSPEND @ 0x1400351E0 (UsbhPCE_psSUSPEND.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400372B8 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhGetDeviceBusInfo @ 0x14003B72C (UsbhGetDeviceBusInfo.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x140042C7C (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_Check @ 0x14004317C (UsbhPCE_Check.c)
 *     UsbhPCE_Close @ 0x140043244 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x140043304 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_SD_Resume @ 0x140043748 (UsbhPCE_SD_Resume.c)
 *     UsbhPCE_wChangeERROR @ 0x1400438F8 (UsbhPCE_wChangeERROR.c)
 *     Usbh_PCE_Check_Action @ 0x140044080 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1400441BC (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1400443E4 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1400449A8 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x140044B14 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x140044E04 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_dq(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, a5, v8, (__int64 *)va);
}
