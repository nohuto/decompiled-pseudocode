/*
 * XREFs of UsbhWait @ 0x14001A1D4
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x14000B2A0 (UsbhPdoInternalDeviceControl.c)
 *     Usbh_PCE_Suspend_Action @ 0x1400129AC (Usbh_PCE_Suspend_Action.c)
 *     UsbhCancelResetTimeout @ 0x14001855C (UsbhCancelResetTimeout.c)
 *     UsbhReset1Complete @ 0x1400188C0 (UsbhReset1Complete.c)
 *     UsbhFdoSetD0Cold @ 0x1400227C4 (UsbhFdoSetD0Cold.c)
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 *     UsbhInitializeDevice @ 0x14002A2B4 (UsbhInitializeDevice.c)
 *     UsbhFdoSetD0Warm @ 0x140037CE4 (UsbhFdoSetD0Warm.c)
 *     UsbhSyncPowerOnPorts @ 0x140038394 (UsbhSyncPowerOnPorts.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1400388C8 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhInitialize @ 0x14003C7C0 (UsbhInitialize.c)
 *     UsbhOvercurrentResetWorker @ 0x14003F0B0 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueSoftConnectChange @ 0x1400439CC (UsbhQueueSoftConnectChange.c)
 *     UsbhHardReset_Action @ 0x14004B668 (UsbhHardReset_Action.c)
 *     UsbhPortResumeFailed @ 0x140057C90 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhRawWait @ 0x14001A244 (UsbhRawWait.c)
 */

__int64 __fastcall UsbhWait(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v2 = *(_QWORD *)(a1 + 64);
      if ( v2 )
      {
        v3 = *(_QWORD *)(v2 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v2 + 880)) & *(_DWORD *)(v2 + 884));
        *(_QWORD *)(v3 + 8) = 0LL;
        *(_QWORD *)(v3 + 24) = 0LL;
        *(_DWORD *)v3 = 1953063287;
        *(_QWORD *)(v3 + 16) = a2;
      }
    }
  }
  return UsbhRawWait(a2);
}
