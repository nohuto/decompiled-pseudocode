/*
 * XREFs of UsbhSignalSyncDeviceResetPdo @ 0x1C0001CD0
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C0001B70 (UsbhBusConnectPdo.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C00039F8 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C0010600 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0017430 (UsbhHubDispatchPortEvent.c)
 *     UsbhDriverResetPort @ 0x1C001B8C0 (UsbhDriverResetPort.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C001C090 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C001F8E0 (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C0033BAC (UsbhFreePortChangeQueueTimeoutObject.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0036434 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1C0037578 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003A19C (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C003A81C (Usbh_BusPause_PdoEvent.c)
 *     UsbhFailDriverResetPort @ 0x1C004CBE0 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x1C004DC10 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E9B8 (UsbhSetEnumerationFailed.c)
 *     UsbhResetPortData @ 0x1C0057774 (UsbhResetPortData.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

void __fastcall UsbhSignalSyncDeviceResetPdo(__int64 a1, __int64 a2, int a3)
{
  int v5; // ebp
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // si
  __int64 v8; // rax

  v5 = a1;
  v6 = (KSPIN_LOCK *)(FdoExt(a1) + 5168);
  v7 = KeAcquireSpinLockRaiseToDpc(v6);
  if ( a2 && *(_QWORD *)(PdoExt(a2) + 864) )
  {
    *(_DWORD *)(PdoExt(a2) + 872) = a3;
    Log(v5, 4, 1936287557, a2, 0LL);
    v8 = PdoExt(a2);
    KeSetEvent(*(PRKEVENT *)(v8 + 864), 0, 0);
  }
  KeReleaseSpinLock(v6, v7);
}
