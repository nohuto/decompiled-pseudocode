/*
 * XREFs of UsbhAcquirePdoStateLock @ 0x140023C80
 * Callers:
 *     UsbhSyncResumeDeviceInternal @ 0x1400225DC (UsbhSyncResumeDeviceInternal.c)
 *     UsbhSshPropagateResume @ 0x140023FC8 (UsbhSshPropagateResume.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1400242E4 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     UsbhBusConnectPdo @ 0x1400243D4 (UsbhBusConnectPdo.c)
 *     UsbhQueryBusRelations @ 0x140024E3C (UsbhQueryBusRelations.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x140025314 (Usbh_BusPnpStop_PdoEvent.c)
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 *     UsbhEtwRundown @ 0x14002DB8C (UsbhEtwRundown.c)
 *     UsbhWcCancelEnumeration @ 0x140034FE0 (UsbhWcCancelEnumeration.c)
 *     UsbhFdoResetPdoPort @ 0x14003FC5C (UsbhFdoResetPdoPort.c)
 *     UsbhCycleDevicePort @ 0x140045ADC (UsbhCycleDevicePort.c)
 *     UsbhSoftDisconnectPdo @ 0x1400478C0 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x140048294 (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140048428 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1400485C8 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x14004898C (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140048BD8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhSetEnumerationFailed @ 0x140058C08 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall UsbhAcquirePdoStateLock(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax

  *(_BYTE *)(a2 + 132) = KeAcquireSpinLockRaiseToDpc(&HubG);
  *(_DWORD *)(a2 + 136) = 1;
  *(_DWORD *)(a2 + 92) = a3;
  *(_DWORD *)(a2 + 88) = 2018460752;
  qword_14006F5E0 = a2;
  result = KeGetCurrentThread();
  *(_QWORD *)(a2 + 24) = result;
  return result;
}
